#include "dialogplain.h"
#include "ui_dialogplain.h"
#include "Plain.h"
#include "PassengerTransport.h"
#include <QMessageBox>
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include <QDialog>
#include <QString>
#include <QSqlTableModel>

DialogPlain::DialogPlain(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPlain),
    dbManager(dbManager)
{
    ui->setupUi(this);
}

DialogPlain::~DialogPlain()
{
    delete ui;
}

void DialogPlain::on_pushButton_2_clicked()
{
        if (ui->IdLineEdit_2->text().isEmpty()
            || ui->DeparturePointLineEdit_2->text().isEmpty()
            || ui->DestinationPointLineEdit_2->text().isEmpty()
            || ui->DepartureTimeLineEdit_2->text().isEmpty()
            || ui->NumberSeatsLineEdit_2->text().isEmpty()
            || ui->TravelDurationLineEdit_2->text().isEmpty()
            || ui->FlightNumberLineEdit_2->text().isEmpty())
            throw "notFilledExeption";

        Plain plain(ui->IdLineEdit_2->text().toInt(),
                             ui->DeparturePointLineEdit_2->text().toStdString(),
                             ui->DestinationPointLineEdit_2->text().toStdString(),
                             ui->DepartureTimeLineEdit_2->text().toStdString(),
                             ui->NumberSeatsLineEdit_2->text().toInt(),
                             ui->TravelDurationLineEdit_2->text().toInt(),
                             ui->FlightNumberLineEdit_2->text().toInt());
        dbManager->inserIntoTable(plain);
        this->accept();
}
