/*
CH-230-A
a9 p4.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <string>

//define the function that takes integeres as parameters
int my_count(int a, int b){
    return b-a;
}

//define the function that takes a character and a string as parameters
int my_count(char c, std::string s){
    long unsigned i;
    int cnt = 0;
    for(i = 0; i < s.length(); i++){
        if(s[i] == c)
            cnt++;
    }

    return cnt;
}

int main(){
    //call the function passing integers
    std::cout<<"Calling my_count(7,3) returns: "<<my_count(7,3)<<std::endl;

    //call the function passing a character and a string
    std::cout<<"Calling my_count(’i’,""this is a string"") returns: "
    <<my_count('i', "this is a string")<<std::endl;

    return 0;
}