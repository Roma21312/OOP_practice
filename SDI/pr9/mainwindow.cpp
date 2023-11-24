#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PassengerTrain.h"
#include "PassengerTransport.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->IdLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->DeparturePointLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->DestinationPointLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->DepartureTimeLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->NumberSeatsLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->TravelDurationLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->TrainNumberLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->NameLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else if(ui->RouteLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("Помилка"), tr("Потрібно заповнити усі обов’язкові поля"));
    }
    else {
        PassengerTrain *train = new PassengerTrain(ui->IdLineEdit->text().toInt(),
                                                   ui->DeparturePointLineEdit->text().toStdString(),
                                                   ui->DestinationPointLineEdit->text().toStdString(),
                                                   ui->DepartureTimeLineEdit->text().toStdString(),
                                                   ui->NumberSeatsLineEdit->text().toInt(),
                                                   ui->TravelDurationLineEdit->text().toInt(),
                                                   ui->TrainNumberLineEdit->text().toInt(),
                                                   ui->NameLineEdit->text().toStdString(),
                                                   ui->RouteLineEdit->text().toInt()
                                                   );

        ui->IdLabel->setText(QString::number(train->GetId()));
        ui->DeparturePointLabel->setText(QString::fromStdString(train->GetDeparturePoint()));
        ui->DestinationPointLabel->setText(QString::fromStdString(train->GetDestinationPoint()));
        ui->DepartureTimeLabel->setText(QString::fromStdString(train->GetDepartureTime()));
        ui->NumberSeatsLabel->setText(QString::number(train->GetNumberSeats()));
        ui->TravelDurationLabel->setText(QString::number(train->GetTravelDuration()));
        ui->TrainNumberLabel->setText(QString::number(train->GetTrainNumber()));
        ui->NameLabel->setText(QString::fromStdString(train->GetName()));
        ui->RouteLabel->setText(QString::number(train->GetRoute()));
    }
}

