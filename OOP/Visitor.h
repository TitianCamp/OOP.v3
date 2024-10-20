#pragma once
#include <iostream>
#include "Person.h"

using namespace::std;

class Visitor : protected Person{
private:
	int money;	
	bool haveTicket;
public:
	int placeInHall;
	bool buyInOffice;

	Visitor(string n, string sn, int a, int m);
	Visitor();

	using Person::getName;
	using Person::getSurname;
	using Person::getAge;

	int getMoney();
	bool getHaveTicket();
	int getPlaceInHall();
	bool getBuyInOffice();

	void changeHaveTicket();
	void changeMoney(int prise);

	~Visitor();
};