/*
CH-230-A
a11 p5.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <math.h>

using namespace std; 

//DEFAULT CONSTRUCTORS

//for Shape
Shape::Shape(){
	name = "Shape 1";
}

//for Centered Shape
CenteredShape::CenteredShape() : Shape(){
	x = 0;
	y = 0;
}

//for Regular Polygon
RegularPolygon::RegularPolygon() : CenteredShape(){
	EdgesNumber = 4;
}

//for Circle
Circle::Circle() : CenteredShape(){
	Radius = 1;
}

//for Rectangle
Rectangle::Rectangle() : RegularPolygon(){
	width = 1;
	height = 2;
}

//for Square
Square::Square() : Rectangle(){
	side = 1;
	setWidth(side);
	setHeight(side);
}


//VALUES CONSTRUCTORS

//for Shape
Shape::Shape(const string& n) : name(n) {}

//for Centered Shape
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//for Regular Polygon
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

//for Circle
Circle::Circle(const string& n, double nx, double ny, double r) : 
  	CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//for Rectangle
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, 
					double nheight) : RegularPolygon(n, nx, ny, 4){
	width = nwidth;
	height = nheight;
}

//for Square
Square::Square(const string& n, double nx, double ny, double nside) : Rectangle(
				n, nx, ny, nside, nside) {
	side = nside;
}

//COPY CONSTRUCTORS

//for Shape
Shape::Shape(const Shape& src) {
    name = src.name;
}

//for Centered Shape
CenteredShape::CenteredShape(const CenteredShape& src) : Shape(src){
	x = src.x;
	y = src.y;
}

//for Regular Polygon
RegularPolygon::RegularPolygon(const RegularPolygon& src) : CenteredShape(src){
	EdgesNumber = src.EdgesNumber;
}

//for Circle
Circle::Circle(const Circle& src) : CenteredShape(src){
	Radius = src.Radius;
}

//for Rectangle
Rectangle::Rectangle(const Rectangle& src) : RegularPolygon(src){
	width = src.width;
}

//for Square
Square::Square(const Square& src) : Rectangle(src){
	side = src.side;
}


//SETTERS 

//for Shape
void Shape::setName(const std::string n){
	name = n;
}

//for Centered Shape
void CenteredShape::setX(const double nx){
	x = nx;
}
void CenteredShape::setY(const double ny){
	y = ny;
}
 
//for Regular Polygon
void RegularPolygon::setEdges(const int en) {
	EdgesNumber = en;
}

//for Circle
void Circle::setRadius(const double nr) {
	Radius = nr;
}

//for Rectangle
void Rectangle::setHeight(const double h) {
	height = h;
} 
void Rectangle::setWidth(const double w) {
	width = w;
}

//for Square
void Square::setSide(const double s) {
	side = s;
}

//GETTERS

//for Shape
std::string Shape::getName() const{
	return name;
}

//for Centered Shape
double CenteredShape::getX() const{
	return x;
}
double CenteredShape::getY() const{
	return y;
}
 
//for Regular Polygon
int RegularPolygon::getEdges() const {
	return EdgesNumber;
}

//for Circle
double Circle::getRadius() const {
	return Radius;
}

//for Rectangle
double Rectangle::getHeight() const {
	return height;
} 
double Rectangle::getWidth() const {
	return width;
}

//for Square
double Square::getSide() const {
	return side;
}

//METHODS


//print method
void Shape::printName() const {
	cout << name << endl;
}

//perimeter for rectangle and square (since for a square the width
// and height are similar, the formuls is still correct)
double Rectangle::perimeter(){
	return 2 * width + 2 * height;
}

//perimeter fof Circle
double Circle::perimeter(){
	return 2 * M_PI * Radius;
}

//area for rectangle adn square (same logic as the perimeter,
//the formula works for both)
double Rectangle::area(){
	return width * height;
}

//area for circle
double Circle::area(){
	return M_PI * Radius * Radius;
}