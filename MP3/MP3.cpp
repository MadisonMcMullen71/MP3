#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//converting liters to gallons
double toGallons(double amount, char unit) {
	const double literPerGallon = 0.26417205;
	if (unit == 'l' || unit == 'L') {
		amount = amount * literPerGallon;
		return amount;
	}
	return amount;

}

//calculating fill up cost
double fillUpCost(double amount, double pricePerUnit) {
	double totalcost;
	totalcost = amount * pricePerUnit;
	return totalcost;

}
