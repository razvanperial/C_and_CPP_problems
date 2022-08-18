/*
CH-230-A
a13 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/
 
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Complex.h"
 
int main() {
    std::ifstream file1;//declare the first file
    std::ifstream file2;//declare the second file
    std::ofstream outfile;//declare the third file

    //declare the two complex number objects
    Complex n1;
    Complex n2;

    //open the files
    file1.open("in1.txt");
    file2.open("in2.txt");
    outfile.open("output.txt");

    //read the numbers from the two files using the overloaded >>
    file1 >> n1;
    file2 >> n2;

    //compute their sum and print it on the standard output 
    //and in the ouput file
    std::cout << "The sum of the numbers is: " << n1 + n2;
    outfile << "The sum of the numbers is: " << n1 + n2; 

    //compute their difference and print it on the standard output 
    //and in the ouput file
    std::cout << "The difference of the numbers is: " << n1 - n2;
    outfile << "The difference of the numbers is: " << n1 - n2; 

    //compute their product and print it on the standard output 
    //and in the ouput file
    std::cout << "The product of the numbers is: " << n1 * n2;
    outfile << "The product of the numbers is: " << n1 * n2; 

    //close the files
    file1.close();
    file2.close();
    outfile.close();
 
    return 0;
}