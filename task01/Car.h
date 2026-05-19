#include "main.h"

class Car {
public:
	string brand;
	string model;
	string color;
	int age;
	double price;

	string toString() {
		string s = "Car:\n";
		s += "brand: " + brand + "\n";
		s += "model: " + model + "\n";
		s += "color: " + color + "\n";
		s += "age: " + to_string(age) + "\n";
		s += "price: " + to_string(price) + "$";

		return s;
	}
};