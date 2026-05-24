#include "Car.h"

Car* getExpensiveCar(Car** cars, int size) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (cars[i]->price > (*(cars + index))->price) {
			index = i;
		}
	}

	return cars[index];
}

int main(void) {
	Car* car1 = new Car("Ferrari", "296GTB", "red", 5, 330000);
	Car* car2 = new Car("Mercedes", "amg gt 63", "black", 8, 200000);
	Car* car3 = new Car("Porsche", "panamera gts", "grey", 2, 170000);
	Car* car4 = new Car;

	car4 = car2;

	Car* cars[]{ car1,car2,car3 };

	cout << car1->toString() << endl;
	cout << car2->toString() << endl;
	cout << car3->toString() << endl;

	cout << "the most expensive car is " << getExpensiveCar(cars, 3)->brand;

	return 0;
}