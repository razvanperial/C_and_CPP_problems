#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const char *col[] = {"RED", "BLACK", "VIOLET", "BLUE"};

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
 
int main()
{
	Area *list[25];



	for(int i=0; i<25;i++)
	{
		int type = rand() % 4; //Circle -> 0, Rectangle ->1, Ring ->2, Square ->3
		int color = rand() % 4; //color index

		double a = rand() % 100;	//random size
		double b = rand() % 100;

		while(a<5)					//check if bigger than 5
			a+=rand() % 5;
		while(b<5)
			b+=rand() % 5;

		switch (type)	//create object on cases
		{
		case 0:
			{
				Circle circle(col[color], a);
				list[i] = &circle;
				cout<<"\nThe area and perimeter of the circle are: ";
				cout<<list[i]->calcArea()<<" "<<list[i]->calcPeri();
				cout<<endl;
				break;
			}
		case 1:
			{
				Rectangle rectangle(col[color], a, b);
				list[i] = &rectangle;
				cout<<"\nThe area and perimeter of the rectangle are: ";
				cout<<list[i]->calcArea()<<" "<<list[i]->calcPeri();
				cout<<endl;
				break;
			}
		case 2:
			{
				Ring ring(col[color], a, b);
				list[i] = &ring;
				cout<<"\nThe area and perimeter of the ring are: ";
				cout<<list[i]->calcArea()<<" "<<list[i]->calcPeri();
				cout<<endl;
				break;
			}
		case 3:
			{
				Square square(col[color], a);
				list[i] = &square;
				cout<<"\nThe area and perimeter of the square are: ";
				cout<<list[i]->calcArea()<<" "<<list[i]->calcPeri();
				cout<<endl;
				break;
			}
		default:
			break;
		}
	}
	return 0;
}