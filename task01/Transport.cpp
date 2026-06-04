#include "Transport.h"

Transport::Transport() : price(0) {

}

Transport::Transport(int price) {
	this->price = price > 0 ? price : 0;
}

int Transport::getPrice() {
	return price;
}

void Transport::setPrice(int price) {
	this->price = (price > 0) ? price : 0;
}

string Transport::toString() {
	return "transport:\nprice - " + to_string(price);
}
