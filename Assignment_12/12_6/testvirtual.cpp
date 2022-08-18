#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
RELATIONSHIP BETWEEN CLASSES:

		AREA
		  |
		  |
	|-----------|
  Circle	Rectangle
	|			|
	|			|
   Ring		 Square	

Every class comes from the parent class Area, but they each have their own 
definition of the function calcArea and use variables from other classes as
well
*/
 
const int num_obj = 6;
int main() {
	Area *list[num_obj];			// (1) Here we create a list of 
									//objects of type area. All the 
									//other child objects will be able
									//to be stored is this list

	int index = 0;					// (2)variable that will be used to iterate 
									//through the list. It is initialized with 0.



	double sum_area = 0.0;			// (3) Will store the sum of all the areas.
									//It is also initialized with 0. The areas
									//calculated will be added here
	cout << "Creating Ring: ";

	Ring blue_ring("BLUE", 5, 2);	// (4) Now we begin to create objects for
									//all the classes that we defined. We also
									//print a specific message when creating each
									//instance.



	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	list[0] = &blue_ring;					// (5) Once the objects are created,
											// we add them to the list defined
											//at (1)

	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	while (index < num_obj) {		// (7) We go thrrough the list and use
									// the methods getColor and calcArea.
									//The first one is the same for all, but 
									//the area function differs for all. Also,
									//we add the result of calcArea to the sum
									//variable defined at (3)





		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8) use auxiliar variable to 
												//store the area of the specific
												//object
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9) Print the sum of all areas
	return 0;
}
