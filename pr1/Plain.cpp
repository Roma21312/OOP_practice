#include "Plain.h"
#include <iostream>

using namespace std;

Plain::Plain() {
	id = 0;
	departurePoint = "none";
	destinationPoint = "none";
	flightNumber = 0;
	departureTime = "none";
	numberSeats = 0;
	travelDuration = 0;
}

Plain::Plain(int id, string departurePoint, string destinationPoint, int flightNumber, string departureTime, int numberSeats, int travelDuration) {
	this->id = id;
	this->departurePoint = departurePoint;
	this->destinationPoint;
	this->flightNumber = flightNumber;
	this->departureTime = departureTime;
	this->numberSeats = numberSeats;
	this->travelDuration = travelDuration;
}

int Plain::GetId() {
	return id;
}
string Plain::GetDeparturePoint() {
	return departurePoint;
}
string Plain::GetDestinationPoint() {
	return destinationPoint;
}
int Plain::GetFlightNumber() {
	return flightNumber;
}
string Plain::GetDepartureTime() {
	return departureTime;
}
int Plain::GetNumberSeats() {
	return numberSeats;
}
int Plain::GetTravelDuration() {
	return travelDuration;
}
void Plain::SetId(int) {
	this->id = id;
}
void Plain::SetDeparturePoint(string) {
	this->departurePoint = departurePoint;
}
void Plain::SetDestinationPoint(string) {
	this->destinationPoint = destinationPoint;
}
void Plain::SetFlightNumber(int) {
	this->flightNumber = flightNumber;
}
void Plain::SetDepartureTime(string) {
	this->departureTime = departureTime;
}
void Plain::SetNumberSeats(int) {
	this->numberSeats = numberSeats;
}
void Plain::SetTravelDuration(int) {
	this->travelDuration = travelDuration;
}