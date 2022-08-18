/*
CH-230-A
a6 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/
#include <stdio.h>

int main(){
    //declare the char
    unsigned char c;

    //read the char
    scanf("%c", &c);
    //print the decimal representation of the char
    printf("The decimal representation is: %d\n", c);

    /*print the backwards binary representation by shiftin the bits of 
    my representation to the right and printing the least significant
    bit each loop iteration*/
    printf("The backwards binary representation is: ");
    while(c){
        printf("%d", c & 1);
        c = c >> 1;
    }
    printf("\n");
    return 0;
}