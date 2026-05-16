#include "main.h"

class Car {
public:
	string brand;
	string model;
	string color;
	int age;
	double price;
};


int main(void) {
	Car car1;

	cout << "input brand of your car: ";
	cin >> car1.brand;

	cout << "input model of your car: ";
	cin >> car1.model;

	cout << "input color of your car: ";
	cin >> car1.color;

	cout << "input age of your car: ";
	cin >> car1.age;

	cout << "input price of your car: ";
	cin >> car1.price;

	return 0;
}