#include "main.h"

class Car {
public:
	string brand;
	string model;
	string color;
	int age;
	int price;

	Car() {
		brand = "";
		model = "";
		color = "";
		age = 0;
		price = 0;
	}

	Car(string br, string md, string clr, int a, int p) {
		brand = br;
		model = md;
		color = clr;
		age = a;
		price = p;
	}

	Car(const Car& car) {
		brand = car.brand;
		model = car.model;
		color = car.color;
		age = car.age;
		price = car.price;

	}

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