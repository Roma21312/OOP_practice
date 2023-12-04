/********************************************************************************
** Form generated from reading UI file 'dialogplain.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPLAIN_H
#define UI_DIALOGPLAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPlain
{
public:
    QVBoxLayout *verticalLayout;
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
    QVBoxLayout *verticalLayout_6;
    QLineEdit *IdLineEdit_2;
    QLineEdit *DeparturePointLineEdit_2;
    QLineEdit *DestinationPointLineEdit_2;
    QLineEdit *DepartureTimeLineEdit_2;
    QLineEdit *NumberSeatsLineEdit_2;
    QLineEdit *TravelDurationLineEdit_2;
    QLineEdit *FlightNumberLineEdit_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogPlain)
    {
        if (DialogPlain->objectName().isEmpty())
            DialogPlain->setObjectName("DialogPlain");
        DialogPlain->resize(400, 300);
        verticalLayout = new QVBoxLayout(DialogPlain);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_10 = new QLabel(DialogPlain);
        label_10->setObjectName("label_10");

        verticalLayout_7->addWidget(label_10);

        label_11 = new QLabel(DialogPlain);
        label_11->setObjectName("label_11");

        verticalLayout_7->addWidget(label_11);

        label_12 = new QLabel(DialogPlain);
        label_12->setObjectName("label_12");

        verticalLayout_7->addWidget(label_12);

        label_13 = new QLabel(DialogPlain);
        label_13->setObjectName("label_13");

        verticalLayout_7->addWidget(label_13);

        label_14 = new QLabel(DialogPlain);
        label_14->setObjectName("label_14");

        verticalLayout_7->addWidget(label_14);

        label_15 = new QLabel(DialogPlain);
        label_15->setObjectName("label_15");

        verticalLayout_7->addWidget(label_15);

        label_16 = new QLabel(DialogPlain);
        label_16->setObjectName("label_16");

        verticalLayout_7->addWidget(label_16);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        IdLineEdit_2 = new QLineEdit(DialogPlain);
        IdLineEdit_2->setObjectName("IdLineEdit_2");

        verticalLayout_6->addWidget(IdLineEdit_2);

        DeparturePointLineEdit_2 = new QLineEdit(DialogPlain);
        DeparturePointLineEdit_2->setObjectName("DeparturePointLineEdit_2");

        verticalLayout_6->addWidget(DeparturePointLineEdit_2);

        DestinationPointLineEdit_2 = new QLineEdit(DialogPlain);
        DestinationPointLineEdit_2->setObjectName("DestinationPointLineEdit_2");

        verticalLayout_6->addWidget(DestinationPointLineEdit_2);

        DepartureTimeLineEdit_2 = new QLineEdit(DialogPlain);
        DepartureTimeLineEdit_2->setObjectName("DepartureTimeLineEdit_2");

        verticalLayout_6->addWidget(DepartureTimeLineEdit_2);

        NumberSeatsLineEdit_2 = new QLineEdit(DialogPlain);
        NumberSeatsLineEdit_2->setObjectName("NumberSeatsLineEdit_2");

        verticalLayout_6->addWidget(NumberSeatsLineEdit_2);

        TravelDurationLineEdit_2 = new QLineEdit(DialogPlain);
        TravelDurationLineEdit_2->setObjectName("TravelDurationLineEdit_2");

        verticalLayout_6->addWidget(TravelDurationLineEdit_2);

        FlightNumberLineEdit_2 = new QLineEdit(DialogPlain);
        FlightNumberLineEdit_2->setObjectName("FlightNumberLineEdit_2");

        verticalLayout_6->addWidget(FlightNumberLineEdit_2);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");

        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_4);

        pushButton_2 = new QPushButton(DialogPlain);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_5->addWidget(pushButton_2);


        verticalLayout->addLayout(verticalLayout_5);


        retranslateUi(DialogPlain);

        QMetaObject::connectSlotsByName(DialogPlain);
    } // setupUi

    void retranslateUi(QDialog *DialogPlain)
    {
        DialogPlain->setWindowTitle(QCoreApplication::translate("DialogPlain", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("DialogPlain", "ID:", nullptr));
        label_11->setText(QCoreApplication::translate("DialogPlain", "Departure Point:", nullptr));
        label_12->setText(QCoreApplication::translate("DialogPlain", "Destination Point:", nullptr));
        label_13->setText(QCoreApplication::translate("DialogPlain", "Departure Time:", nullptr));
        label_14->setText(QCoreApplication::translate("DialogPlain", "Number Seats:", nullptr));
        label_15->setText(QCoreApplication::translate("DialogPlain", "Travel Duration:", nullptr));
        label_16->setText(QCoreApplication::translate("DialogPlain", "Flight Number:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogPlain", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\276\320\261'\321\224\320\272\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPlain: public Ui_DialogPlain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPLAIN_H
