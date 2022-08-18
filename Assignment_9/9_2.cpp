/*
CH-230-A
a9 p2.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>

int main(){

    //declare the variables
    int n;
    double x;
    std::string s;

    //read the variables
    std::cin>>n>>x>>s;

    //for loop that iterates n times and prints x and s separated
    //by ":" n times
    for(int i = 1; i <=n; i++)
        std::cout<<s<<":"<<x<<'\n';

    return 0;
}