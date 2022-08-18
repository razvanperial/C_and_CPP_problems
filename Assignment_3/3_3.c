/*
CH-230-A
a3 p3.[c]
Razvan Perial
rperial@jacobs-university.de
*/
 
float convert(int cm){
    float km;//the float variable that is going to return the number of km
    km = cm/100000.0;
    return km;
}

#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);//reading the value of cm
    printf("Result of conversion: %f\n", convert(x));
    /*I called the function inside the printf statement
    that will return the number of km*/
    return 0;
}