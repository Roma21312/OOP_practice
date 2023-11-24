#ifndef PASSENGERTRAIN_H
#define PASSENGERTRAIN_H
#pragma once
#include "PassengerTransport.h"
#include <string>

using namespace std;

class PassengerTrain : public PassengerTransport
{
private:
    int trainNumber;
    string name;
    int route;
public:

    PassengerTrain();
    PassengerTrain(int, string, string, string, int, int, int, string, int);
    ~PassengerTrain() {}

    int GetTrainNumber();
    string GetName();
    int GetRoute();

    void SetTrainNumber(int);
    void SetName(string);
    void SetRoute(int);

    friend istream& operator>>(istream& in, PassengerTrain& passengerTrain);
    friend ostream& operator<<(ostream& os, PassengerTrain& train);
    friend bool operator == (PassengerTrain& other, PassengerTrain& other2);

    void display() override;
};

#endif // PASSENGERTRAIN_H
