/*
CH-230-A
a6 p3.[c]
Razvan Perial
rperial@jacobs-university.de
*/
#include <stdio.h>

//defining the macros
#define MAX(a,b,c) ((a > b && a > c) ? a : (b > c) ? b : c)
#define MIN(a,b,c) ((a < b && a < c) ? a : (b < c) ? b : c)
#define MID_RANGE(a,b,c) (MAX(a,b,c) + MIN(a,b,c))/2.0

int main(){
    //declaring the variables
    int a,b,c;

    //reading the variables
    scanf("%d%d%d", &a, &b, &c);

    //calling the macro and printing the result
    printf("The mid-range is: %.6f\n", MID_RANGE(a,b,c));

    return 0;
}