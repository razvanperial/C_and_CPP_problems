/*
CH-230-A
a2 p4.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    float a,b,h;
    scanf("%f%f%f", &a, &b, &h);
    printf("square area=%f\n", a*a);
    printf("rectangle area=%f\n", a*b);
    printf("triangle area=%f\n", a*h/2);
    printf("trapezoid area=%f\n", (a+b)/2*h);  

    return 0;
}