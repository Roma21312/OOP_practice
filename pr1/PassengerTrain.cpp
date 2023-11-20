#include "PassengerTrain.h"
#include <iostream>

using namespace std;

PassengerTrain::PassengerTrain() {
	id = 0;
	trainNumber = 0;
	name = "none";
	departureTime = "none";
	departureStation = "none";
	destinationStation = "none";
	route = 0;
	travelDuration = 0;
}

PassengerTrain::PassengerTrain(int id, int trianNumber, string name, string departureTime, string departureStation, string destinationStation, int route, int travelDuration) {
	this->id = id;
	this->trainNumber = trainNumber;
	this->name;
	this->departureTime = departureTime;
	this->departureStation = departureStation;
	this->destinationStation = destinationStation;
	this->route = route;
	this->travelDuration = travelDuration;
}

int PassengerTrain::GetId () {
	return id;
}
int PassengerTrain::GetTrainNumber() {
	return trainNumber;
}
string PassengerTrain::GetName() {
	return name;
}
string PassengerTrain::GetDepartureTime() {
	return departureTime;
}
string PassengerTrain::GetDepartureStation() {
	return departureStation;
}
string PassengerTrain::GetDestinationStation() {
	return destinationStation;
}
int PassengerTrain::GetRoute() {
	return route;
}
int PassengerTrain::GetTravelDuration() {
	return travelDuration;
}
void PassengerTrain::SetId(int) {
	this->id = id;
}
void PassengerTrain::SetTrainNumber(int) {
	this->trainNumber = trainNumber;
}
void PassengerTrain::SetName(string) {
	this->name= name;
}
void PassengerTrain::SetDepartureTime(string) {
	this->departureTime = departureTime;
}
void PassengerTrain::SetDepartureStation(string) {
	this->departureStation = departureStation;
}
void PassengerTrain::SetDestinationStation(string) {
	this->destinationStation = destinationStation;
}
void PassengerTrain::SetRoute(int) {
	this->route = route;
}
void PassengerTrain::SetTravelDuration(int) {
	this->travelDuration = travelDuration;
}

std::istream& operator>>(std::istream& in, PassengerTrain& passengerTrain)
{
	int id;
	int trainNumber;
	std::string name;
	std::string departureTime;
	std::string departureStation;
	std::string destinationStation;
	int route;
	int travelDuration;
	std::cout << "Enter train id: ";
	in >> id;
	std::cout << "Enter train number: ";
	cin >> trainNumber;
	std::cout << "Enter train name: ";
	in.ignore();
	getline(in, name);
	std::cout << "Enter departure time: ";
	getline(in, departureTime);
	std::cout << "Enter departure station: ";
	getline(in, departureStation);
	std::cout << "Enter destination station: ";
	getline(in, destinationStation);
	std::cout << "Enter route: ";
	cin >> route;
	std::cout << "Enter travel duration: ";
	in >> travelDuration;
	passengerTrain.SetId(id);
	passengerTrain.SetTrainNumber(trainNumber);
	passengerTrain.SetName(name);
	passengerTrain.SetDepartureTime(departureTime);
	passengerTrain.SetDepartureStation(departureStation);
	passengerTrain.SetDestinationStation(destinationStation);
	passengerTrain.SetRoute(route);
	passengerTrain.SetTravelDuration(travelDuration);
	return in;
}
std::ostream& operator<<(std::ostream& os, PassengerTrain& train) {
	 os << "Train ID: " << train.GetId() << "\n"
		<< "Train Number: " << train.GetTrainNumber() << "\n"
		<< "Name: " << train.GetName() << "\n"
		<< "Departure Time: " << train.GetDepartureTime() << "\n"
		<< "Departure Station: " << train.GetDepartureStation() << "\n"
		<< "Destination Station: " << train.GetDestinationStation() << "\n"
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
		other2.GetDepartureStation() == other.GetDepartureStation() &&
		other2.GetDestinationStation() == other.GetDestinationStation()
		&&
		other2.GetRoute() == other.GetRoute() && 
		other2.GetTravelDuration() == other.GetTravelDuration()
		);
}