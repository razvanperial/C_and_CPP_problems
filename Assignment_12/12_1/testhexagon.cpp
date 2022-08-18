/*
CH-230-A
a12 p1.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

int main() {
    std::string c1 = "blue", c2 = "green", n1 = "hex1", n2 = "hex2";
    Hexagon h1 (n1, 1, 1, 6, 9,n1);
    Hexagon h2(n2, 1, 1, 6, 15, n2);
    Hexagon h3 = h2;
    std::cout<<"Perimeter of h1: "<<h1.perimeter()<<std::endl;
    std::cout<<"Area of h1: "<<h1.area()<<std::endl;
    std::cout<<"Perimeter of h2: "<<h2.perimeter()<<std::endl;
    std::cout<<"Area of h2: "<<h2.area()<<std::endl;
    std::cout<<"Perimeter of h3: "<<h3.perimeter()<<std::endl;
    std::cout<<"Area of h3: "<<h3.area()<<std::endl;

}
