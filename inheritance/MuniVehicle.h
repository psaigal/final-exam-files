
#ifndef MUNIVEHICLE_h
#define MUNIVEHICLE_h
#include <string>
#include <iostream>

using namespace std;

class MuniVehicle
{
protected:
	int totalFares;
public:
	MuniVehicle()
	{ totalFares = 0; }

	int getTotalFares()
	{ return totalFares; }

	virtual void paidFare()
	{ totalFares += 2; }

};  

#endif