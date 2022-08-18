/*
CH-230-A
a6 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/
#include <stdio.h>

//define the macro
#define SWAP(x,y,type){type t = x; x = y; y = t;}

int main(){

    //declare the variables
    int x,y;
    double a,b;

    //read the variables
    scanf("%d%d", &x, &y);
    scanf("%lf%lf", &a, &b);

    //call the macro
    SWAP(x, y, int);
    SWAP(a,b,double);

    //print the result
    printf("After swapping:\n%d\n%d\n%.6lf\n%.6lf\n",x,y,a,b);
    return 0;
}