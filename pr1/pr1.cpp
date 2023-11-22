#include <iostream>
#include <Windows.h>
#include "PassengerTrain.h"
#include "PassengerTransport.h"
#include "Plain.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    PassengerTransport* passengerTransports[5];

        for (int i = 0; i < 5; i++) {
            int choice = menu();

            switch (choice) {
            case 1: {
                PassengerTrain* train = new PassengerTrain();
                cin >> *train;
                passengerTransports[i] = train;
                break;
            }
            case 2: {
                Plain* plain = new Plain();
                cin >> *plain;
                passengerTransports[i] = plain;
                break;
            }
            default:
                {
                break;
                }
            }

            passengerTransports[i]->display();
        }

        for (int i = 0; i < 5; i++)
        {
            delete passengerTransports[i];
        }

        return 0;
}

int menu() 
{
    int choice;
    cout << "Виберіть тип транспорту, який ви хочете створити:\n";
    cout << "1. Пасажирський поїзд\n";
    cout << "2. Літак\n";
    cin >> choice;
    return choice;
}