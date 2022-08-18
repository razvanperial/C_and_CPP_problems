/*
CH-230-A
a6 p7.[c]
Razvan Perial
rperial@jacobs-university.de
*/
#include <stdio.h>

void set3bits(unsigned char *c, int p1, int p2, int p3){
    //variable that keeps the position of the bit in the for loop
    int k = 7;
    for(int i = 1<<7; i > 0; i/=2){
        if(k == p1 || k == p2 || k == p3)
            *c|=i;//turn on the bit
        k--;
    }
} 
int main(){
    //declare the variables
    unsigned char c;
    int p1,p2,p3,i;

    //read the variables
    scanf("%c%d%d%d", &c, &p1, &p2, &p3);

    //Print the decimal representation
    printf("The decimal representation is: %d\n", c);

    //print the original binary representation
    printf("The binary representation is: ");
    for(i = 1<<7; i > 0; i /= 2){
        if((c & i) != 0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");

    //call the function that turns on the specified bits
    set3bits(&c,p1,p2,p3);

    //print the new binary representation
    printf("After setting the bits: ");
    for(i = 1<<7; i > 0; i /= 2){
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