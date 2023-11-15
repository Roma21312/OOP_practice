#pragma once
#include <string>

using namespace std;

class PassengerTrain
{
private:
	int id;
	int number;
	string time;
	string departure;
	string appointment;
	int duration;
	int places;
public:

	int GetId();
	int GetNumber();
	string GetTime();
	string GetDeparture();
	string GetAppointment();
	int GetDuration();
	int GetPlaces();

	void SetId(int);
	void SetNumber(int);
	void SetTime(string);
	void SetDeparture(string);
	void SetAppointment(string);
	void SetDuration(int);
	void SetPlaces(int);
};

