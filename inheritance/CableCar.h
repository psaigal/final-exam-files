#ifndef CABLECAR_h
#define CABLECAR_h
#include <string>
#include <iostream>
#include "MuniVehicle.h"
using namespace std;


class CableCar : public MuniVehicle {

public:
	CableCar()
	{ totalFares = 0; }


	void paidFare()
	{ totalFares += 7; }

	}; 

#endif