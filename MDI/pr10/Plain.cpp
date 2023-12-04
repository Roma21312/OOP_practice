#include "Plain.h"
#include "PassengerTransport.h"
#include <iostream>

using namespace std;

Plain::Plain() : PassengerTransport() {
	flightNumber = 0;
}

Plain::Plain(int id, string departurePoint, string destinationPoint, string departureTime, int numberSeats, int travelDuration, int flightNumber) 
	: PassengerTransport(id, departurePoint, destinationPoint, departureTime, numberSeats, travelDuration) {
	this->flightNumber = flightNumber;
}

int Plain::GetFlightNumber() {
	return flightNumber;
}

void Plain::SetFlightNumber(int flightNumber) {
	this->flightNumber = flightNumber;
}

void Plain::display()
{
	cout << "Flight number: " << flightNumber << endl;
}
