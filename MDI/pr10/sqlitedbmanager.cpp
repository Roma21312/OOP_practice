#include "sqlitedbmanager.h"
#include "PassengerTrain.h"
#include "Plain.h"

#include <QDate>
#include <QDebug>
#include <QFile>
#include <QObject>
#include <QSqlError>
#include <QSqlQuery>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOST_NAME);
    db.setDatabaseName(DATABASE_FILE_NAME);
}

SqliteDBManager* SqliteDBManager::getInstance() {
    if (instance == nullptr) {
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase() {
    if (QFile(DATABASE_FILE_NAME).exists()) {
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}

QSqlDatabase SqliteDBManager::getDB() {
    return db;
}

bool SqliteDBManager::restoreDataBase() {
    if (this->openDataBase()) {
        if (!this->createTables()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}

bool SqliteDBManager::openDataBase() {
    if (db.open()) {
        return true;
    } else
        return false;
}

void SqliteDBManager::closeDataBase() {
    db.close();
}

bool SqliteDBManager::createTables() {
    QSqlQuery query;
    if (!query.exec("CREATE TABLE Trains ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "departurePoint TEXT NOT NULL, "
                    "destinationPoint TEXT NOT NULL, "
                    "departureTime TEXT NOT NULL, "
                    "numberSeats INTEGER NOT NULL, "
                    "travelDuration INTEGER NOT NULL, "
                    "trainNumber INTEGER NOT NULL, "
                    "name TEXT NOT NULL, "
                    "route INTEGER NOT NULL"
                    " )"
                    )) {
        qDebug() << "DataBase: error of create Trains";
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("CREATE TABLE Plains ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "departurePoint TEXT NOT NULL, "
                    "destinationPoint TEXT NOT NULL, "
                    "departureTime TEXT NOT NULL, "
                    "numberSeats INTEGER NOT NULL, "
                    "travelDuration INTEGER NOT NULL, "
                    "flightNumber INTEGER NOT NULL"
                    " )"
                    )) {
        qDebug() << "DataBase: error of create Plains";
        qDebug() << query.lastError().text();
        return false;
    } else
        return true;
}

bool SqliteDBManager::inserIntoTable(PassengerTrain& train) {
    QSqlQuery query;
    query.prepare("INSERT INTO Trains (id, departurePoint, destinationPoint, departureTime, numberSeats, travelDuration, trainNumber, name, route) "
                  "VALUES (:id, :departurePoint, :destinationPoint, :departureTime, :numberSeats, :travelDuration, :trainNumber, :name, :route)");
    query.bindValue(":id", train.GetId());
    query.bindValue(":departurePoint", QString::fromStdString(train.GetDeparturePoint()));
    query.bindValue(":destinationPoint", QString::fromStdString(train.GetDestinationPoint()));
    query.bindValue(":departureTime", QString::fromStdString(train.GetDepartureTime()));
    query.bindValue(":numberSeats", train.GetNumberSeats());
    query.bindValue(":travelDuration", train.GetTravelDuration());
    query.bindValue(":trainNumber", train.GetTrainNumber());
    query.bindValue(":name", QString::fromStdString(train.GetName()));
    query.bindValue(":route", train.GetRoute());

    if (!query.exec()) {
        qDebug() << "error insert into Trains";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    } else
        return true;
}

bool SqliteDBManager::inserIntoTable(Plain& plain) {
    QSqlQuery query;
    query.prepare("INSERT INTO Plains (id, departurePoint, destinationPoint, departureTime, numberSeats, travelDuration, flightNumber) "
                  "VALUES (:id, :departurePoint, :destinationPoint, :departureTime, :numberSeats, :travelDuration, :flightNumber)");
    query.bindValue(":id", plain.GetId());
    query.bindValue(":departurePoint", QString::fromStdString(plain.GetDeparturePoint()));
    query.bindValue(":destinationPoint", QString::fromStdString(plain.GetDestinationPoint()));
    query.bindValue(":departureTime", QString::fromStdString(plain.GetDepartureTime()));
    query.bindValue(":numberSeats", plain.GetNumberSeats());
    query.bindValue(":travelDuration", plain.GetTravelDuration());
    query.bindValue(":flightNumber", plain.GetFlightNumber());

    if (!query.exec()) {
        qDebug() << "error insert into Plains";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    } else
        return true;
}
