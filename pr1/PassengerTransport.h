#pragma once
#include <string>

using namespace std;

class PassengerTransport
{
private:
	int id;
	string departurePoint;
	string destinationPoint;
	string departureTime;
	int numberSeats;
	int travelDuration;
public:

	PassengerTransport();
	PassengerTransport(int, string, string, string, int, int);
	~PassengerTransport() {}

	int GetId();
	string GetDeparturePoint();
	string GetDestinationPoint();
	string GetDepartureTime();
	int GetNumberSeats();
	int GetTravelDuration();

	void SetId(int);
	void SetDeparturePoint(string);
	void SetDestinationPoint(string);
	void SetDepartureTime(string);
	void SetNumberSeats(int);
	void SetTravelDuration(int);

	friend istream& operator>>(istream& in, PassengerTrain& passengerTrain);
	friend ostream& operator<<(ostream& os, PassengerTrain& train);
};