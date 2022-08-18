/*
CH-230-A
a13 p2.[cpp]
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

//overloaded operator <<
std::ostream& operator<<(std::ostream& os, const Complex& f)
{
    if(f.imaginary < 0)
        os << f.real << " - "<<-f.imaginary << "i" << std::endl;
    else
        os << f.real << " + "<<f.imaginary << "i" << std::endl;
    return os;
}
 
//overloaded operator >>
std::istream& operator>>(std::istream& is, Complex& f)
{
    is >> f.real >> f.imaginary;
    return is;
}

//overloading the = operator
Complex& Complex::operator=(const Complex& src) {
    this->real = src.real;
    this->imaginary = src.imaginary;    
    return *this; 
}

//overloading the + operator
Complex operator+(Complex& f1, Complex& f2) {
    Complex aux;
    aux.real = f1.real + f2.real;
    aux.imaginary = f1.imaginary + f2.imaginary;  
    return aux; 
}

//overloading the - operator
Complex operator-(Complex& f1, Complex& f2) {
    Complex aux;
    aux.real = f1.real - f2.real;
    aux.imaginary = f1.imaginary - f2.imaginary;  
    return aux;
}

//overloading the * operator
//use the general formula of multiplication of two complex numbers
Complex operator*(Complex& f1, Complex& f2) {
    Complex aux;
    aux.real = (f1.real * f2.real) - (f1.imaginary * f2.imaginary);
    aux.imaginary = (f1.real * f2.imaginary) + (f1.imaginary * f2.real);  
    return aux;
}

//print method
void Complex::print(){
    if(imaginary < 0)
        std::cout<<real<<" - "<<-imaginary<<"i"<<std::endl;
    else
        std::cout<<real<<" + "<<imaginary<<"i"<<std::endl;
}