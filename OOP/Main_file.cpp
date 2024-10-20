#include <iostream>
#include <vector>
#include "Visitor.h"
#include "Ticket.h"
#include "Manager.h"
#include "Singer.h"
#define	MEMBERS 5
#define TICKETS_NUMBER 10

using namespace::std;

void main() {
	string names[MEMBERS] = {"Tom", "Marc", "John", "Ben", "Marko"};
	string surnames[MEMBERS] = { "Roof", "Folk", "Tren", "Falko", "Don" };
	int ages[MEMBERS] = { 23, 36, 29, 48, 15 };
	int money[MEMBERS] = { 200, 400, 320, 800, 80 };
	if (names[MEMBERS - 1] == "" || surnames[MEMBERS - 1] == "" || !ages[MEMBERS - 1] || !money[MEMBERS - 1]) { return; }

	vector<Visitor> visitors;

	for (int i = 0; i < MEMBERS; i++) {
		visitors.push_back(Visitor(names[i], surnames[i], ages[i], money[i]));
	};
	for (auto& visitor : visitors) {
		cout << visitor.getName() << " " << visitor.getSurname() << " " << visitor.getAge() << " " << visitor.getMoney() << "$ " << endl;
	};
	cout << endl;

	Manager manager("Victor", "Bakh", 25);
	cout << manager.getName() << " " << manager.getSurname() << " " << manager.getAge() << endl;

	vector<Ticket> tickets = manager.createTickets(TICKETS_NUMBER);

	for (auto& ticket : tickets) {
		cout << ticket.getPlase() << " " << ticket.getDegree() << " " << ticket.getPrise() << "$ " << endl;
	}
	
	while (1) {
		cout << "\nDoes somebody want to buy a ticket? ";
		string ask, Yes = "Yes", yes = "yes", answer = "God";
		cin >> ask;
		if (ask == answer) {
			cout << "Enter information for a new visitor:" << endl;
			string name, surname;
			int age, money;
			cin >> name >> surname >> age >> money;
			visitors.push_back(Visitor(name, surname, age, money));
			cout << "Success!" << endl;
			continue;
		}
		else if (ask != yes && ask != Yes) { break; };

		cout << endl;
		int numberOfTicket, numberOfVisitor;
		cout << "Who want to buy a ticket? Select number: ";
		cin >> numberOfVisitor;
		if (numberOfVisitor > visitors.size()) { cout << "We don't have such visitor."; break; }
		cout << visitors[numberOfVisitor - 1].getName() << " want to buy a ticket. Select number: ";
		cin >> numberOfTicket;
		if (numberOfTicket > tickets.size()) { cout << "We don't have that seat."; break; }
		manager.sellTicket(visitors[numberOfVisitor - 1], tickets[numberOfTicket - 1]);
		cout << endl;

		for (auto& ticket : tickets) {
			cout << ticket.getPlase() << " " << ticket.getOwner() << " " << ticket.getTime() << endl;
		};
		cout << endl;
		for (auto& visitor : visitors) {
			cout << visitor.getName() << " " << (visitor.getHaveTicket() ? "Have a ticket" : "Don't have a ticket") << " Place: " << visitor.getPlaceInHall() << " " << visitor.getMoney() << "$" << endl;
		};
	}

	manager.writeInFile(visitors);

	Singer singer("Brad", "Delson", 46, "Linkin Park", "rock", 8, 1);
	cout << "Today`s singer:\n" << singer.getName() << " " << singer.getSurname() 
		<< " " << singer.getAge() << " " << singer.getBandName() << " " 
		<< singer.getGenre() << " Albums released: " << singer.getAlbumsReleased() 
		<< " " << (singer.getIsFamous() ? "Is famous!" : "Isn't famous.") << endl;
}