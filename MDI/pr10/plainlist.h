#ifndef PLAINLIST_H
#define PLAINLIST_H

#include <QDialog>

#include "Plain.h"

#include "dbmanager.h"
#include "sqlitedbmanager.h"

class QSqlTableModel;

class DBManager;

namespace Ui {
class PlainList;
}

class PlainList : public QDialog
{
    Q_OBJECT

public:
    explicit PlainList(DBManager* dbManager, QWidget *parent = nullptr);
    ~PlainList();

private:
    Ui::PlainList *ui;

    DBManager* dbManager;
    QSqlTableModel* model;

    void setupModel(const QString& tableName, const QStringList& headers);

    void createUI();
};

#endif // PLAINLIST_H
