/*
CH-230-A
a10 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHobby(string& newhobby) {
	hobby = newhobby;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setAge(float newage) {
	age = newage;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << 
	". I am " << age << " years old. "<<"My hobby is "<<hobby<<"."<<endl;
}

int Critter::getHunger() {
	return hunger;
}

float Critter::getAge() {
	return age;
}

string Critter::getHobby() {
	return hobby;
}