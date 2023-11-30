#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "PassengerTrain.h"
#include "Plain.h"
#include <QSqlDatabase>

class DBManager {
public:
    virtual void connectToDataBase() = 0;

    virtual QSqlDatabase getDB() = 0;

    virtual bool inserIntoTable(PassengerTrain &PassengerTrain) = 0;
    virtual bool inserIntoTable(Plain &Plain) = 0;
};

#endif // DBMANAGER_H
