#pragma once
#include <iostream>
#include "Person.h"

using namespace::std;

class Singer : private Person{
private:
	string bandName;
	string genre;
	int albumsReleased;
	bool isFamous;
public:
	Singer(string n, string sn, int a, string bn, string g, int ab, bool iF);
	Singer();

	using Person::getName;
	using Person::getSurname;
	using Person::getAge;

	string getBandName();
	string getGenre();
	int getAlbumsReleased();
	bool getIsFamous();

	~Singer();
};

