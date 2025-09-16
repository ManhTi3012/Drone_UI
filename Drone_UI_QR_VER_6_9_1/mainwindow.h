#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QPushButton>
#include <QScrollBar>
#include <QLabel>
#include <QSerialPortInfo>
#include <QComboBox>

#include "virtualhorizon.h"
#include "graphwidget.h"
#include "donutstatuswidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void readSerialData();
    void parseLine(const QByteArray &line);
    void onNavButtonClicked(QPushButton* button, int pageIndex);

    void handleSerialError(QSerialPort::SerialPortError error);

    void handleScan();
    void handleSync();

    QString formatBinary(quint8 byte);
    QString dataRateStyle(double bytesPerSec);
    QString bufferStatusStyle(qint64 bytesAvailable);

    void updateBinaryDisplay(quint8 byte);
    void updateDataRate(qint64 bytes, double elapsedMs);
    void updateBufferStatus();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QPushButton* currentNavButton = nullptr;
    VirtualHorizon *horizon;

    QComboBox *comPortBox;

    DonutStatusWidget *status_ring;

    GraphWidget *accel_x_graph;
    GraphWidget *accel_y_graph;
    GraphWidget *accel_z_graph;

    GraphWidget *gyro_x_graph;
    GraphWidget *gyro_y_graph;
    GraphWidget *gyro_z_graph;

};
#endif // MAINWINDOW_H
