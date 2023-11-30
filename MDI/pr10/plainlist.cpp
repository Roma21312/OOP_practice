#include "plainlist.h"
#include "ui_plainlist.h"
#include "PassengerTrain.h"

#include <QListWidgetItem>
#include <QString>

#include "dbmanager.h"
#include "sqlitedbmanager.h"

#include <QSqlTableModel>

PlainList::PlainList(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlainList),
    dbManager(dbManager)
{
    ui->setupUi(this);
    this->setupModel("buses",
                     QStringList() << tr("id")
                      << tr("departurePoint")
                      << tr("destinationPoint")
                      << tr("departureTime")
                      << tr("numberSeats")
                      << tr("travelDuration")
                      << tr("flightNumber")
                     );
    this->createUI();
}
PlainList::~PlainList()
{
    delete ui;
    if (model)
        delete model;
}

void PlainList::setupModel(const QString& tableName, const QStringList& headers) {
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable(tableName);
    for (int i = 0, j = 0; i < model->columnCount(); i++, j++) {
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0, Qt::AscendingOrder);
}

void PlainList::createUI() {
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}
