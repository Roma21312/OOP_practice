#include "PassengerTrain.h"
#include "PassengerTransport.h"
#include <iostream>

using namespace std;

PassengerTrain::PassengerTrain() : PassengerTransport() {
	trainNumber = 0;
	name = "none";
	route = 0;
}

PassengerTrain::PassengerTrain(int id, string departurePoint, string destinationPoint, string departureTime, int numberSeats, int travelDuration, int trainNumber, string name, int route)
	: PassengerTransport(id, departurePoint, destinationPoint, departureTime, numberSeats, travelDuration) {
	this->trainNumber = trainNumber;
    this->name = name;
	this->route = route;
}


int PassengerTrain::GetTrainNumber() {
	return trainNumber;
}
string PassengerTrain::GetName() {
	return name;
}
int PassengerTrain::GetRoute() {
	return route;
}

void PassengerTrain::SetTrainNumber(int trainNumber) {
	this->trainNumber = trainNumber;
}
void PassengerTrain::SetName(string name) {
	this->name= name;
}
void PassengerTrain::SetRoute(int route) {
    this->route = route;
}


istream& operator>>(std::istream& in, PassengerTrain& passengerTrain)
{
	int id;
	int trainNumber;
	string name;
	string departureTime;
	string departurePoint;
	string destinationPoint;
	int route;
	int travelDuration;
	cout << "Enter train id: ";
	in >> id;
	cout << "Enter train number: ";
	cin >> trainNumber;
	cout << "Enter train name: ";
	in.ignore();
	getline(in, name);
	cout << "Enter departure time: ";
	getline(in, departureTime);
	cout << "Enter departure point: ";
	getline(in, departurePoint);
	cout << "Enter destination point: ";
	getline(in, destinationPoint);
	cout << "Enter route: ";
	cin >> route;
	cout << "Enter travel duration: ";
	in >> travelDuration;
	passengerTrain.SetId(id);
	passengerTrain.SetTrainNumber(trainNumber);
	passengerTrain.SetName(name);
	passengerTrain.SetDepartureTime(departureTime);
	passengerTrain.SetDeparturePoint(departurePoint);
	passengerTrain.SetDestinationPoint(destinationPoint);
	passengerTrain.SetRoute(route);
	passengerTrain.SetTravelDuration(travelDuration);
	return in;
}
ostream& operator<<(std::ostream& os, PassengerTrain& train) {
		os << "Train ID: " << train.GetId() << "\n"
		<< "Train Number: " << train.GetTrainNumber() << "\n"
		<< "Name: " << train.GetName() << "\n"
		<< "Departure Time: " << train.GetDepartureTime() << "\n"
		<< "Departure Point: " << train.GetDeparturePoint() << "\n"
		<< "Destination Point: " << train.GetDestinationPoint() << "\n"
		<< "Route: " << train.GetRoute() << "\n"
		<< "Travel Duration: " << train.GetTravelDuration() << " minutes";
	return os;
}
bool operator ==(PassengerTrain& other, PassengerTrain& other2) {
	return (
		other2.GetId() == other.GetId() &&
		other2.GetTrainNumber() == other.GetTrainNumber() &&
		other2.GetName() == other.GetName() &&
		other2.GetDepartureTime() == other.GetDepartureTime() &&
		other2.GetDeparturePoint() == other.GetDeparturePoint() &&
		other2.GetDestinationPoint() == other.GetDestinationPoint() &&
		other2.GetRoute() == other.GetRoute() && 
		other2.GetTravelDuration() == other.GetTravelDuration()
		);
}

void PassengerTrain::display()
{
	cout << "Train number: " << trainNumber << endl;
	cout << "Name: " << name << endl;
	cout << "Route: " << route << endl;
}
