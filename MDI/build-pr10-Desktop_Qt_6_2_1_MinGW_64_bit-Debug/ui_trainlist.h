/********************************************************************************
** Form generated from reading UI file 'trainlist.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINLIST_H
#define UI_TRAINLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrainList
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *TrainList)
    {
        if (TrainList->objectName().isEmpty())
            TrainList->setObjectName(QString::fromUtf8("TrainList"));
        TrainList->resize(738, 259);
        verticalLayout = new QVBoxLayout(TrainList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(TrainList);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(TrainList);

        QMetaObject::connectSlotsByName(TrainList);
    } // setupUi

    void retranslateUi(QDialog *TrainList)
    {
        TrainList->setWindowTitle(QCoreApplication::translate("TrainList", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainList: public Ui_TrainList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINLIST_H
