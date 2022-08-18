/*
CH-230-A
a9 p3.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>

//define the function
int abs(float x){
    //if x is smaller than 0 return minus x
    if(x < 0)
        return -x;

    //else return x;
    return x;
}

int main(){
    //declare x
    float x;

    //read x
    std::cin>>x;

    //write its absolute value using the function written followed
    //by a newline character
    std::cout<<abs(x)<<'\n';
    return 0;
}