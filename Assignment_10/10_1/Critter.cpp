/*
CH-230-A
a10 p1.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//writing the constructors

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}