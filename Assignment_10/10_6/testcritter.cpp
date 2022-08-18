/*
CH-230-A
a10 p6.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Crittter.h"

int main(int argc, char** argv)
{
	//define the names of the Critters
	std::string n2 = "John", n3 = "Richard", n4 = "Emaunel", 
				n5 = "Samantha";

	//define and print first instance of Critter
	std::cout<<"Critter 1:"<<std::endl;
	Critter c1;
	c1.print();

	//define and print second instance of Critter
	std::cout<<"Critter 2:"<<std::endl;
	Critter c2(n2);
	c2.print();

	//define and print third instance of Critter
	std::cout<<"Critter 3:"<<std::endl;
	Critter c3(n3,2,10,9);
	c3.print();

	//define and print fourth instance of Critter
	std::cout<<"Critter 4:"<<std::endl;
	Critter c4(n4,2,9); 
	c4.print();
	
	//define and print fifth instance of Critter
	std::cout<<"Critter 5:"<<std::endl;
	Critter c5(n5,2,10,9,7.5); 
	c5.print();
    return 0;
}