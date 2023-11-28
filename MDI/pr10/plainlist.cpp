#include "plainlist.h"
#include "ui_plainlist.h"
#include "PassengerTrain.h"

#include <QListWidgetItem>
#include <QString>

PlainList::PlainList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlainList)
{
    ui->setupUi(this);
}

PlainList::~PlainList()
{
    delete ui;
}

void PlainList::addItem(Plain* plain){
    QListWidgetItem* item = new QListWidgetItem();
    item->setText(QString("Id: %1, DeparturePoint: %2, DestinationPoint: %3, DepartureTime: %4, NumberSeats: %5, TravelDuration: %6, FligtNumber: %7")
                      .arg(plain->GetId())
                      .arg(QString::fromStdString(plain->GetDeparturePoint()))
                      .arg(QString::fromStdString(plain->GetDestinationPoint()))
                      .arg(QString::fromStdString(plain->GetDepartureTime()))
                      .arg(plain->GetNumberSeats())
                      .arg(plain->GetTravelDuration())
                      .arg(plain->GetFlightNumber())
                  );
    ui->listWidget->addItem(item);
}
