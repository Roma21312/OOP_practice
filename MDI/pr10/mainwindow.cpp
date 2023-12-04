#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QTextStream>
#include <QtDebug>

#include "dialogtrain.h"
#include "trainlist.h"
#include "dialogplain.h"
#include "plainlist.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

MainWindow::MainWindow(DBManager* dbManager, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      dbManager(dbManager)
{
    ui->setupUi(this);

    dialogTrain = new DialogTrain(dbManager, this);
    dialogTrain->setModal(true);

    dialogPlain = new DialogPlain(dbManager, this);
    dialogPlain->setModal(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateTrainButton_clicked()
{
    dialogTrain->show();
}

void MainWindow::on_TrainListButton_clicked()
{
    trainList = new TrainList(dbManager, this);
    trainList->setModal(false);
    trainList->show();
}

void MainWindow::on_PlainListButton_clicked()
{
    plainList = new PlainList(dbManager, this);
    plainList->setModal(false);
    plainList->show();
}

void MainWindow::on_CreatePlainButton_clicked()
{
    dialogPlain->show();
}
