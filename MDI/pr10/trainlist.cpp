#include "trainlist.h"
#include "ui_trainlist.h"
#include "PassengerTrain.h"

#include <QListWidgetItem>
#include <QString>

TrainList::TrainList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrainList)
{
    ui->setupUi(this);
}

TrainList::~TrainList()
{
    delete ui;
}

void TrainList::addItem(PassengerTrain* train){
    QListWidgetItem* item = new QListWidgetItem();
    item->setText(QString("Id: %1, DeparturePoint: %2, DestinationPoint: %3, DepartureTime: %4, NumberSeats: %5, TravelDuration: %6, TrainNumber: %7, Name: %8, Route: %9")
                      .arg(train->GetId())
                      .arg(QString::fromStdString(train->GetDeparturePoint()))
                      .arg(QString::fromStdString(train->GetDestinationPoint()))
                      .arg(QString::fromStdString(train->GetDepartureTime()))
                      .arg(train->GetNumberSeats())
                      .arg(train->GetTravelDuration())
                      .arg(train->GetTrainNumber())
                      .arg(QString::fromStdString(train->GetName()))
                      .arg(train->GetRoute())
                  );
    ui->listWidget->addItem(item);
}
