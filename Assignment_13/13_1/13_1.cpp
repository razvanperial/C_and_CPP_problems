/*
CH-230-A
a13 p1.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <fstream>

int main() {
    std::ifstream file1;//declare the first file
    std::ofstream file2;//declare the second file
    std::string n1,s;
    std::cin>>n1;       //read name of first file

    file1.open(n1);     //open the first line

    n1.insert(n1.find('.'), "_copy");   //insert _copy before the . character
                                        //since the names of the files are 
                                        //assumed as valid

    file2.open(n1);     //open the second file

    //read from the first file
    while(!file1.eof()) {
        getline(file1,s);
        file2 << s ;    //copy the content in the second file

        //add a newline character if it has not yet reached the end of file
        if(!file1.eof())
             file2 << std::endl;    
    }

    //close the files
    file1.close();
    file2.close();

    return 0;
}