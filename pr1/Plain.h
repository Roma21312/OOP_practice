#pragma once
#include "PassengerTransport.h"
#include <string>

using namespace std;

class Plain : public PassengerTransport
{
private:
	int flightNumber;
public:

	Plain();
	Plain(int, string, string, string, int, int, int);
	~Plain() {}

	int GetFlightNumber();

	void SetFlightNumber(int);
};