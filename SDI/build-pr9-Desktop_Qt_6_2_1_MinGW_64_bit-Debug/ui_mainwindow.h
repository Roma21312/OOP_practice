/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *IdLineEdit;
    QLineEdit *DeparturePointLineEdit;
    QLineEdit *DestinationPointLineEdit;
    QLineEdit *DepartureTimeLineEdit;
    QLineEdit *NumberSeatsLineEdit;
    QLineEdit *TravelDurationLineEdit;
    QLineEdit *TrainNumberLineEdit;
    QLineEdit *NameLineEdit;
    QLineEdit *RouteLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *IdLabel;
    QLabel *DeparturePointLabel;
    QLabel *DestinationPointLabel;
    QLabel *DepartureTimeLabel;
    QLabel *NumberSeatsLabel;
    QLabel *TravelDurationLabel;
    QLabel *TrainNumberLabel;
    QLabel *NameLabel;
    QLabel *RouteLabel;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(581, 341);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        IdLineEdit = new QLineEdit(centralwidget);
        IdLineEdit->setObjectName(QString::fromUtf8("IdLineEdit"));

        verticalLayout->addWidget(IdLineEdit);

        DeparturePointLineEdit = new QLineEdit(centralwidget);
        DeparturePointLineEdit->setObjectName(QString::fromUtf8("DeparturePointLineEdit"));

        verticalLayout->addWidget(DeparturePointLineEdit);

        DestinationPointLineEdit = new QLineEdit(centralwidget);
        DestinationPointLineEdit->setObjectName(QString::fromUtf8("DestinationPointLineEdit"));

        verticalLayout->addWidget(DestinationPointLineEdit);

        DepartureTimeLineEdit = new QLineEdit(centralwidget);
        DepartureTimeLineEdit->setObjectName(QString::fromUtf8("DepartureTimeLineEdit"));

        verticalLayout->addWidget(DepartureTimeLineEdit);

        NumberSeatsLineEdit = new QLineEdit(centralwidget);
        NumberSeatsLineEdit->setObjectName(QString::fromUtf8("NumberSeatsLineEdit"));

        verticalLayout->addWidget(NumberSeatsLineEdit);

        TravelDurationLineEdit = new QLineEdit(centralwidget);
        TravelDurationLineEdit->setObjectName(QString::fromUtf8("TravelDurationLineEdit"));

        verticalLayout->addWidget(TravelDurationLineEdit);

        TrainNumberLineEdit = new QLineEdit(centralwidget);
        TrainNumberLineEdit->setObjectName(QString::fromUtf8("TrainNumberLineEdit"));

        verticalLayout->addWidget(TrainNumberLineEdit);

        NameLineEdit = new QLineEdit(centralwidget);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        verticalLayout->addWidget(NameLineEdit);

        RouteLineEdit = new QLineEdit(centralwidget);
        RouteLineEdit->setObjectName(QString::fromUtf8("RouteLineEdit"));

        verticalLayout->addWidget(RouteLineEdit);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        IdLabel = new QLabel(centralwidget);
        IdLabel->setObjectName(QString::fromUtf8("IdLabel"));

        verticalLayout_3->addWidget(IdLabel);

        DeparturePointLabel = new QLabel(centralwidget);
        DeparturePointLabel->setObjectName(QString::fromUtf8("DeparturePointLabel"));

        verticalLayout_3->addWidget(DeparturePointLabel);

        DestinationPointLabel = new QLabel(centralwidget);
        DestinationPointLabel->setObjectName(QString::fromUtf8("DestinationPointLabel"));

        verticalLayout_3->addWidget(DestinationPointLabel);

        DepartureTimeLabel = new QLabel(centralwidget);
        DepartureTimeLabel->setObjectName(QString::fromUtf8("DepartureTimeLabel"));

        verticalLayout_3->addWidget(DepartureTimeLabel);

        NumberSeatsLabel = new QLabel(centralwidget);
        NumberSeatsLabel->setObjectName(QString::fromUtf8("NumberSeatsLabel"));

        verticalLayout_3->addWidget(NumberSeatsLabel);

        TravelDurationLabel = new QLabel(centralwidget);
        TravelDurationLabel->setObjectName(QString::fromUtf8("TravelDurationLabel"));

        verticalLayout_3->addWidget(TravelDurationLabel);

        TrainNumberLabel = new QLabel(centralwidget);
        TrainNumberLabel->setObjectName(QString::fromUtf8("TrainNumberLabel"));

        verticalLayout_3->addWidget(TrainNumberLabel);

        NameLabel = new QLabel(centralwidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        verticalLayout_3->addWidget(NameLabel);

        RouteLabel = new QLabel(centralwidget);
        RouteLabel->setObjectName(QString::fromUtf8("RouteLabel"));

        verticalLayout_3->addWidget(RouteLabel);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        verticalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 581, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Departure Point:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Destination Point:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Departure Time:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Number Seats:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Travel Duration:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Train Number:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Route:", nullptr));
        IdLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        DeparturePointLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        DestinationPointLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        DepartureTimeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        NumberSeatsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        TravelDurationLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        TrainNumberLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        NameLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RouteLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\276\320\261'\321\224\320\272\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
