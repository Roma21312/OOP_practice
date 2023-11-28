#include "PassengerTransport.h"
#include <iostream>

using namespace std;

PassengerTransport::PassengerTransport() {
	id = 0;
	departurePoint = "none";
	destinationPoint = "none";
	departureTime = "none";
	numberSeats = 0;
	travelDuration = 0;
}

PassengerTransport::PassengerTransport(int id, string departurePoint, string destinationPoint, string departureTime, int numberSeats, int travelDuration) {
	this->id = id;
	this->departurePoint = departurePoint;
	this->destinationPoint;
	this->departureTime = departureTime;
	this->numberSeats = numberSeats;
	this->travelDuration = travelDuration;
}

int PassengerTransport::GetId() {
	return id;
}
string PassengerTransport::GetDeparturePoint() {
	return departurePoint;
}
string PassengerTransport::GetDestinationPoint() {
	return destinationPoint;
}
string PassengerTransport::GetDepartureTime() {
	return departureTime;
}
int PassengerTransport::GetNumberSeats() {
	return numberSeats;
}
int PassengerTransport::GetTravelDuration() {
	return travelDuration;
}
void PassengerTransport::SetId(int) {
	this->id = id;
}
void PassengerTransport::SetDeparturePoint(string) {
	this->departurePoint = departurePoint;
}
void PassengerTransport::SetDestinationPoint(string) {
	this->destinationPoint = destinationPoint;
}
void PassengerTransport::SetDepartureTime(string) {
	this->departureTime = departureTime;
}
void PassengerTransport::SetNumberSeats(int) {
	this->numberSeats = numberSeats;
}
void PassengerTransport::SetTravelDuration(int) {
	this->travelDuration = travelDuration;
}

istream& operator>>(istream& in, PassengerTransport& passengerTransport)
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
	cout << "Enter departure station: ";
	getline(in, departurePoint);
	cout << "Enter destination station: ";
	getline(in, destinationPoint);
	cout << "Enter route: ";
	cin >> route;
	cout << "Enter travel duration: ";
	in >> travelDuration;
	passengerTransport.SetId(id);
	passengerTransport.SetDepartureTime(departureTime);
	passengerTransport.SetDeparturePoint(departurePoint);
	passengerTransport.SetDestinationPoint(destinationPoint);
	passengerTransport.SetTravelDuration(travelDuration);
	return in;
}
ostream& operator<<(ostream& os, PassengerTransport& transport) {
		os << "Transport ID: " << transport.GetId() << "\n"
		<< "Departure Time: " << transport.GetDepartureTime() << "\n"
		<< "Departure Point: " << transport.GetDeparturePoint() << "\n"
		<< "Destination Point: " << transport.GetDestinationPoint() << "\n"
		<< "Travel Duration: " << transport.GetTravelDuration() << " minutes";
	return os;
}