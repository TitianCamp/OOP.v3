#include "Visitor.h"
#include <iostream>

using namespace::std;

Visitor::Visitor(string n, string sn, int a, int m) :Person(n, sn, a), money(m), 
	haveTicket(false), placeInHall(0), buyInOffice(a % 2) {};

Visitor::Visitor() :Person(), money(500), haveTicket(false), placeInHall(0), buyInOffice(0) {};

int Visitor::getMoney() { return money; };

bool Visitor::getHaveTicket() { return haveTicket; };

int Visitor::getPlaceInHall() { return placeInHall; };

bool Visitor::getBuyInOffice() { return buyInOffice; };

void Visitor::changeHaveTicket() { haveTicket ? this->haveTicket = false : this->haveTicket = true; };

void Visitor::changeMoney(int prise) { money -= prise; };

