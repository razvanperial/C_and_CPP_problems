/*
CH-230-A
a10 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <string> // defines standard C++ string class

//city class
class City{
private:  // private data members
	std::string cityName;
	int inhabitants;
	float area;
	std::string mayorName;

public: // public methods
	// setter methods
	void setCityName(std::string& newCityName);
	void setMayorName(std::string& newMayorName);
	void setInhabitants(int newInhabitants);
	void setArea(float newArea);

	// getter method
	int getInhabitants();
	float getArea();
	std::string getCityName();
	std::string getMayorName();
    
	// service method
	void print();
};