#pragma once
#include <string>

using namespace std;

class Plain
{
private:
	int id;
	string departurePoint;
	string destinationPoint;
	int flightNumber;
	string departureTime;
	int numberSeats;
	int travelDuration;
public:

	Plain();
	Plain(int, string, string, int, string, int, int);
	~Plain() {}

	int GetId();
	string GetDeparturePoint();
	string GetDestinationPoint();
	int GetFlightNumber();
	string GetDepartureTime();
	int GetNumberSeats();
	int GetTravelDuration();

	void SetId(int);
	void SetDeparturePoint(string);
	void SetDestinationPoint(string);
	void SetFlightNumber(int);
	void SetDepartureTime(string);
	void SetNumberSeats(int);
	void SetTravelDuration(int);
};