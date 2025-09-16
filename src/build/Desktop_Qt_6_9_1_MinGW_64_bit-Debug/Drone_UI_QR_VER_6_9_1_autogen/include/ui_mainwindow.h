/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rotatedlabel.h"
#include "squareimagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *green_frame;
    QGridLayout *gridLayout_2;
    RotatedLabel *edge_7;
    QLabel *edge_4;
    RotatedLabel *case_text;
    RotatedLabel *egde;
    QLabel *edge_8;
    QFrame *tab_button;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *connect_page_button;
    QPushButton *status_page_button;
    QPushButton *setting_page_button;
    RotatedLabel *edge_2;
    QLabel *user_label;
    RotatedLabel *edge_5;
    QLabel *edge_6;
    QLabel *edge_3;
    QFrame *orange_frame_outer;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *status_page;
    QGridLayout *gridLayout_8;
    QFrame *orange_frame_inner;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *status_display_label;
    QFrame *frame_3;
    QGridLayout *gridLayout_7;
    QFrame *drone_frame;
    QGridLayout *gridLayout_4;
    QProgressBar *FR_THROTTLE;
    QProgressBar *FL_THROTTLE;
    QProgressBar *BR_THROTTLE;
    QSpacerItem *verticalSpacer;
    SquareImageWidget *drone_image_container;
    QGridLayout *gridLayout_5;
    QLabel *drone_image;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *BL_THROTTLE;
    QFrame *info_frame;
    QVBoxLayout *verticalLayout;
    QLabel *system_log_label;
    QPlainTextEdit *system_log;
    QLabel *timer_label;
    QLabel *timer;
    QLabel *battery_label;
    QLabel *battery;
    QLabel *battery_label_2;
    QLabel *sync_status;
    QLabel *telemetry_status;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QFrame *instrument_frame;
    QGridLayout *gridLayout_6;
    QLabel *accel_x;
    QLabel *gyro_y_chart;
    QLabel *accel_y_chart;
    QLabel *gyro_y;
    QLabel *gyro_z;
    QLabel *gyro_label;
    QLabel *gyro_z_chart;
    QLabel *accel_x_chart;
    QLabel *accel_label;
    QLabel *accel_y;
    QLabel *gyro_x;
    QLabel *accel_z;
    QLabel *accel_z_chart;
    QLabel *gyro_x_chart;
    QLabel *direction_label;
    QLabel *direction_chart;
    QFrame *throttle_frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *alttitude_label;
    QLabel *alttitude_chart;
    QLabel *throttle_label;
    QProgressBar *throttle_bar;
    QWidget *connect_page;
    QGridLayout *gridLayout_10;
    QFrame *orange_frame_inner_2;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QFrame *info_frame_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *status_display_label_2;
    QLabel *system_log_label_2;
    QPlainTextEdit *serial_log;
    QFrame *sync_status_frame;
    QGridLayout *gridLayout_9;
    QComboBox *com_port_box;
    QLabel *system_log_label_7;
    QLabel *system_log_label_5;
    QLabel *system_log_label_8;
    QPushButton *sync_button;
    QLabel *sync_status_2;
    QLabel *system_log_label_6;
    QPushButton *scan_button;
    QLabel *buffer_status;
    QLabel *data_status;
    QLabel *system_log_label_4;
    QSpinBox *sync_rate_box;
    QLabel *data_rate_status;
    QLabel *system_log_label_3;
    QFrame *donut_status_frame;
    QGridLayout *gridLayout_11;
    QWidget *page_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1629, 900);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setBaseSize(QSize(1920, 1080));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        green_frame = new QFrame(centralwidget);
        green_frame->setObjectName("green_frame");
        green_frame->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(106, 156, 37);\n"
""));
        green_frame->setFrameShape(QFrame::Shape::StyledPanel);
        green_frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(green_frame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        edge_7 = new RotatedLabel(green_frame);
        edge_7->setObjectName("edge_7");
        edge_7->setMinimumSize(QSize(40, 40));
        edge_7->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(28);
        edge_7->setFont(font);
        edge_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;\n"
""));

        gridLayout_2->addWidget(edge_7, 3, 4, 1, 1);

        edge_4 = new QLabel(green_frame);
        edge_4->setObjectName("edge_4");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(edge_4->sizePolicy().hasHeightForWidth());
        edge_4->setSizePolicy(sizePolicy1);
        edge_4->setMaximumSize(QSize(40, 40));
        edge_4->setFont(font);
        edge_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        edge_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;\n"
""));
        edge_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        edge_4->setMargin(0);
        edge_4->setIndent(0);

        gridLayout_2->addWidget(edge_4, 5, 3, 1, 1);

        case_text = new RotatedLabel(green_frame);
        case_text->setObjectName("case_text");
        case_text->setMaximumSize(QSize(40, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(16);
        case_text->setFont(font1);
        case_text->setStyleSheet(QString::fromUtf8("border: rgba(255, 255, 255, 0);\n"
"color: rgb(107, 181, 19);\n"
""));
        case_text->setAlignment(Qt::AlignmentFlag::AlignCenter);
        case_text->setWordWrap(false);

        gridLayout_2->addWidget(case_text, 2, 0, 1, 1);

        egde = new RotatedLabel(green_frame);
        egde->setObjectName("egde");
        egde->setMaximumSize(QSize(40, 40));
        egde->setFont(font);
        egde->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;"));
        egde->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(egde, 1, 0, 1, 1);

        edge_8 = new QLabel(green_frame);
        edge_8->setObjectName("edge_8");
        edge_8->setMaximumSize(QSize(40, 40));
        edge_8->setFont(font);
        edge_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;\n"
""));
        edge_8->setIndent(0);

        gridLayout_2->addWidget(edge_8, 5, 1, 1, 1);

        tab_button = new QFrame(green_frame);
        tab_button->setObjectName("tab_button");
        tab_button->setMinimumSize(QSize(0, 40));
        tab_button->setMaximumSize(QSize(16777215, 40));
        tab_button->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
""));
        tab_button->setFrameShape(QFrame::Shape::StyledPanel);
        tab_button->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(tab_button);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(989, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connect_page_button = new QPushButton(tab_button);
        connect_page_button->setObjectName("connect_page_button");
        connect_page_button->setMinimumSize(QSize(160, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Impact")});
        font2.setPointSize(18);
        connect_page_button->setFont(font2);
        connect_page_button->setStyleSheet(QString::fromUtf8("border:2px solid rgb(153, 97, 0);border-radius:5px; color: rgb(153, 97, 0);"));

        horizontalLayout->addWidget(connect_page_button);

        status_page_button = new QPushButton(tab_button);
        status_page_button->setObjectName("status_page_button");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(status_page_button->sizePolicy().hasHeightForWidth());
        status_page_button->setSizePolicy(sizePolicy2);
        status_page_button->setMinimumSize(QSize(160, 40));
        status_page_button->setFont(font2);
        status_page_button->setStyleSheet(QString::fromUtf8("border:2px solid rgb(255, 161, 0);\n"
"border-radius:5px;\n"
"color: rgb(255, 161, 0);"));

        horizontalLayout->addWidget(status_page_button);

        setting_page_button = new QPushButton(tab_button);
        setting_page_button->setObjectName("setting_page_button");
        setting_page_button->setMinimumSize(QSize(160, 40));
        setting_page_button->setFont(font2);
        setting_page_button->setStyleSheet(QString::fromUtf8("border:2px solid rgb(153, 97, 0);border-radius:5px; color: rgb(153, 97, 0);"));

        horizontalLayout->addWidget(setting_page_button);

        setting_page_button->raise();
        status_page_button->raise();
        connect_page_button->raise();

        gridLayout_2->addWidget(tab_button, 0, 2, 1, 1);

        edge_2 = new RotatedLabel(green_frame);
        edge_2->setObjectName("edge_2");
        edge_2->setMaximumSize(QSize(40, 40));
        edge_2->setFont(font);
        edge_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;\n"
""));

        gridLayout_2->addWidget(edge_2, 3, 0, 1, 1);

        user_label = new QLabel(green_frame);
        user_label->setObjectName("user_label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(user_label->sizePolicy().hasHeightForWidth());
        user_label->setSizePolicy(sizePolicy3);
        user_label->setMinimumSize(QSize(0, 40));
        user_label->setMaximumSize(QSize(999999, 40));
        user_label->setFont(font2);
        user_label->setStyleSheet(QString::fromUtf8("border: rgba(255, 255, 255, 0);\n"
"color: rgb(107, 181, 19);\n"
""));
        user_label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        user_label->setWordWrap(false);

        gridLayout_2->addWidget(user_label, 5, 2, 1, 1);

        edge_5 = new RotatedLabel(green_frame);
        edge_5->setObjectName("edge_5");
        edge_5->setMinimumSize(QSize(40, 40));
        edge_5->setMaximumSize(QSize(40, 40));
        edge_5->setFont(font);
        edge_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;\n"
""));
        edge_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(edge_5, 1, 4, 1, 1);

        edge_6 = new QLabel(green_frame);
        edge_6->setObjectName("edge_6");
        sizePolicy1.setHeightForWidth(edge_6->sizePolicy().hasHeightForWidth());
        edge_6->setSizePolicy(sizePolicy1);
        edge_6->setMinimumSize(QSize(0, 40));
        edge_6->setMaximumSize(QSize(40, 40));
        edge_6->setFont(font);
        edge_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;\n"
"padding: 0px;\n"
""));
        edge_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        edge_6->setIndent(0);

        gridLayout_2->addWidget(edge_6, 0, 3, 1, 1);

        edge_3 = new QLabel(green_frame);
        edge_3->setObjectName("edge_3");
        edge_3->setMaximumSize(QSize(40, 40));
        edge_3->setFont(font);
        edge_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"border-color: transparent;\n"
""));
        edge_3->setIndent(0);

        gridLayout_2->addWidget(edge_3, 0, 1, 1, 1);

        orange_frame_outer = new QFrame(green_frame);
        orange_frame_outer->setObjectName("orange_frame_outer");
        orange_frame_outer->setStyleSheet(QString::fromUtf8("border: 3px solid  rgb(153, 97, 0);"));
        orange_frame_outer->setFrameShape(QFrame::Shape::StyledPanel);
        orange_frame_outer->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(orange_frame_outer);
        gridLayout_3->setObjectName("gridLayout_3");
        stackedWidget = new QStackedWidget(orange_frame_outer);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("border-color: transparent;"));
        status_page = new QWidget();
        status_page->setObjectName("status_page");
        status_page->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
""));
        gridLayout_8 = new QGridLayout(status_page);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        orange_frame_inner = new QFrame(status_page);
        orange_frame_inner->setObjectName("orange_frame_inner");
        orange_frame_inner->setEnabled(true);
        orange_frame_inner->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(255, 161, 0);"));
        orange_frame_inner->setFrameShape(QFrame::Shape::StyledPanel);
        orange_frame_inner->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(orange_frame_inner);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(orange_frame_inner);
        frame_4->setObjectName("frame_4");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy4);
        frame_4->setStyleSheet(QString::fromUtf8("border-color: transparent;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        status_display_label = new QLabel(frame_4);
        status_display_label->setObjectName("status_display_label");
        status_display_label->setFont(font);
        status_display_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));
        status_display_label->setScaledContents(false);

        verticalLayout_2->addWidget(status_display_label);

        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        sizePolicy3.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy3);
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_7 = new QGridLayout(frame_3);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        drone_frame = new QFrame(frame_3);
        drone_frame->setObjectName("drone_frame");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(drone_frame->sizePolicy().hasHeightForWidth());
        drone_frame->setSizePolicy(sizePolicy5);
        drone_frame->setSizeIncrement(QSize(100, 100));
        drone_frame->setBaseSize(QSize(200, 200));
        drone_frame->setFrameShape(QFrame::Shape::StyledPanel);
        drone_frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_4 = new QGridLayout(drone_frame);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        FR_THROTTLE = new QProgressBar(drone_frame);
        FR_THROTTLE->setObjectName("FR_THROTTLE");
        FR_THROTTLE->setEnabled(true);
        FR_THROTTLE->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 3px solid rgb(255, 161, 0);\n"
"	color: transparent;\n"
"    border-radius: 3px;\n"
"    background-color: #000000;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(255, 161, 0);  /* Your orange color */\n"
"    border-radius: 0px;\n"
"    margin: 1px;  /* Adjust this to fix the 1px offset */\n"
"}"));
        FR_THROTTLE->setMaximum(1023);
        FR_THROTTLE->setValue(0);
        FR_THROTTLE->setOrientation(Qt::Orientation::Vertical);
        FR_THROTTLE->setTextDirection(QProgressBar::Direction::BottomToTop);

        gridLayout_4->addWidget(FR_THROTTLE, 0, 20, 1, 1);

        FL_THROTTLE = new QProgressBar(drone_frame);
        FL_THROTTLE->setObjectName("FL_THROTTLE");
        FL_THROTTLE->setEnabled(true);
        FL_THROTTLE->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 3px solid rgb(255, 161, 0);\n"
"	color: transparent;\n"
"    border-radius: 3px;\n"
"    background-color: #000000;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(255, 161, 0);  /* Your orange color */\n"
"    border-radius: 0px;\n"
"    margin: 1px;  /* Adjust this to fix the 1px offset */\n"
"}"));
        FL_THROTTLE->setMaximum(1023);
        FL_THROTTLE->setValue(0);
        FL_THROTTLE->setOrientation(Qt::Orientation::Vertical);
        FL_THROTTLE->setTextDirection(QProgressBar::Direction::BottomToTop);

        gridLayout_4->addWidget(FL_THROTTLE, 0, 0, 1, 1);

        BR_THROTTLE = new QProgressBar(drone_frame);
        BR_THROTTLE->setObjectName("BR_THROTTLE");
        BR_THROTTLE->setEnabled(true);
        BR_THROTTLE->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 3px solid rgb(255, 161, 0);\n"
"	color: transparent;\n"
"    border-radius: 3px;\n"
"    background-color: #000000;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(255, 161, 0);  /* Your orange color */\n"
"    border-radius: 0px;\n"
"    margin: 1px;  /* Adjust this to fix the 1px offset */\n"
"}"));
        BR_THROTTLE->setMaximum(1023);
        BR_THROTTLE->setValue(0);
        BR_THROTTLE->setOrientation(Qt::Orientation::Vertical);
        BR_THROTTLE->setTextDirection(QProgressBar::Direction::BottomToTop);

        gridLayout_4->addWidget(BR_THROTTLE, 2, 20, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        drone_image_container = new SquareImageWidget(drone_frame);
        drone_image_container->setObjectName("drone_image_container");
        sizePolicy3.setHeightForWidth(drone_image_container->sizePolicy().hasHeightForWidth());
        drone_image_container->setSizePolicy(sizePolicy3);
        drone_image_container->setStyleSheet(QString::fromUtf8(""));
        gridLayout_5 = new QGridLayout(drone_image_container);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        drone_image = new QLabel(drone_image_container);
        drone_image->setObjectName("drone_image");
        drone_image->setPixmap(QPixmap(QString::fromUtf8(":/assets/drone_outline_with_blade_colored.svg")));
        drone_image->setScaledContents(false);
        drone_image->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(drone_image, 0, 0, 1, 1);


        gridLayout_4->addWidget(drone_image_container, 0, 1, 3, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout_4->addItem(verticalSpacer_2, 1, 20, 1, 1);

        BL_THROTTLE = new QProgressBar(drone_frame);
        BL_THROTTLE->setObjectName("BL_THROTTLE");
        BL_THROTTLE->setEnabled(true);
        BL_THROTTLE->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 3px solid rgb(255, 161, 0);\n"
"	color: transparent;\n"
"    border-radius: 3px;\n"
"    background-color: #000000;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(255, 161, 0);  /* Your orange color */\n"
"    border-radius: 0px;\n"
"    margin: 1px;  /* Adjust this to fix the 1px offset */\n"
"}"));
        BL_THROTTLE->setMaximum(1023);
        BL_THROTTLE->setValue(0);
        BL_THROTTLE->setOrientation(Qt::Orientation::Vertical);
        BL_THROTTLE->setTextDirection(QProgressBar::Direction::BottomToTop);

        gridLayout_4->addWidget(BL_THROTTLE, 2, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 6);
        gridLayout_4->setRowStretch(1, 1);
        gridLayout_4->setRowStretch(2, 6);

        gridLayout_7->addWidget(drone_frame, 1, 1, 1, 1);

        info_frame = new QFrame(frame_3);
        info_frame->setObjectName("info_frame");
        sizePolicy3.setHeightForWidth(info_frame->sizePolicy().hasHeightForWidth());
        info_frame->setSizePolicy(sizePolicy3);
        info_frame->setAutoFillBackground(false);
        info_frame->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
""));
        info_frame->setFrameShape(QFrame::Shape::StyledPanel);
        info_frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(info_frame);
        verticalLayout->setObjectName("verticalLayout");
        system_log_label = new QLabel(info_frame);
        system_log_label->setObjectName("system_log_label");
        system_log_label->setFont(font2);
        system_log_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        verticalLayout->addWidget(system_log_label);

        system_log = new QPlainTextEdit(info_frame);
        system_log->setObjectName("system_log");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(system_log->sizePolicy().hasHeightForWidth());
        system_log->setSizePolicy(sizePolicy6);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Impact")});
        font3.setPointSize(12);
        system_log->setFont(font3);
        system_log->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: black;\n"
"    color: rgb(255, 161, 0);\n"
"    border: 2px solid rgb(255, 161, 0);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* Vertical ScrollBar */\n"
"QScrollBar:vertical {\n"
"    background: black;\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: rgb(255, 161, 0);\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    height: 0px;\n"
"    background: none;\n"
"}\n"
"\n"
"/* This is the part behind the handle (track) */\n"
"QScrollBar::groove:vertical {\n"
"    background: black;\n"
"    border-radius: 5px;\n"
"}\n"
""));

        verticalLayout->addWidget(system_log);

        timer_label = new QLabel(info_frame);
        timer_label->setObjectName("timer_label");
        timer_label->setFont(font2);
        timer_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        verticalLayout->addWidget(timer_label);

        timer = new QLabel(info_frame);
        timer->setObjectName("timer");
        timer->setFont(font);
        timer->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 161, 0);\n"
"border-radius: 7px;\n"
""));
        timer->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(timer);

        battery_label = new QLabel(info_frame);
        battery_label->setObjectName("battery_label");
        battery_label->setFont(font2);
        battery_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        verticalLayout->addWidget(battery_label);

        battery = new QLabel(info_frame);
        battery->setObjectName("battery");
        battery->setFont(font);
        battery->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 161, 0);\n"
"border-radius: 7px;\n"
""));
        battery->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(battery);

        battery_label_2 = new QLabel(info_frame);
        battery_label_2->setObjectName("battery_label_2");
        battery_label_2->setFont(font2);
        battery_label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        verticalLayout->addWidget(battery_label_2);

        sync_status = new QLabel(info_frame);
        sync_status->setObjectName("sync_status");
        sync_status->setFont(font);
        sync_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 22, 87);\n"
"border-color: rgb(255, 22, 87);\n"
"border-radius: 7px;"));
        sync_status->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(sync_status);

        telemetry_status = new QLabel(info_frame);
        telemetry_status->setObjectName("telemetry_status");
        telemetry_status->setFont(font);
        telemetry_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 22, 87);\n"
"border-color: rgb(255, 22, 87);\n"
"border-radius: 7px;"));
        telemetry_status->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(telemetry_status);


        gridLayout_7->addWidget(info_frame, 0, 0, 3, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 2, 1, 1, 1);


        verticalLayout_2->addWidget(frame_3);


        horizontalLayout_2->addWidget(frame_4);

        instrument_frame = new QFrame(orange_frame_inner);
        instrument_frame->setObjectName("instrument_frame");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(instrument_frame->sizePolicy().hasHeightForWidth());
        instrument_frame->setSizePolicy(sizePolicy7);
        instrument_frame->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
""));
        instrument_frame->setFrameShape(QFrame::Shape::StyledPanel);
        instrument_frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_6 = new QGridLayout(instrument_frame);
        gridLayout_6->setObjectName("gridLayout_6");
        accel_x = new QLabel(instrument_frame);
        accel_x->setObjectName("accel_x");
        accel_x->setFont(font2);
        accel_x->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(accel_x, 3, 1, 1, 1);

        gyro_y_chart = new QLabel(instrument_frame);
        gyro_y_chart->setObjectName("gyro_y_chart");
        gyro_y_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/graph_ui.svg")));
        gyro_y_chart->setScaledContents(true);

        gridLayout_6->addWidget(gyro_y_chart, 8, 0, 1, 1);

        accel_y_chart = new QLabel(instrument_frame);
        accel_y_chart->setObjectName("accel_y_chart");
        accel_y_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/graph_ui.svg")));
        accel_y_chart->setScaledContents(true);

        gridLayout_6->addWidget(accel_y_chart, 8, 1, 1, 1);

        gyro_y = new QLabel(instrument_frame);
        gyro_y->setObjectName("gyro_y");
        gyro_y->setFont(font2);
        gyro_y->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(gyro_y, 7, 0, 1, 1);

        gyro_z = new QLabel(instrument_frame);
        gyro_z->setObjectName("gyro_z");
        gyro_z->setFont(font2);
        gyro_z->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(gyro_z, 9, 0, 1, 1);

        gyro_label = new QLabel(instrument_frame);
        gyro_label->setObjectName("gyro_label");
        gyro_label->setFont(font2);
        gyro_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(gyro_label, 2, 0, 1, 1);

        gyro_z_chart = new QLabel(instrument_frame);
        gyro_z_chart->setObjectName("gyro_z_chart");
        gyro_z_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/graph_ui.svg")));
        gyro_z_chart->setScaledContents(true);

        gridLayout_6->addWidget(gyro_z_chart, 10, 0, 1, 1);

        accel_x_chart = new QLabel(instrument_frame);
        accel_x_chart->setObjectName("accel_x_chart");
        accel_x_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/graph_ui.svg")));
        accel_x_chart->setScaledContents(true);

        gridLayout_6->addWidget(accel_x_chart, 4, 1, 1, 1);

        accel_label = new QLabel(instrument_frame);
        accel_label->setObjectName("accel_label");
        accel_label->setFont(font2);
        accel_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(accel_label, 2, 1, 1, 1);

        accel_y = new QLabel(instrument_frame);
        accel_y->setObjectName("accel_y");
        accel_y->setFont(font2);
        accel_y->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(accel_y, 7, 1, 1, 1);

        gyro_x = new QLabel(instrument_frame);
        gyro_x->setObjectName("gyro_x");
        gyro_x->setFont(font2);
        gyro_x->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(gyro_x, 3, 0, 1, 1);

        accel_z = new QLabel(instrument_frame);
        accel_z->setObjectName("accel_z");
        accel_z->setFont(font2);
        accel_z->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(accel_z, 9, 1, 1, 1);

        accel_z_chart = new QLabel(instrument_frame);
        accel_z_chart->setObjectName("accel_z_chart");
        accel_z_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/graph_ui.svg")));
        accel_z_chart->setScaledContents(true);

        gridLayout_6->addWidget(accel_z_chart, 10, 1, 1, 1);

        gyro_x_chart = new QLabel(instrument_frame);
        gyro_x_chart->setObjectName("gyro_x_chart");
        gyro_x_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/graph_ui.svg")));
        gyro_x_chart->setScaledContents(true);

        gridLayout_6->addWidget(gyro_x_chart, 4, 0, 1, 1);

        direction_label = new QLabel(instrument_frame);
        direction_label->setObjectName("direction_label");
        direction_label->setFont(font2);
        direction_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        gridLayout_6->addWidget(direction_label, 0, 0, 1, 1);

        direction_chart = new QLabel(instrument_frame);
        direction_chart->setObjectName("direction_chart");
        direction_chart->setFont(font);
        direction_chart->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);"));
        direction_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/eadi_middle.svg")));
        direction_chart->setScaledContents(true);

        gridLayout_6->addWidget(direction_chart, 1, 0, 1, 1);

        throttle_frame = new QFrame(instrument_frame);
        throttle_frame->setObjectName("throttle_frame");
        throttle_frame->setFrameShape(QFrame::Shape::StyledPanel);
        throttle_frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(throttle_frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        alttitude_label = new QLabel(throttle_frame);
        alttitude_label->setObjectName("alttitude_label");
        alttitude_label->setFont(font2);
        alttitude_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(alttitude_label);

        alttitude_chart = new QLabel(throttle_frame);
        alttitude_chart->setObjectName("alttitude_chart");
        sizePolicy7.setHeightForWidth(alttitude_chart->sizePolicy().hasHeightForWidth());
        alttitude_chart->setSizePolicy(sizePolicy7);
        alttitude_chart->setPixmap(QPixmap(QString::fromUtf8(":/assets/bar_ui_MID.svg")));
        alttitude_chart->setScaledContents(true);

        verticalLayout_3->addWidget(alttitude_chart);

        throttle_label = new QLabel(throttle_frame);
        throttle_label->setObjectName("throttle_label");
        throttle_label->setFont(font2);
        throttle_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
""));

        verticalLayout_3->addWidget(throttle_label);

        throttle_bar = new QProgressBar(throttle_frame);
        throttle_bar->setObjectName("throttle_bar");
        sizePolicy3.setHeightForWidth(throttle_bar->sizePolicy().hasHeightForWidth());
        throttle_bar->setSizePolicy(sizePolicy3);
        throttle_bar->setMinimumSize(QSize(0, 35));
        throttle_bar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 3px solid rgb(255, 161, 0);\n"
"	color: transparent;\n"
"    border-radius: 3px;\n"
"    background-color: #000000;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(255, 161, 0);  /* Your orange color */\n"
"    border-radius: 0px;\n"
"    margin: 1px;  /* Adjust this to fix the 1px offset */\n"
"}"));
        throttle_bar->setMaximum(1023);
        throttle_bar->setValue(24);

        verticalLayout_3->addWidget(throttle_bar);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);

        gridLayout_6->addWidget(throttle_frame, 0, 1, 2, 1);


        horizontalLayout_2->addWidget(instrument_frame);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout_8->addWidget(orange_frame_inner, 0, 0, 1, 1);

        stackedWidget->addWidget(status_page);
        connect_page = new QWidget();
        connect_page->setObjectName("connect_page");
        gridLayout_10 = new QGridLayout(connect_page);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        orange_frame_inner_2 = new QFrame(connect_page);
        orange_frame_inner_2->setObjectName("orange_frame_inner_2");
        orange_frame_inner_2->setEnabled(true);
        orange_frame_inner_2->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(255, 161, 0);"));
        orange_frame_inner_2->setFrameShape(QFrame::Shape::StyledPanel);
        orange_frame_inner_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(orange_frame_inner_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(orange_frame_inner_2);
        frame_5->setObjectName("frame_5");
        sizePolicy4.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy4);
        frame_5->setStyleSheet(QString::fromUtf8("border-color: transparent;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        info_frame_2 = new QFrame(frame_5);
        info_frame_2->setObjectName("info_frame_2");
        sizePolicy3.setHeightForWidth(info_frame_2->sizePolicy().hasHeightForWidth());
        info_frame_2->setSizePolicy(sizePolicy3);
        info_frame_2->setAutoFillBackground(false);
        info_frame_2->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
""));
        info_frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        info_frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(info_frame_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        status_display_label_2 = new QLabel(info_frame_2);
        status_display_label_2->setObjectName("status_display_label_2");
        status_display_label_2->setFont(font);
        status_display_label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));
        status_display_label_2->setScaledContents(false);

        verticalLayout_5->addWidget(status_display_label_2);

        system_log_label_2 = new QLabel(info_frame_2);
        system_log_label_2->setObjectName("system_log_label_2");
        system_log_label_2->setFont(font2);
        system_log_label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        verticalLayout_5->addWidget(system_log_label_2);

        serial_log = new QPlainTextEdit(info_frame_2);
        serial_log->setObjectName("serial_log");
        sizePolicy6.setHeightForWidth(serial_log->sizePolicy().hasHeightForWidth());
        serial_log->setSizePolicy(sizePolicy6);
        serial_log->setFont(font3);
        serial_log->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: black;\n"
"    color: rgb(255, 161, 0);\n"
"    border: 2px solid rgb(255, 161, 0);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* Vertical ScrollBar */\n"
"QScrollBar:vertical {\n"
"    background: black;\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: rgb(255, 161, 0);\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    height: 0px;\n"
"    background: none;\n"
"}\n"
"\n"
"/* This is the part behind the handle (track) */\n"
"QScrollBar::groove:vertical {\n"
"    background: black;\n"
"    border-radius: 5px;\n"
"}\n"
""));

        verticalLayout_5->addWidget(serial_log);


        verticalLayout_4->addWidget(info_frame_2);


        horizontalLayout_3->addWidget(frame_5);

        sync_status_frame = new QFrame(orange_frame_inner_2);
        sync_status_frame->setObjectName("sync_status_frame");
        sync_status_frame->setStyleSheet(QString::fromUtf8("border-color: transparent;"));
        sync_status_frame->setFrameShape(QFrame::Shape::StyledPanel);
        sync_status_frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_9 = new QGridLayout(sync_status_frame);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setHorizontalSpacing(10);
        gridLayout_9->setContentsMargins(0, 9, 0, 9);
        com_port_box = new QComboBox(sync_status_frame);
        com_port_box->setObjectName("com_port_box");
        sizePolicy6.setHeightForWidth(com_port_box->sizePolicy().hasHeightForWidth());
        com_port_box->setSizePolicy(sizePolicy6);
        com_port_box->setStyleSheet(QString::fromUtf8("font: 28pt \"Impact\";\n"
"color: rgb(255, 161, 0);\n"
"border-color: rgb(255, 161, 0);"));

        gridLayout_9->addWidget(com_port_box, 1, 2, 1, 1);

        system_log_label_7 = new QLabel(sync_status_frame);
        system_log_label_7->setObjectName("system_log_label_7");
        system_log_label_7->setFont(font);
        system_log_label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        gridLayout_9->addWidget(system_log_label_7, 2, 2, 1, 1);

        system_log_label_5 = new QLabel(sync_status_frame);
        system_log_label_5->setObjectName("system_log_label_5");
        system_log_label_5->setFont(font);
        system_log_label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        gridLayout_9->addWidget(system_log_label_5, 4, 0, 1, 1);

        system_log_label_8 = new QLabel(sync_status_frame);
        system_log_label_8->setObjectName("system_log_label_8");
        system_log_label_8->setFont(font);
        system_log_label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        gridLayout_9->addWidget(system_log_label_8, 4, 2, 1, 1);

        sync_button = new QPushButton(sync_status_frame);
        sync_button->setObjectName("sync_button");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(sync_button->sizePolicy().hasHeightForWidth());
        sync_button->setSizePolicy(sizePolicy8);
        sync_button->setFont(font);
        sync_button->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 161, 0);\n"
"border-radius: 7px;\n"
""));

        gridLayout_9->addWidget(sync_button, 6, 2, 1, 1);

        sync_status_2 = new QLabel(sync_status_frame);
        sync_status_2->setObjectName("sync_status_2");
        sizePolicy6.setHeightForWidth(sync_status_2->sizePolicy().hasHeightForWidth());
        sync_status_2->setSizePolicy(sizePolicy6);
        sync_status_2->setFont(font);
        sync_status_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 22, 87);\n"
"border-color: rgb(255, 22, 87);\n"
"border-radius: 7px;"));
        sync_status_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_9->addWidget(sync_status_2, 5, 2, 1, 1);

        system_log_label_6 = new QLabel(sync_status_frame);
        system_log_label_6->setObjectName("system_log_label_6");
        system_log_label_6->setFont(font);
        system_log_label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        gridLayout_9->addWidget(system_log_label_6, 0, 2, 1, 1);

        scan_button = new QPushButton(sync_status_frame);
        scan_button->setObjectName("scan_button");
        sizePolicy8.setHeightForWidth(scan_button->sizePolicy().hasHeightForWidth());
        scan_button->setSizePolicy(sizePolicy8);
        scan_button->setFont(font);
        scan_button->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 161, 0);\n"
"border-radius: 7px;\n"
""));

        gridLayout_9->addWidget(scan_button, 6, 0, 1, 1);

        buffer_status = new QLabel(sync_status_frame);
        buffer_status->setObjectName("buffer_status");
        sizePolicy6.setHeightForWidth(buffer_status->sizePolicy().hasHeightForWidth());
        buffer_status->setSizePolicy(sizePolicy6);
        buffer_status->setFont(font);
        buffer_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 22, 87);\n"
"border-color: rgb(255, 22, 87);\n"
"border-radius: 7px;"));
        buffer_status->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_9->addWidget(buffer_status, 5, 0, 1, 1);

        data_status = new QLabel(sync_status_frame);
        data_status->setObjectName("data_status");
        sizePolicy6.setHeightForWidth(data_status->sizePolicy().hasHeightForWidth());
        data_status->setSizePolicy(sizePolicy6);
        data_status->setFont(font);
        data_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 22, 87);\n"
"border-color: rgb(255, 22, 87);\n"
"border-radius: 7px;"));
        data_status->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_9->addWidget(data_status, 1, 0, 1, 1);

        system_log_label_4 = new QLabel(sync_status_frame);
        system_log_label_4->setObjectName("system_log_label_4");
        system_log_label_4->setFont(font);
        system_log_label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        gridLayout_9->addWidget(system_log_label_4, 2, 0, 1, 1);

        sync_rate_box = new QSpinBox(sync_status_frame);
        sync_rate_box->setObjectName("sync_rate_box");
        sizePolicy8.setHeightForWidth(sync_rate_box->sizePolicy().hasHeightForWidth());
        sync_rate_box->setSizePolicy(sizePolicy8);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Impact")});
        font4.setPointSize(28);
        font4.setBold(false);
        font4.setItalic(false);
        sync_rate_box->setFont(font4);
        sync_rate_box->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"font: 28pt \"Impact\";\n"
"border-color: rgb(255, 161, 0);"));
        sync_rate_box->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sync_rate_box->setMaximum(921600);
        sync_rate_box->setSingleStep(300);
        sync_rate_box->setValue(115200);

        gridLayout_9->addWidget(sync_rate_box, 3, 2, 1, 1);

        data_rate_status = new QLabel(sync_status_frame);
        data_rate_status->setObjectName("data_rate_status");
        sizePolicy6.setHeightForWidth(data_rate_status->sizePolicy().hasHeightForWidth());
        data_rate_status->setSizePolicy(sizePolicy6);
        data_rate_status->setFont(font);
        data_rate_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 22, 87);\n"
"border-color: rgb(255, 22, 87);\n"
"border-radius: 7px;"));
        data_rate_status->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_9->addWidget(data_rate_status, 3, 0, 1, 1);

        system_log_label_3 = new QLabel(sync_status_frame);
        system_log_label_3->setObjectName("system_log_label_3");
        system_log_label_3->setFont(font);
        system_log_label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 161, 0);\n"
"background-color: transparent;\n"
"border-color: transparent;"));

        gridLayout_9->addWidget(system_log_label_3, 0, 0, 1, 1);

        donut_status_frame = new QFrame(sync_status_frame);
        donut_status_frame->setObjectName("donut_status_frame");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(donut_status_frame->sizePolicy().hasHeightForWidth());
        donut_status_frame->setSizePolicy(sizePolicy9);
        donut_status_frame->setMinimumSize(QSize(200, 0));
        donut_status_frame->setStyleSheet(QString::fromUtf8("border-color: transparent;"));
        donut_status_frame->setFrameShape(QFrame::Shape::StyledPanel);
        donut_status_frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_11 = new QGridLayout(donut_status_frame);
        gridLayout_11->setObjectName("gridLayout_11");

        gridLayout_9->addWidget(donut_status_frame, 0, 1, 6, 1);

        gridLayout_9->setColumnStretch(0, 3);
        gridLayout_9->setColumnStretch(1, 5);
        gridLayout_9->setColumnStretch(2, 3);

        horizontalLayout_3->addWidget(sync_status_frame);

        horizontalLayout_3->setStretch(1, 3);

        gridLayout_10->addWidget(orange_frame_inner_2, 0, 0, 2, 2);

        stackedWidget->addWidget(connect_page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(orange_frame_outer, 1, 1, 3, 3);


        gridLayout->addWidget(green_frame, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        edge_7->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        edge_4->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        case_text->setText(QCoreApplication::translate("MainWindow", "Case: BK-06-25 Comprehensive Report", nullptr));
        egde->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        edge_8->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        connect_page_button->setText(QCoreApplication::translate("MainWindow", "SYNC", nullptr));
        status_page_button->setText(QCoreApplication::translate("MainWindow", "STATUS", nullptr));
        setting_page_button->setText(QCoreApplication::translate("MainWindow", "SETTING", nullptr));
        edge_2->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        user_label->setText(QCoreApplication::translate("MainWindow", "USR: TI MANH", nullptr));
        edge_5->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        edge_6->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        edge_3->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        status_display_label->setText(QCoreApplication::translate("MainWindow", "|DRONE STATUS DISPLAY", nullptr));
        drone_image->setText(QString());
        system_log_label->setText(QCoreApplication::translate("MainWindow", "|SYSTEM LOG", nullptr));
        system_log->setPlainText(QString());
        timer_label->setText(QCoreApplication::translate("MainWindow", "|ACTIVE TIME", nullptr));
        timer->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        battery_label->setText(QCoreApplication::translate("MainWindow", "|BATTERY LEVEL", nullptr));
        battery->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        battery_label_2->setText(QCoreApplication::translate("MainWindow", "|TELEMETRY STATUS", nullptr));
        sync_status->setText(QCoreApplication::translate("MainWindow", "DE-SYNCED", nullptr));
        telemetry_status->setText(QCoreApplication::translate("MainWindow", "NO SIGNAL", nullptr));
        accel_x->setText(QCoreApplication::translate("MainWindow", "X: [ ]", nullptr));
        gyro_y_chart->setText(QString());
        accel_y_chart->setText(QString());
        gyro_y->setText(QCoreApplication::translate("MainWindow", "Y: [ ]", nullptr));
        gyro_z->setText(QCoreApplication::translate("MainWindow", "Z: [ ]", nullptr));
        gyro_label->setText(QCoreApplication::translate("MainWindow", "|GYROSCOPE", nullptr));
        gyro_z_chart->setText(QString());
        accel_x_chart->setText(QString());
        accel_label->setText(QCoreApplication::translate("MainWindow", "|ACCELEROMETER", nullptr));
        accel_y->setText(QCoreApplication::translate("MainWindow", "Y: [ ]", nullptr));
        gyro_x->setText(QCoreApplication::translate("MainWindow", "X: [ ]", nullptr));
        accel_z->setText(QCoreApplication::translate("MainWindow", "Z: [ ]", nullptr));
        accel_z_chart->setText(QString());
        gyro_x_chart->setText(QString());
        direction_label->setText(QCoreApplication::translate("MainWindow", "|DIRECTION", nullptr));
        direction_chart->setText(QString());
        alttitude_label->setText(QCoreApplication::translate("MainWindow", "|ALTTITUDE", nullptr));
        alttitude_chart->setText(QString());
        throttle_label->setText(QCoreApplication::translate("MainWindow", "|THROTTLE", nullptr));
        status_display_label_2->setText(QCoreApplication::translate("MainWindow", "|CONTROL STATION", nullptr));
        system_log_label_2->setText(QCoreApplication::translate("MainWindow", "|SERIAL LOG", nullptr));
        serial_log->setPlainText(QString());
        system_log_label_7->setText(QCoreApplication::translate("MainWindow", "|SYNC RATE", nullptr));
        system_log_label_5->setText(QCoreApplication::translate("MainWindow", "|BUFFER STATUS", nullptr));
        system_log_label_8->setText(QCoreApplication::translate("MainWindow", "|SYNC STATUS", nullptr));
        sync_button->setText(QCoreApplication::translate("MainWindow", "SYNC", nullptr));
        sync_status_2->setText(QCoreApplication::translate("MainWindow", "DE-SYNCED", nullptr));
        system_log_label_6->setText(QCoreApplication::translate("MainWindow", "|PLUG NUMBER", nullptr));
        scan_button->setText(QCoreApplication::translate("MainWindow", "SCAN", nullptr));
        buffer_status->setText(QCoreApplication::translate("MainWindow", "DE-SYNCED", nullptr));
        data_status->setText(QCoreApplication::translate("MainWindow", "DE-SYNCED", nullptr));
        system_log_label_4->setText(QCoreApplication::translate("MainWindow", "|DATA RATE", nullptr));
        data_rate_status->setText(QCoreApplication::translate("MainWindow", "DE-SYNCED", nullptr));
        system_log_label_3->setText(QCoreApplication::translate("MainWindow", "|DATA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
