#include "dialogplain.h"
#include "ui_dialogplain.h"
#include "Plain.h"
#include "PassengerTransport.h"
#include <QMessageBox>

DialogPlain::DialogPlain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPlain)
{
    ui->setupUi(this);
}

DialogPlain::~DialogPlain()
{
    delete ui;
}
void DialogPlain::on_pushButton_2_clicked()
{
    if(ui->IdLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->DeparturePointLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->DestinationPointLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->DepartureTimeLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->NumberSeatsLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->TravelDurationLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->FlightNumberLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else {
        Plain *plain = new Plain(ui->IdLineEdit_2->text().toInt(),
                                                   ui->DeparturePointLineEdit_2->text().toStdString(),
                                                   ui->DestinationPointLineEdit_2->text().toStdString(),
                                                   ui->DepartureTimeLineEdit_2->text().toStdString(),
                                                   ui->NumberSeatsLineEdit_2->text().toInt(),
                                                   ui->TravelDurationLineEdit_2->text().toInt(),
                                                   ui->FlightNumberLineEdit_2->text().toInt()
                                                   );
        emit plainCreated(plain);
        this->accept();
    }
}
