#pragma once
#include <iostream>

using namespace::std;

class Person {
protected:
	string name;
	string surname;
	int age;
public:
	Person(string n, string sn, int a);
	Person();

	string getName();
	string getSurname();
	int getAge();

	~Person();
};

