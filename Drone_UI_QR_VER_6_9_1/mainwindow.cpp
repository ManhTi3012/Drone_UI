#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>
#include <QStringView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->serial_log->setReadOnly(true);
    ui->system_log->setReadOnly(true);

    horizon = new VirtualHorizon(ui->direction_chart);  // or anywhere
    horizon->raise();     // ensure it's above the label
    horizon->hide();

    accel_x_graph = new GraphWidget(ui->accel_x_chart);
    accel_x_graph->raise();
    accel_x_graph->show();

    accel_y_graph = new GraphWidget(ui->accel_y_chart);
    accel_y_graph->raise();
    accel_y_graph->show();

    accel_z_graph = new GraphWidget(ui->accel_z_chart);
    accel_z_graph->raise();
    accel_z_graph->show();

    gyro_x_graph = new GraphWidget(ui->gyro_x_chart);
    gyro_x_graph->raise();
    gyro_x_graph->show();

    gyro_y_graph = new GraphWidget(ui->gyro_y_chart);
    gyro_y_graph->raise();
    gyro_y_graph->show();

    gyro_z_graph = new GraphWidget(ui->gyro_z_chart);
    gyro_z_graph->raise();
    gyro_z_graph->show();

    // // Load SVG (scalable vector graphics)
    // QPixmap pixmap(":/assets/drone_outline_with_blade_colored.svg");

    // // Check if image loaded
    // if(pixmap.isNull()) {
    //     qDebug() << "Failed to load image! Check path or file format.";
    // } else {
    //     ui->drone_image->setPixmap(pixmap);
    //     //ui->drone_image->setScaledContents(true);  // Ensure SVG scales properly
    // }

    // Connect navigation buttons
    connect(ui->setting_page_button, &QPushButton::clicked, this, [=]() {
        onNavButtonClicked(ui->setting_page_button, 2);
    });
    connect(ui->connect_page_button, &QPushButton::clicked, this, [=]() {
        onNavButtonClicked(ui->connect_page_button, 1);
    });
    connect(ui->status_page_button, &QPushButton::clicked, this, [=]() {
        onNavButtonClicked(ui->status_page_button, 0);
    });

    // Connect serial port start button
    connect(ui->sync_button, &QPushButton::clicked, this, &MainWindow::handleSync);

    connect(ui->scan_button, &QPushButton::clicked, this, &MainWindow::handleScan);

    // Set default selected button
    onNavButtonClicked(ui->status_page_button, 0);

    serial = new QSerialPort(this);

    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readSerialData);
    connect(serial, &QSerialPort::errorOccurred,this, &MainWindow::handleSerialError);

    comPortBox = ui->com_port_box;
    comPortBox->clear(); // Optional, but good practice

    status_ring = new DonutStatusWidget(ui->donut_status_frame);

    status_ring->setActive(true);
    //status_ring->setGeometry(0, 0, ui->donut_status_frame->width(), ui->accel_x_chart->height());
    //status_ring->setSectionColor(0, 47, 159, 255);


}

MainWindow::~MainWindow()
{
    serial->close();
    delete ui;
}

void MainWindow::onNavButtonClicked(QPushButton* button, int pageIndex) {
    ui->stackedWidget->setCurrentIndex(pageIndex);

    if (currentNavButton) {
        // Reset style of the previous button
        currentNavButton->setStyleSheet("border:2px solid rgb(153, 97, 0);border-radius:5px; color: rgb(153, 97, 0);");
    }

    // Highlight the selected button
    button->setStyleSheet("border:2px solid rgb(255, 161, 0); border-radius:5px; color: rgb(255, 161, 0);");
    currentNavButton = button;
}

void MainWindow::handleScan() {
    ui->com_port_box->clear();

    // Scan for available ports
    foreach (const QSerialPortInfo &port, QSerialPortInfo::availablePorts()) {
        QString display_text = port.portName();

        // Optional: Add description if available
        // if (!port.description().isEmpty()) {
        //     display_text += " (" + port.description() + ")";
        // }

        ui->com_port_box->addItem(display_text, port.portName());
    }

    // Handle no ports case
    if (ui->com_port_box->count() == 0) {
        ui->com_port_box->addItem("NO PLUG FOUND");
        status_ring->setSectionColor(0, 255, 22, 87);
        status_ring->setSectionColor(5, 255, 22, 87);
        ui->com_port_box->setEnabled(false);
        ui->sync_button->setEnabled(false);
    } else {
        ui->com_port_box->setEnabled(true);
        ui->sync_button->setEnabled(true);
        status_ring->setSectionColor(0, 255, 161, 0);
        status_ring->setSectionColor(5, 255, 161, 0);
    }
}

void MainWindow::handleSync() {
    if (serial->isOpen()) {
        serial->close();
        ui->sync_button->setText("SYNC");

        // Update label to DE-SYNCED
        ui->sync_status->setText("DE-SYNCED");
        ui->sync_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

        ui->sync_status_2->setText("DE-SYNCED");
        ui->sync_status_2->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

        status_ring->setSectionColor(0, 255, 22, 87);
        status_ring->setSectionColor(1, 255, 22, 87);
        status_ring->setSectionColor(2, 255, 22, 87);
        status_ring->setSectionColor(3, 255, 22, 87);
        status_ring->setSectionColor(4, 255, 22, 87);
        status_ring->setSectionColor(5, 255, 22, 87);

        ui->com_port_box->setEnabled(true);
        ui->sync_rate_box->setEnabled(true);
        ui->scan_button->setEnabled(true);

        ui->serial_log->appendPlainText(QString::fromUtf8("STATION DE-SYNCED!"));
        ui->serial_log->verticalScrollBar()->setValue(ui->serial_log->verticalScrollBar()->maximum());

        ui->system_log->appendPlainText(QString::fromUtf8("STATION DE-SYNCED!"));
        ui->system_log->verticalScrollBar()->setValue(ui->serial_log->verticalScrollBar()->maximum());

        ui->data_status->setText("DE-SYNCED");
        ui->data_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

        ui->data_rate_status->setText("DE-SYNCED");
        ui->data_rate_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

        ui->buffer_status->setText("DE-SYNCED");
        ui->buffer_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

        return;
    }
    QString port_name = ui->com_port_box->currentData().toString();
    serial->setPortName(port_name);
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    if (serial->open(QIODevice::ReadWrite)) {
        ui->sync_button->setText("DE-SYNC");

        // Update label to SYNCED
        ui->sync_status->setText("SYNCED");
        ui->sync_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(107, 181, 19);border-color: rgb(107, 181, 19);border-radius: 7px;");

        ui->sync_status_2->setText("SYNCED");
        ui->sync_status_2->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(107, 181, 19);border-color: rgb(107, 181, 19);border-radius: 7px;");

        status_ring->setSectionColor(4, 107, 181, 19);
        status_ring->setSectionColor(5, 107, 181, 19);
        status_ring->setSectionColor(0, 107, 181, 19);

        ui->com_port_box->setEnabled(false);
        ui->sync_rate_box->setEnabled(false);
        ui->scan_button->setEnabled(false);


    } else {
        ui->sync_status->setText("DE-SYNCED");
        ui->sync_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

        ui->sync_status_2->setText("DE-SYNCED");
        ui->sync_status_2->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

        status_ring->setSectionColor(0, 255, 22, 87);
        status_ring->setSectionColor(1, 255, 22, 87);
        status_ring->setSectionColor(2, 255, 22, 87);
        status_ring->setSectionColor(3, 255, 22, 87);
        status_ring->setSectionColor(4, 255, 22, 87);
        status_ring->setSectionColor(5, 255, 22, 87);
    }
}


void MainWindow::handleSerialError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        qDebug() << "STATION OUT OF SYNC!";
        // ui->serial_log->appendPlainText(QString::fromUtf8("STATION OUT OF SYNC!"));
        // ui->serial_log->verticalScrollBar()->setValue(ui->serial_log->verticalScrollBar()->maximum());

        // ui->system_log->appendPlainText(QString::fromUtf8("STATION DE-SYNCED!"));
        // ui->system_log->verticalScrollBar()->setValue(ui->serial_log->verticalScrollBar()->maximum());
        handleSync();
        parseLine("NO:");
    }
}


void MainWindow::readSerialData() {
    static QByteArray buffer;
    static QElapsedTimer rateTimer;
    static qint64 bytesReceived = 0;
    static quint8 lastByte = 0;

    static bool timerInitialized = false;
    if (!timerInitialized) {
        rateTimer.start();
        timerInitialized = true;
    }

    // Read and track data
    QByteArray newData = serial->readAll();
    buffer.append(newData);
    bytesReceived += newData.size();

    if (!newData.isEmpty()) {
        lastByte = static_cast<quint8>(newData.back());
        updateBinaryDisplay(lastByte);
    }

    // Process complete lines
    while (buffer.contains('\n')) {
        int newlineIndex = buffer.indexOf('\n');
        QByteArray line = buffer.left(newlineIndex).trimmed();
        buffer.remove(0, newlineIndex + 1);

        parseLine(line);  // Your custom parsing
        ui->serial_log->appendPlainText(QString::fromUtf8(line));
        ui->serial_log->verticalScrollBar()->setValue(ui->serial_log->verticalScrollBar()->maximum());
    }

    // Update metrics every 500ms
    if (rateTimer.elapsed() >= 500) {
        updateDataRate(bytesReceived, rateTimer.restart());
        bytesReceived = 0;
        updateBufferStatus();
    }
}

void MainWindow::parseLine(const QByteArray &line)
{
    QString str = QString::fromUtf8(line);

    // Match key:value1,value2,... up to 4 values
    if (str.contains(':')) {
        QStringList parts = str.split(':');
        if (parts.size() != 2) return;

        QString key = parts[0];
        QStringList values = parts[1].split(',');

        // Optional: pad to 4 values
        while (values.size() < 4) values.append("0");

        // Now parse the values safely
        if (key == "DIR" && values.size() >= 1) {
            horizon->show();
            float pitch = values[0].toFloat();
            float roll = values[1].toFloat();
            horizon->resize(ui->direction_chart->size());
            horizon->move(0, 0);
            horizon->setAngles(pitch, roll);

            // accel_x_graph->setGeometry(0, 0, ui->accel_x_chart->width(), ui->accel_x_chart->height());
            // accel_x_graph->addDataPoint(roll);

            // accel_y_graph->setGeometry(0, 0, ui->accel_y_chart->width(), ui->accel_y_chart->height());
            // accel_y_graph->addDataPoint(pitch);

            // QString x_text = QString("X:[   %2   ]").arg(roll, 0, 'f', 2);
            // QString y_text = QString("Y:[   %2   ]").arg(pitch, 0, 'f', 2);

            // ui->accel_x->setText(x_text);
            // ui->accel_y->setText(y_text);
        }
        else if (key == "ACC" && values.size() >= 3) {
            float ax = values[0].toFloat();
            float ay = values[1].toFloat();
            float az = values[2].toFloat();

            QString x_text = QString("X:[   %2   ]").arg(ax, 0, 'f', 2);
            QString y_text = QString("Y:[   %2   ]").arg(ay, 0, 'f', 2);
            QString z_text = QString("Z:[   %2   ]").arg(az, 0, 'f', 2);

            ui->accel_x->setText(x_text);
            ui->accel_y->setText(y_text);
            ui->accel_z->setText(z_text);

            accel_x_graph->setGeometry(0, 0, ui->accel_x_chart->width(), ui->accel_x_chart->height());
            accel_x_graph->addDataPoint(ax);

            accel_y_graph->setGeometry(0, 0, ui->accel_y_chart->width(), ui->accel_y_chart->height());
            accel_y_graph->addDataPoint(ay);

            accel_z_graph->setGeometry(0, 0, ui->accel_z_chart->width(), ui->accel_z_chart->height());
            accel_z_graph->addDataPoint(az);


        }
        else if (key == "GYR" && values.size() >= 3) {
            float gx = values[0].toFloat();
            float gy = values[1].toFloat();
            float gz = values[2].toFloat();

            QString x_text = QString("X:[   %2   ]").arg(gx, 0, 'f', 2);
            QString y_text = QString("Y:[   %2   ]").arg(gy, 0, 'f', 2);
            QString z_text = QString("Z:[   %2   ]").arg(gz, 0, 'f', 2);

            ui->gyro_x->setText(x_text);
            ui->gyro_y->setText(y_text);
            ui->gyro_z->setText(z_text);

            gyro_x_graph->setGeometry(0, 0, ui->gyro_x_chart->width(), ui->gyro_x_chart->height());
            gyro_x_graph->addDataPoint(gx);

            gyro_y_graph->setGeometry(0, 0, ui->gyro_y_chart->width(), ui->gyro_y_chart->height());
            gyro_y_graph->addDataPoint(gy);

            gyro_z_graph->setGeometry(0, 0, ui->gyro_z_chart->width(), ui->gyro_z_chart->height());
            gyro_z_graph->addDataPoint(gz);

        }
        else if (key == "PWM" && values.size() >= 4) {
            int m1 = values[0].toInt();
            int m2 = values[1].toInt();
            int m3 = values[2].toInt();
            int m4 = values[3].toInt();
            ui->FL_THROTTLE->setValue(m1);
            ui->FR_THROTTLE->setValue(m2);
            ui->BL_THROTTLE->setValue(m3);
            ui->BR_THROTTLE->setValue(m4);
        }
        else if(key == "BAT"){
            double raw = values[0].toDouble();
            double v_adc = (raw / 4095.0) * 3.3;     // ADC voltage
            double v_bat = v_adc * 2.0 + 1.0;              // undo voltage divider

            // Print battery voltage like "3.70V"
            QString voltageStr = QString("%1 V")
                                     .arg(v_bat, 0, 'f', 2);
            //ui->serial_log->appendPlainText(voltageStr);

            // Optional: update a QLabel if you have one
            ui->battery->setText(voltageStr);
            if(v_bat > 3.7){ui->battery->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 161, 0);border-color: rgb(255, 161, 0);border-radius: 7px;");}
            else{ui->battery->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");}
        }
        else if (key == "THR" && values.size() >= 1) {
            int throttle = values[0].toInt();
            ui->throttle_bar->setValue(throttle);
        }
        else if(key == "OK"){
            ui->telemetry_status->setText("CONNECTED");
            ui->system_log->appendPlainText(QString::fromUtf8("DRONE CONNECTED"));
            ui->system_log->verticalScrollBar()->setValue(ui->serial_log->verticalScrollBar()->maximum());
            ui->telemetry_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(107, 181, 19);border-color: rgb(107, 181, 19);border-radius: 7px;");
        }
        else if(key == "NO"){
            ui->telemetry_status->setText("NO SIGNAL");
            ui->system_log->verticalScrollBar()->setValue(ui->serial_log->verticalScrollBar()->maximum());
            ui->telemetry_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");
            ui->system_log->appendPlainText(QString::fromUtf8("DRONE DISCONNECTED"));
            ui->battery->setText("NO DATA");
            ui->FL_THROTTLE->setValue(0);
            ui->FR_THROTTLE->setValue(0);
            ui->BL_THROTTLE->setValue(0);
            ui->BR_THROTTLE->setValue(0);

            ui->data_status->setText("NO DATA");
            ui->data_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

            ui->data_rate_status->setText("NO DATA");
            ui->data_rate_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");

            ui->buffer_status->setText("NO DATA");
            ui->buffer_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 22, 87);border-color: rgb(255, 22, 87);border-radius: 7px;");


            status_ring->setSectionColor(1, 255, 22, 87);
            status_ring->setSectionColor(2, 255, 22, 87);
            status_ring->setSectionColor(3, 255, 22, 87);

        }
    }

}
// Helper to format binary with spaces every 2 bits
QString MainWindow::formatBinary(quint8 byte) {
    QString binary = QString("%1").arg(byte, 8, 2, QChar('0'));
    return QString("%1 %2 %3 %4")
        .arg(binary.left(2))
        .arg(binary.mid(2, 2))
        .arg(binary.mid(4, 2))
        .arg(binary.right(2));
}

// Helper to determine data rate style
QString MainWindow::dataRateStyle(double bytesPerSec) {
    if (bytesPerSec <= 0) return "color: gray;";
    if (bytesPerSec < 100) return "color: orange;";
    if (bytesPerSec < 1000) return "color: yellow;";
    return "color: rgb(107, 181, 19);"; // Green
}

// Helper to determine buffer status style
QString MainWindow::bufferStatusStyle(qint64 bytesAvailable) {
    if (bytesAvailable <= 0) return "color: gray;";
    if (bytesAvailable < 50) return "color: rgb(107, 181, 19);"; // Green
    if (bytesAvailable < 200) return "color: yellow;";
    return "color: rgb(255, 22, 87);"; // Red
}

void MainWindow::updateBinaryDisplay(quint8 byte) {
    QString binaryStr = QString("%1 %2 %3 %4")
    .arg(byte >> 6 & 0x03, 2, 2, QChar('0'))
        .arg(byte >> 4 & 0x03, 2, 2, QChar('0'))
        .arg(byte >> 2 & 0x03, 2, 2, QChar('0'))
        .arg(byte & 0x03, 2, 2, QChar('0'));

    ui->data_status->setText(binaryStr);
    ui->data_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(107, 181, 19);border-color: rgb(107, 181, 19);border-radius: 7px;");
    status_ring->setSectionColor(1, 107, 181, 19);
}

void MainWindow::updateDataRate(qint64 bytes, double elapsedMs) {
    double bytesPerSec = (bytes / elapsedMs) * 1000;

    QString rateText = bytesPerSec >= 1000 ?
                           QString("%1 KB/s").arg(bytesPerSec / 1000, 0, 'f', 1) :
                           QString("%1 B/s").arg(bytesPerSec, 0, 'f', 1);
    ui->data_rate_status->setText(rateText);
    ui->data_rate_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(107, 181, 19);border-color: rgb(107, 181, 19);border-radius: 7px;");
    status_ring->setSectionColor(2, 107, 181, 19);

}

void MainWindow::updateBufferStatus() {
    qint64 rx = serial->bytesAvailable();
    qint64 tx = serial->bytesToWrite();

    //QString statusText = QString("RX: %1 | TX: %2").arg(rx).arg(tx);

    ui->buffer_status->setText("STABLE");
    ui->buffer_status->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(107, 181, 19);border-color: rgb(107, 181, 19);border-radius: 7px;");
    status_ring->setSectionColor(3, 107, 181, 19);
}
