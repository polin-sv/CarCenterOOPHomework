#include "CarCenter.h"

int CarCenter::calculateTotalPrice(Transport** transports, int size) {

	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += transports[i]->getPrice();
	}

	return total;
}