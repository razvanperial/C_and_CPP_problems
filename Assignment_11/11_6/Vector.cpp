/*
CH-230-A
a11 p6.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"
#include<math.h>//for using sqrt

//CONSTRCTORS

//default constructor
Vector::Vector(){
    size = 1;
    ptr = new double[1];
    ptr[0] = 0;
}

//parameter constructor
Vector::Vector(int s, double arr[]){
    size = s;
    ptr = new double[size];
    for(int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

//copy constructor
Vector::Vector(const Vector& src){
    size = src.size;
    ptr = new double[src.size];
    for(int i = 0; i < size; i++)
        ptr[i] = src.ptr[i];
}

//destructor
Vector::~Vector(){
    delete [] ptr;//deallocate memory
}

//print method
void Vector::print() const{
    for(int i = 0; i < size; i++)
        std::cout<<ptr[i]<<" ";
    std::cout<<std::endl;
}

//settetr for size
void Vector::setSize(const int s) {
    size = s; 
}

//setter for the values of the vector
void Vector::setValues(const double a[]) {
    for(int i = 0; i < size; i++){
        ptr[i] = a[i];
    }
}

//getter for size
int Vector::getSize() const {
    return size;
}

//gettter for the elements
double Vector::getValues() const{
    return *ptr;
}

//norm method
double Vector::norm() {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += ptr[i] * ptr[i];
    }
    return sqrt(sum);
}

//add method
Vector Vector::add(const Vector v2) const {
    Vector v3 = v2;//make a copy of the second vector
    //add the values of the first vector into the copy
    for(int i = 0; i < size; i++)
        v3.ptr[i] += ptr[i];

    return v3;
}

//difference method
Vector Vector::diff(const Vector v2) const {
    Vector v3 = v2;//make a copy of the second vector
    //substract the values copied from v2 from v1 and store them back in v3
    for(int i = 0; i < size; i++)
        v3.ptr[i] = ptr[i] - v3.ptr[i];

    return v3;
}

//multiply method method
double Vector::prod(const Vector v2) const {
    double ans  = 0;
    for(int i = 0; i < size; i++)
        ans += ptr[i] * v2.ptr[i];

    return ans;
}


