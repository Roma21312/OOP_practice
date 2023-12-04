/********************************************************************************
** Form generated from reading UI file 'plainlist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAINLIST_H
#define UI_PLAINLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlainList
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *PlainList)
    {
        if (PlainList->objectName().isEmpty())
            PlainList->setObjectName("PlainList");
        PlainList->resize(725, 300);
        verticalLayout = new QVBoxLayout(PlainList);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(PlainList);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(PlainList);

        QMetaObject::connectSlotsByName(PlainList);
    } // setupUi

    void retranslateUi(QDialog *PlainList)
    {
        PlainList->setWindowTitle(QCoreApplication::translate("PlainList", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlainList: public Ui_PlainList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAINLIST_H
