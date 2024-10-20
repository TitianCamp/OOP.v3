#pragma once
#include <iostream>
#include <vector>
#include "Ticket.h"
#include "Visitor.h"
#include "Person.h"

using namespace::std;

class Manager : protected Person {
public:
	
	Manager(string n, string sn, int a);
	Manager();
	using Person::getName;
	using Person::getSurname;
	using Person::getAge;

	vector<Ticket> createTickets(int volume);
	void writeInFile(vector<Visitor>& visitors);
	void sellTicket(Visitor& visitor, Ticket& ticket);

	~Manager();
};
