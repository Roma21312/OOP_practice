#ifndef TRAINLIST_H
#define TRAINLIST_H

#include <QDialog>
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include "PassengerTrain.h"

class QSqlTableModel;

class DBManager;

namespace Ui {
class TrainList;
}

class TrainList : public QDialog
{
    Q_OBJECT

public:
    explicit TrainList(DBManager* dbManager, QWidget *parent = nullptr);
    ~TrainList();

private:
    Ui::TrainList *ui;

    DBManager* dbManager;
    QSqlTableModel* model;

    void setupModel(const QString& tableName, const QStringList& headers);

    void createUI();
};

#endif // TRAINLIST_H
