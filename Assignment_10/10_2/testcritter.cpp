/*
CH-230-A
a10 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name, hobby;
	int hunger;
	float age;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	//read and set the age and hobby
	cout << "Age: ";
	cin >> age;
	c.setAge(age);
	getchar();
	cout << "Hobby: ";
	getline(cin,hobby);
	c.setHobby(hobby);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}