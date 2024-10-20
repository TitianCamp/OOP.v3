#include "Person.h"
#include <iostream>

using namespace::std;

Person::Person(string n, string sn, int a) :name(n), surname(sn), age(a) {};

Person::Person() : name("Mike"), surname("Leshchuk"), age(18) {};

string Person::getName() { return name; };

string Person::getSurname() { return surname; };

int Person::getAge() { return age; };

