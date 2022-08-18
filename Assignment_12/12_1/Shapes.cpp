/*
CH-230-A
a12 p1.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

//copy constructor for Shape
Shape::Shape(const Shape& src) { 
    name = src.name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//copy constructor for Centered Shape
CenteredShape::CenteredShape(const CenteredShape& src) : Shape(src){
    x = src.x;
    y = src.y;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

//copy constructor for regular polygon
RegularPolygon::RegularPolygon(const RegularPolygon& src) : CenteredShape(src) {
    EdgesNumber = src.EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//defining copy constructor
Hexagon::Hexagon(const Hexagon& src) : RegularPolygon(src){
    side = src.side;
    color = src.color;
}

//defining parameter constructor
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, double sv, 
  const string& c) : RegularPolygon(n, nx, ny, nl){
    side = sv;
    color = c;
}

//destructor
Hexagon::~Hexagon(){};

//setterf for side
void Hexagon::setSide(double s){
    side = s;
}         

//setter for color
void Hexagon::setColor(std::string c){
    color = c;
}

//getter for side
double Hexagon::getSide() const {
    return side;
}              

//getter for color
std::string Hexagon::getColor() const {
    return color;
}  

//perimeter method
double Hexagon::perimeter() {
    return 6*side;
}

//area method
double Hexagon::area() {
    return 3*sqrt(3)*side*side/2;
}