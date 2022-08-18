/*
CH-230-A
a10 p8.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"

//setter methods
void Complex::setReal(int re){
    real = re;
}
void Complex::setImag(int imag){
    imaginary = imag;
}

//getter methods
int Complex::getReal(){
    return real;
}
int Complex::getImag(){
    return imaginary;
}

//constructors

//default constructor
Complex::Complex() {
    std::cout<<"Default constructor was called"<<std::endl;
    real = 0;
    imaginary = 0;
}
//copy constructor
Complex::Complex(const Complex& src) {
    std::cout<<"Copy constructor was called"<<std::endl;
	real = src.real;
    imaginary = src.imaginary;
}
//specific values constructor
Complex::Complex(int re, int im) {
	real = re;
    imaginary = im;
}

//empty destructor
Complex::~Complex(){
    std::cout<<"Destructor was called"<<std::endl;
}

//conjugation method
Complex Complex::conj() {
    Complex temp;
    temp.real = real;
    temp.imaginary = -imaginary;
    return temp;
}

//adding method
Complex Complex::add(Complex z) {
    Complex temp;
    temp.real = real + z.real;
    temp.imaginary = imaginary + z.imaginary;
    return temp;
}

//substracting method
Complex Complex::sub(Complex z) {
    Complex temp;
    temp.real = real - z.real;
    temp.imaginary = imaginary - z.imaginary;
    return temp;
}

//multiplication method
Complex Complex::mult(Complex z) {
    Complex temp;
    temp.real = (z.real*real) - (z.imaginary*imaginary);
    temp.imaginary = (z.imaginary*real) + (z.real*imaginary);
    return temp;
}

//print method
void Complex::print(){
    if(imaginary < 0)
        std::cout<<real<<" - "<<-imaginary<<"i"<<std::endl;
    else
        std::cout<<real<<" + "<<imaginary<<"i"<<std::endl;
}
