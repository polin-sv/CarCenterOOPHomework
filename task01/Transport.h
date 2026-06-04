#pragma once
#include <iostream>
#include <string> 

using namespace std;

class Transport
{
protected:
	int price;
public:
	Transport();

	Transport(int price);

	int getPrice();

	void setPrice(int price);

	string toString();
};

