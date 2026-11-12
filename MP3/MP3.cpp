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

//calculating miles per gallon
double milesPerGallon(double miles, double gallons) {
	double milesPerGallon;
	milesPerGallon = miles / gallons;
	return milesPerGallon;
}

//calculating cost per mile
double costPerMile(double cost, double miles) {
	double costPerMile;
	costPerMile = cost / miles;
	return costPerMile;
}


int main() {

}