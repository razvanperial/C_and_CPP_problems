/*
CH-230-A
a9 p7.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>

using namespace std;

//function for swapping integers
//use extra variable aux for swapping
void swapping(int &a, int &b) {
    int aux;
    aux = a;
    a = b;
    b = aux;
}

//function for swapping floats
//use extra variable aux for swapping
void swapping(float &a, float &b) {
    float aux;
    aux = a;
    a = b;
    b = aux;
}

//function for swapping arrays of chars
//use extra variable aux for swapping
void swapping(const char *&str1, const char *&str2) {
    const char *aux;
    aux = str1;
    str1 = str2;
    str2 = aux;
}

int main(void) {
    //declare the variables and pointers
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    //print their value before calling the function
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    //calling the swapping functions
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    //print their value after calling the function
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}