#include "dialogtrain.h"
#include "ui_dialogtrain.h"
#include "PassengerTrain.h"
#include "PassengerTransport.h"
#include <QMessageBox>

DialogTrain::DialogTrain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTrain)
{
    ui->setupUi(this);
}

DialogTrain::~DialogTrain()
{
    delete ui;
}
void DialogTrain::on_pushButton_2_clicked()
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
    else if(ui->TrainNumberLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->NameLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->RouteLineEdit_2->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else {
        PassengerTrain *train = new PassengerTrain(ui->IdLineEdit_2->text().toInt(),
                                                   ui->DeparturePointLineEdit_2->text().toStdString(),
                                                   ui->DestinationPointLineEdit_2->text().toStdString(),
                                                   ui->DepartureTimeLineEdit_2->text().toStdString(),
                                                   ui->NumberSeatsLineEdit_2->text().toInt(),
                                                   ui->TravelDurationLineEdit_2->text().toInt(),
                                                   ui->TrainNumberLineEdit_2->text().toInt(),
                                                   ui->NameLineEdit_2->text().toStdString(),
                                                   ui->RouteLineEdit_2->text().toInt()
                                                   );
        emit trainCreated(train);
        this->accept();
    }
}
