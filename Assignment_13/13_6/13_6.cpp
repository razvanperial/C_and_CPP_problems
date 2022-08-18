/*
CH-230-A
a13 a6.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <stdexcept>      // std::out_of_range
#include <vector>

int main() {
    // declare the vector and fill it with 20 values of 8
    std::vector<int> v(20,8);
    try{
        v.at(20) = 8;//try to acess the 21 element
    }
    catch(std::out_of_range& err){//catch out_of_range error thrown from try
        //print the error on the standard error strem using the what()
        //method inherited by the object err from exception class
        std::cerr << "Out of Range error: " << err.what() << std::endl;
    }
    return 0;
} 
