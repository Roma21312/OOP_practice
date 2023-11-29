#include <iostream>
#include <Windows.h>
#include "PassengerTrain.h"
#include "PassengerTransport.h"
#include "Plain.h"
#include "Vector.h"

using namespace std;

int menu()
{
    int input;
    cout << "Виберіть тип транспорту, який ви хочете створити:\n";
    cout << "1. Пасажирський поїзд\n";
    cout << "2. Літак\n";
    cin >> input;
    return input;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int const size = 1;
    Vector<PassengerTransport*> passengerTransports;

        for (int i = 0; i < 5; i++) {
            if (menu() == 1) {
                PassengerTrain* train = new PassengerTrain();
                cin >> *train;
                passengerTransports.push_back(train);
            }
            else {
                Plain* plain = new Plain();
                cin >> *plain;
                passengerTransports.push_back(plain);
            }
            cout << *passengerTransports[i] << endl;
        }

        for (int i = 0; i < 5; i++)
        {
            delete passengerTransports[i];
        }

        return 0;
}
