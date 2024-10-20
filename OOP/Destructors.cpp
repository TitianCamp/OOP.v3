#include <iostream>
#include "Visitor.h"
#include "Manager.h"
#include "Singer.h"
#include "Person.h"

using namespace::std;

//Manager::~Manager() { cout << "Manager was fired out!" << endl; };
//
//Visitor::~Visitor() { cout << name << " doesn't want to go to the concert" << endl; };
//
//Singer::~Singer() { cout << "\nSee you on the next concert!" << endl; };
//
//Person::~Person() { cout << "Person sleeps!" << endl; };

Manager::~Manager() {};

Visitor::~Visitor() {};

Singer::~Singer() {};

Person::~Person() {};