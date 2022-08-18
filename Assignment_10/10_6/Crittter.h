/*
CH-230-A
a10 p6.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;

public: // business logic methods are public
	// setting constructors
	//(1)
	Critter();	
	//(2)
	Critter(std::string& newname);
	//(3)
	Critter(std::string& newname, int newhunger, 
	int newboredom, double newheight = 10);
	//(4)
	Critter(std::string& newname, int newhunger, 
	int newboredom, double newheight, double newthirst);

	//setting destructor
	~Critter();
	
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(int newheight);
	// getter methods
	std::string getName();
	double getHunger();
	int getBoredom();
	int getHeight();

	//additional methods
	double inttodouble(int x);
	int doubletoint(double x);

	// service method 
	void print();	
};