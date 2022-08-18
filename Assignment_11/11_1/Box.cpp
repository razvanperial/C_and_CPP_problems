/*
CH-230-A
a11 p1.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

//setters
void Box::setWidth(double wi)
{
    width = wi;
}
void Box::setHeight(double he)
{
    height = he;
}
void Box::setDepth(double de)
{
    depth = de;
}

//getters
double Box::getWidth()
{
    return width;
}
double Box::getHeight()
{
    return height;
}
double Box::getDepth()
{
    return depth;
}

//constructors
//default
Box::Box()
{
    std::cout << "Default contrusctor was called" << std::endl;
    width = 0;
    height = 0;
    depth = 0;
}
//specific values
Box::Box(double wi, double he, double de)
{
    std::cout << "Values contrusctor was called" << std::endl;
    width = wi;
    height = he;
    depth = de;
}
//copy constructor
Box::Box(const Box &src)
{
    std::cout << "Copy constructor was called" << std::endl;
    width = src.width;
    height = src.height;
    depth = src.depth;
}

//destructor
Box::~Box()
{
    std::cout << "Destructor was called" << std::endl;
}
