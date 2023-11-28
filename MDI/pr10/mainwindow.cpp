#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QLabel>
#include <QLineEdit>

#include "dialogtrain.h"
#include "trainlist.h"
#include "dialogplain.h"
#include "plainlist.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dialogTrain = new DialogTrain(this);
    dialogTrain->setModal(true);

    dialogPlain = new DialogPlain(this);
    dialogPlain->setModal(true);

    trainList = new TrainList(this);
    trainList->setModal(false);

    plainList = new PlainList(this);
    plainList->setModal(false);

    connect(dialogTrain, &DialogTrain::trainCreated, this, &MainWindow::on_createObjectTrain);
    connect(dialogPlain, &DialogPlain::plainCreated, this, &MainWindow::on_createObjectPlain);

    connect(this, &MainWindow::trainCreated, trainList, &TrainList::addItem);
    connect(this, &MainWindow::plainCreated, plainList, &PlainList::addItem);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateTrainButton_clicked()
{
    dialogTrain->show();
}

void MainWindow::on_createObjectTrain(PassengerTrain* train)
{
    trains.push_back(train);
    emit trainCreated(trains.back());
}

void MainWindow::on_TrainListButton_clicked()
{
    trainList->show();
}

void MainWindow::on_CreatePlainButton_clicked()
{
    dialogPlain->show();
}

void MainWindow::on_createObjectPlain(Plain* plain)
{
    plains.push_back(plain);
    emit plainCreated(plains.back());
}

void MainWindow::on_PlainListButton_clicked()
{
    plainList->show();
}
