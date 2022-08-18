/*
CH-230-A
a10 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

//writing the setters
void Critter::setName(std::string& newname){
	name = newname;
}
void Critter::setHunger(int newhunger){
	hunger = newhunger;
}
void Critter::setBoredom(int newboredom){
	boredom = newboredom;
}
void Critter::setHeight(int newheight){
	height = newheight;
}

//writing the getters
std::string Critter::getName(){
	return name;
}
int Critter::getHunger(){
	return hunger;
}
int Critter::getBoredom(){
	return boredom;
}
int Critter::getHeight(){
	return height;
}

//define the constructors

Critter::Critter(){
	std::cout<<"Constructor 1"<<std::endl;
	name = "default_critter";
	height = 5;
	boredom = hunger = 0;
}

Critter::Critter(std::string& newname){
	std::cout<<"Constructor 2"<<std::endl;
	name = newname;
	height = 5;
	boredom = hunger = 0;
}

Critter::Critter(std::string& newname, int newhunger, 
	int newboredom, double newheight) {
	std::cout<<"Constructor 3"<<std::endl;
		name = newname;
		hunger = newhunger;
		boredom = newboredom;
		height = newheight;
}

Critter::~Critter(){
	std::cout<<"Using destructor"<<std::endl;
}
void Critter::print() {
	std::cout << "I am " << name << ". My hunger level is " << hunger 
	<< ". My boredom is " << boredom <<". My height is "<<height<<"."<<
	std::endl;
}