#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include "dbmanager.h"
#include "PassengerTrain.h"
#include "Plain.h"

#define DATABASE_HOST_NAME   "ExampleDataBase"
#define DATABASE_FILE_NAME   "DataBase.sqlite"

class SqliteDBManager : public DBManager {

public:
    static SqliteDBManager* getInstance();

    void connectToDataBase() override;

    QSqlDatabase getDB() override;

    bool inserIntoTable(PassengerTrain &PassengerTrain) override;
    bool inserIntoTable(Plain &Plain) override;

private:
    QSqlDatabase db;

    static SqliteDBManager* instance;

    SqliteDBManager();

    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};

#endif // DATABASE_H
