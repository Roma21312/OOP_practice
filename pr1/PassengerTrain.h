#pragma once
#include <string>

using namespace std;

class PassengerTrain
{
private:
	int id;
	int trainNumber;
	string name;
	string departureTime;
	string departureStation;
	string destinationStation;
	int route;
	int travelDuration;
public:

	PassengerTrain();
	PassengerTrain(int, int, string, string, string, string, int, int);
	~PassengerTrain() {}

	int GetId();
	int GetTrainNumber();
	string GetName();
	string GetDepartureTime();
	string GetDepartureStation();
	string GetDestinationStation();
	int GetRoute();
	int GetTravelDuration();

	void SetId(int);
	void SetTrainNumber(int);
	void SetName(string);
	void SetDepartureTime(string);
	void SetDepartureStation(string);
	void SetDestinationStation(string);
	void SetRoute(int);
	void SetTravelDuration(int);

	friend std::istream& operator>>(std::istream& in, PassengerTrain& passengerTrain);
	friend std::ostream& operator<<(std::ostream& os, PassengerTrain& train);
};
