/*
CH-230-A
a4 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main(){
    float l,u,p,i;//declaring variables
    scanf("%f%f%f", &l, &u, &p);//reading variables
    //making the for loop relative to the values read from the keyboard
    for(i = l; i <= u; i+=p){
        //printing the result using the value of pi from the math.h library
        printf("%f %f %f\n", i, i*i*M_PI, 2*i*M_PI);
    }

    return 0;
}