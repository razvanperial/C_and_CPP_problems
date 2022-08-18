/*
CH-230-A
a11 p5.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

int main(int argc, char** argv) {

  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle rct("RECTANGLE", 2, 2, 3, 4); //declaration of rectangle type
  Circle c("first circle", 3, 4, 7);      //declaration of circle type
  Square s("SQUARE", 1, 1, 3);            //declaration of circle type    

  r.printName();
  c.printName();

  //compute and print the area and perimeter of the rectangle, circle and square
  std::cout<<"Perimeter of square: "<<s.perimeter()<<std::endl;
  std::cout<<"Area of square: "<<s.area()<<std::endl;

  std::cout<<"Perimeter of rectangle: "<<rct.perimeter()<<std::endl;
  std::cout<<"Area of rectangle: "<<rct.area()<<std::endl;

  std::cout<<"Perimeter of circle: "<<c.perimeter()<<std::endl;
  std::cout<<"Area of circle: "<<c.area()<<std::endl;

  return 0;
}