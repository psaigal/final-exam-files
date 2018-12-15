#include <iostream>
#include "CableCar.h"
#include "MuniVehicle.h"
using namespace std;


int main() {

    CableCar sf_car;
    cout << sf_car.getTotalFares() << endl;

    sf_car.paidFare();
    cout << sf_car.getTotalFares() << endl;


    return 0;

}