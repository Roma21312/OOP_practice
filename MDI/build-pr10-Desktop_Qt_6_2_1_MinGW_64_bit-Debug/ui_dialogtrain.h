/********************************************************************************
** Form generated from reading UI file 'dialogtrain.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTRAIN_H
#define UI_DIALOGTRAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogTrain
{
public:
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *IdLineEdit_2;
    QLineEdit *DeparturePointLineEdit_2;
    QLineEdit *DestinationPointLineEdit_2;
    QLineEdit *DepartureTimeLineEdit_2;
    QLineEdit *NumberSeatsLineEdit_2;
    QLineEdit *TravelDurationLineEdit_2;
    QLineEdit *TrainNumberLineEdit_2;
    QLineEdit *NameLineEdit_2;
    QLineEdit *RouteLineEdit_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogTrain)
    {
        if (DialogTrain->objectName().isEmpty())
            DialogTrain->setObjectName(QString::fromUtf8("DialogTrain"));
        DialogTrain->resize(430, 297);
        verticalLayout_9 = new QVBoxLayout(DialogTrain);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_10 = new QLabel(DialogTrain);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_7->addWidget(label_10);

        label_11 = new QLabel(DialogTrain);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        label_12 = new QLabel(DialogTrain);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_7->addWidget(label_12);

        label_13 = new QLabel(DialogTrain);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_7->addWidget(label_13);

        label_14 = new QLabel(DialogTrain);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_7->addWidget(label_14);

        label_15 = new QLabel(DialogTrain);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_7->addWidget(label_15);

        label_16 = new QLabel(DialogTrain);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_7->addWidget(label_16);

        label_17 = new QLabel(DialogTrain);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_7->addWidget(label_17);

        label_18 = new QLabel(DialogTrain);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_7->addWidget(label_18);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        IdLineEdit_2 = new QLineEdit(DialogTrain);
        IdLineEdit_2->setObjectName(QString::fromUtf8("IdLineEdit_2"));

        verticalLayout_6->addWidget(IdLineEdit_2);

        DeparturePointLineEdit_2 = new QLineEdit(DialogTrain);
        DeparturePointLineEdit_2->setObjectName(QString::fromUtf8("DeparturePointLineEdit_2"));

        verticalLayout_6->addWidget(DeparturePointLineEdit_2);

        DestinationPointLineEdit_2 = new QLineEdit(DialogTrain);
        DestinationPointLineEdit_2->setObjectName(QString::fromUtf8("DestinationPointLineEdit_2"));

        verticalLayout_6->addWidget(DestinationPointLineEdit_2);

        DepartureTimeLineEdit_2 = new QLineEdit(DialogTrain);
        DepartureTimeLineEdit_2->setObjectName(QString::fromUtf8("DepartureTimeLineEdit_2"));

        verticalLayout_6->addWidget(DepartureTimeLineEdit_2);

        NumberSeatsLineEdit_2 = new QLineEdit(DialogTrain);
        NumberSeatsLineEdit_2->setObjectName(QString::fromUtf8("NumberSeatsLineEdit_2"));

        verticalLayout_6->addWidget(NumberSeatsLineEdit_2);

        TravelDurationLineEdit_2 = new QLineEdit(DialogTrain);
        TravelDurationLineEdit_2->setObjectName(QString::fromUtf8("TravelDurationLineEdit_2"));

        verticalLayout_6->addWidget(TravelDurationLineEdit_2);

        TrainNumberLineEdit_2 = new QLineEdit(DialogTrain);
        TrainNumberLineEdit_2->setObjectName(QString::fromUtf8("TrainNumberLineEdit_2"));

        verticalLayout_6->addWidget(TrainNumberLineEdit_2);

        NameLineEdit_2 = new QLineEdit(DialogTrain);
        NameLineEdit_2->setObjectName(QString::fromUtf8("NameLineEdit_2"));

        verticalLayout_6->addWidget(NameLineEdit_2);

        RouteLineEdit_2 = new QLineEdit(DialogTrain);
        RouteLineEdit_2->setObjectName(QString::fromUtf8("RouteLineEdit_2"));

        verticalLayout_6->addWidget(RouteLineEdit_2);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));

        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_4);

        pushButton_2 = new QPushButton(DialogTrain);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);


        verticalLayout_9->addLayout(verticalLayout_5);


        retranslateUi(DialogTrain);

        QMetaObject::connectSlotsByName(DialogTrain);
    } // setupUi

    void retranslateUi(QDialog *DialogTrain)
    {
        DialogTrain->setWindowTitle(QCoreApplication::translate("DialogTrain", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("DialogTrain", "ID:", nullptr));
        label_11->setText(QCoreApplication::translate("DialogTrain", "Departure Point:", nullptr));
        label_12->setText(QCoreApplication::translate("DialogTrain", "Destination Point:", nullptr));
        label_13->setText(QCoreApplication::translate("DialogTrain", "Departure Time:", nullptr));
        label_14->setText(QCoreApplication::translate("DialogTrain", "Number Seats:", nullptr));
        label_15->setText(QCoreApplication::translate("DialogTrain", "Travel Duration:", nullptr));
        label_16->setText(QCoreApplication::translate("DialogTrain", "Train Number:", nullptr));
        label_17->setText(QCoreApplication::translate("DialogTrain", "Name:", nullptr));
        label_18->setText(QCoreApplication::translate("DialogTrain", "Route:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogTrain", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\276\320\261'\321\224\320\272\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTrain: public Ui_DialogTrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTRAIN_H
