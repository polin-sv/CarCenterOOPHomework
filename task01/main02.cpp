#include "Bus.h"
#include "Bolid.h"
#include "Van.h"
#include "CarCenter.h"

int main() {

	Bus* setra = new Bus(20000);

	Van* ford = new Van(15000);
	Van* ram = new Van(10000);

	Bolid* mercedes = new Bolid(20000000);
	Bolid* ferrari = new Bolid(18000000);
	Bolid* alpin = new Bolid(15000000);

	int size = 6;

	Transport** transports = new Transport * [size]
		{setra, ford, ram, mercedes, ferrari, alpin};

	CarCenter* center = new CarCenter(); 

	int total = center->calculateTotalPrice(transports, size);

	cout << "total: " << total << endl;

	delete setra;
	delete ford;
	delete ram;
	delete mercedes;
	delete ferrari;
	delete alpin;

	delete[] transports;


	return 0;
}