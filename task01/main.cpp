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
	Car* car1 = new Car;
	Car* car2 = new Car;
	Car* car3 = new Car;

	Car* cars[]{ car1,car2,car3 };

	car1->brand = "Ferrari";
	car1->model = "296GTB";
	car1->color = "red";
	car1->age = 5;
	car1->price = 330000;

	car2->brand = "Mercedes";
	car2->model = "amg gt 63";
	car2->color = "black";
	car2->age = 8;
	car2->price = 200000;

	car3->brand = "Porsche";
	car3->model = "panamera gts";
	car3->color = "grey";
	car3->age = 2;
	car3->price = 170000;

	cout << car1->toString() << endl;
	cout << car2->toString() << endl;
	cout << car3->toString() << endl;

	cout << "the most expensive car is " << getExpensiveCar(cars, 3)->brand;

	return 0;
}