#include "dialogtrain.h"
#include "ui_dialogtrain.h"
#include "PassengerTrain.h"
#include "PassengerTransport.h"
#include "mainwindow.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include <QMessageBox>
#include <QString>
#include <QSqlTableModel>

DialogTrain::DialogTrain(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTrain),
    dbManager(dbManager)
{
    ui->setupUi(this);
}

DialogTrain::~DialogTrain()
{
    delete ui;
}

void DialogTrain::on_pushButton_2_clicked()
{
    try{
        if (ui->IdLineEdit_2->text().isEmpty()
            || ui->DeparturePointLineEdit_2->text().isEmpty()
            || ui->DestinationPointLineEdit_2->text().isEmpty()
            || ui->DepartureTimeLineEdit_2->text().isEmpty()
            || ui->NumberSeatsLineEdit_2->text().isEmpty()
            || ui->TravelDurationLineEdit_2->text().isEmpty()
            || ui->TrainNumberLineEdit_2->text().isEmpty()
            || ui->NameLineEdit_2->text().isEmpty()
            || ui->RouteLineEdit_2->text().isEmpty())
            throw "notFilledExeption";

        PassengerTrain train(ui->IdLineEdit_2->text().toInt(),
                ui->DeparturePointLineEdit_2->text().toStdString(),
                ui->DestinationPointLineEdit_2->text().toStdString(),
                ui->DepartureTimeLineEdit_2->text().toStdString(),
                ui->NumberSeatsLineEdit_2->text().toInt(),
                ui->TravelDurationLineEdit_2->text().toInt(),
                ui->TrainNumberLineEdit_2->text().toInt(),
                ui->NameLineEdit_2->text().toStdString(),
                ui->RouteLineEdit_2->text().toInt());
        dbManager->inserIntoTable(train);
        this->accept();
    } catch (const char *ex) {
        QMessageBox::critical(this, "Eror", "The field must be filled");
        qInfo() << "The field must be filled";
        this->reject();
}
}
