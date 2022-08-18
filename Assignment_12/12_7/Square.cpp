#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) : Rectangle(n, a, a) {
    size = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return size*size;
}

double Square::calcPeri() const {
    std::cout<< "calculating the perimeter of Square...";
    return 4*size;
}