#include <iostream>
#include <Windows.h>
#include "PassengerTrain.h"
#include "PassengerTransport.h"
#include "Plain.h"
#include "Vector.h"
#include <random>
#include <vector>
#include <time.h>
#include <algorithm>
#include <typeinfo>

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

    srand(time(0));


    vector<int> firstVector;
    vector<int> secondVector;

    for (int i = 0; firstVector.size() < 10; i++) {
        int Random = rand() % 100;
        if (Random % 2 == 0)
            firstVector.push_back(Random);
    }

    for (int i = 0; secondVector.size() < 10; i++) {
        int Random = rand() % 100;
        if (Random % 2 == 1)
            secondVector.push_back(Random);
    }

    sort(firstVector.begin(), firstVector.end());
    sort(secondVector.begin(), secondVector.end());

    vector<int> thirdVector(firstVector.size() + secondVector.size());
    merge(firstVector.begin(), firstVector.end(), secondVector.begin(), secondVector.end(), thirdVector.begin());

    for (int i = 0; i < firstVector.size(); i++) {
        cout << firstVector[i] << endl;
    }

    cout << "First Vector: " << endl;

    for (int i = 0; i < secondVector.size(); i++) {
        cout << secondVector[i] << endl;
    }

    cout << "Second Vector: " << endl;

    for (int i = 0; i < thirdVector.size(); i++) {
        cout << thirdVector[i] << endl;
    }

    cout << "Third Vector: " << endl;

    vector<PassengerTransport*> passengerTransportVector;

    int choice;
    do {
        cout << "1. Добавити поїзд" << endl;
        cout << "2. Добавити літак" << endl;
        cout << "3. Вихід" << endl;
        cout << "Введіть свій вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            PassengerTrain* passengerTrain = new PassengerTrain();
            cin >> *passengerTrain;
            passengerTransportVector.push_back(passengerTrain);
            break;
        }
        case 2: {
            Plain* plain = new Plain();
            cin >> *plain;
            passengerTransportVector.push_back(plain);
            break;
        }
        case 3: 
            cout << "Вихід" << endl;
            break;
        default:
            cout << "Невірний вибір" << endl;
            break;
        }
    } while (choice != 0);

    vector<PassengerTransport*> newPassengerTransportVector(passengerTransportVector.begin(), passengerTransportVector.end());

    passengerTransportVector.erase(remove_if(passengerTransportVector.begin(), passengerTransportVector.end(),
        [](const PassengerTransport* passengerTransport) { return dynamic_cast<const PassengerTrain*> (passengerTransport) != nullptr;  }),
        passengerTransportVector.end());

    newPassengerTransportVector.erase(remove_if(newPassengerTransportVector.begin(), newPassengerTransportVector.end(),
        [](const PassengerTransport* passengerTransport) { return dynamic_cast<const Plain*> (passengerTransport) != nullptr;  }),
        newPassengerTransportVector.end());

    cout << endl << "Перший вектор після видалення об'єкта Train: " << endl;
    for (const auto& transportPassenger : passengerTransportVector) {
        cout << *transportPassenger << endl;
    }

    cout << endl << "Другий вектор після видалення об'єкта Plain: " << endl;
    for (const auto& passengerTransport : newPassengerTransportVector) {
        cout << *passengerTransport << endl;
    }
}