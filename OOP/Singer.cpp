#include "Singer.h"
#include "Person.h"
#include <iostream>
#include <fstream>

using namespace::std;

Singer::Singer(string n, string sn, int a, string bn, string g, int ar, bool iF) :
	Person(n, sn, a), bandName(bn), genre(g), albumsReleased(ar), isFamous(iF) {};

Singer::Singer() :Person(), bandName("None"), genre("None"), albumsReleased(0), isFamous(0) {};

string Singer::getBandName() { return bandName; };

string Singer::getGenre() { return genre; };

int Singer::getAlbumsReleased() { return albumsReleased; };

bool Singer::getIsFamous() { return isFamous; };

