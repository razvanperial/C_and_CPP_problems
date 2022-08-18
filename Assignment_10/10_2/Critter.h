/*
CH-230-A
a10 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	float age;
	std::string hobby;

public: // business logic methods are public
	// setter methods
	void setHobby(std::string& newhobby);
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setAge(float newage);
	// getter method
	int getHunger();
	float getAge();
	std::string getHobby();
	// service method
	void print();
};