/*
CH-230-A
a6 p6.[c]
Razvan Perial
rperial@jacobs-university.de
*/
#include <stdio.h>

int main(){
    //declare the character
    unsigned char c;

    //read the character
    scanf("%c", &c);

    //print the decimal representation of the char
    printf("The decimal representation is: %d\n", c);

    //print the binary representation of the char

    /*use the mask function and use the bitwise AND operator to 
    print the bits of c from left to right*/
    printf("The binary representation is: ");
    for(int i = 1<<7; i > 0; i /= 2){
        if((c & i) != 0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
    return 0;
}