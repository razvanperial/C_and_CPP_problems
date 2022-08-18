/*
CH-230-A
a11 p1.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

int main(){
    int n,i;
    double w,d,h;
    std::cout<<"n = ";
    std::cin>>n;
    //allocate memory for the array of boxes
    Box *a = new Box[n*2];

    //read and initialize the values of the first n boxes
    for(i = 0; i < n; i++){
        std::cout<<"Values for box "<<i<<": ";
        std::cin>>w>>d>>h;
        a[i].setWidth(w);
        a[i].setHeight(h);
        a[i].setDepth(d);
    }

    //copy each box in the array from n to 2*n-1
    for(i=n;i<2*n;i++){
       a[i]=Box(a[i-n]);
    }

    //calculate the volume for each box and print it
    for(i = 0; i < 2*n; i++){
        std::cout<<"Volume for box "<<i<<": ";
        std::cout<<a[i].getDepth()*a[i].getHeight()*a[i].getWidth()<<std::endl;

    }

    //deallocate the memory
    delete [] a;

    return 0;
}