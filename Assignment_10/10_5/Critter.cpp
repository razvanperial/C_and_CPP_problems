/*
CH-230-A
a10 p5.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Crittter.h"

//writing the auxiliar methods

double Critter::inttodouble(int x){
	return x/10.0;
}

int Critter::doubletoint(double x){
	return x*10;
}

//writing the setters
void Critter::setName(std::string& newname){
	name = newname;
}
void Critter::setHunger(int newhunger){
	//use the aux method to switch from int to double
	hunger = inttodouble(newhunger);
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
double Critter::getHunger(){
	return doubletoint(hunger);
}
int Critter::getBoredom(){
	return boredom;
}
int Critter::getHeight(){
	return height;
}

Critter::Critter(){
	std::cout<<"Constructor 1"<<std::endl;
	name = "default_critter";
	height = 5;
	boredom = 0;
	hunger = 0.0;
}

Critter::Critter(std::string& newname){
	std::cout<<"Constructor 2"<<std::endl;
	name = newname;
	height = 5;
	boredom = 0;
	hunger = 0.0;
}

Critter::Critter(std::string& newname, int newhunger, 
	int newboredom, double newheight) {
		std::cout<<"Constructor 3"<<std::endl;
		name = newname;
		hunger = inttodouble(newhunger);
		boredom = newboredom;
		height = newheight;
}

Critter::~Critter(){
	std::cout<<"Using destructor"<<std::endl;
}
void Critter::print() {
	//use the method to convert the value of hunger to an int
	std::cout << "I am " << name << ". My hunger level is " << 
	doubletoint(hunger) << ". My boredom is " << boredom <<
	". My height is "<<height<<"."<<std::endl;
}