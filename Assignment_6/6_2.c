/*
CH-230-A
a6 p2.[c]
Razvan Perial
rperial@jacobs-university.de
*/
#include <stdio.h>

#define binary(x,y) {y = x & 1;}

int main(){
    //define the char
    unsigned char c;
    unsigned int y;

    //read the char
    scanf("%c", &c);

    //print the decimal representation of the char
    printf("The decimal representation is: %d\n", c);

    //call the macro
    binary(c,y);

    //print the result
    printf("The least significant bit is: %d\n", y);
    return 0;
}