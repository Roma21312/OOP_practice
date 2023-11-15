#include "PassengerTrain.h"
#include <iostream>

using namespace std;

PassengerTrain::PassengerTrain() {
	id = 0;
	number = 0;
	time = "none";
	departure = "none";
	appointment = "none";
	duration = 0;
	places = 0;
}

PassengerTrain::PassengerTrain(int id, int number, string time, string departure, string appointment, int duration, int places) {
	this->id = id;
	this->number = number;
	this->time = time;
	this->departure = departure;
	this->appointment = appointment;
	this->duration = duration;
	this->places = places;
}

int PassengerTrain::GetId () {
	return id;
}
int PassengerTrain::GetNumber() {
	return number;
}
string PassengerTrain::GetTime() {
	return time;
}
string PassengerTrain::GetDeparture() {
	return departure;
}
string PassengerTrain::GetAppointment() {
	return appointment;
}
int PassengerTrain::GetDuration() {
	return duration;
}
int PassengerTrain::GetPlaces() {
	return places;
}
void PassengerTrain::SetId(int) {
	this->id = id;
}
void PassengerTrain::SetNumber(int) {
	this->number = number;
}
void PassengerTrain::SetTime(string) {
	this->time = time;
}
void PassengerTrain::SetDeparture(string) {
	this->departure = departure;
}
void PassengerTrain::SetAppointment(string) {
	this->appointment = appointment;
}
void PassengerTrain::SetDuration(int) {
	this->duration = duration;
}
void PassengerTrain::SetPlaces(int) {
	this->places = places;
}
