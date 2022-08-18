/*
CH-230-A
a11 p6.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

int main(){
    double a1[5] = {1,2,3,4,5}, a2[5] = {1,1,1,1,1};
    Vector v1;//first vector created with default constructor
    Vector v2(5,a1);//second vector created with perameters constructor
    Vector v3 = v2;//third vector created with copy constructor
    Vector v4(5,a2);//fourth vector created with perameters constructor

    //compute and print the norm of the second vector
    std::cout<<"The norm of the second vector is: ";
    std::cout<<v2.norm()<<std::endl;


    //compute and print the scal. product, sum and difference of the 
    //second and fourth vectors
    std::cout<<"The product of the two vectors is: "<<v2.prod(v4)<<std::endl;
    std::cout<<"The sum of the two vectors is: ";
    v2.add(v4).print();
    std::cout<<"The difference of the two vectors is: ";
    v3.diff(v4).print();



    return 0;
}