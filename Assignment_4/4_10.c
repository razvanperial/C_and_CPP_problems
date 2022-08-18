/*
CH-230-A
a4 p10.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, 
float *pwr, float *invb); 

int main(){
    float a, b, prod, div, pwr, invb;//defining the variables

    //reading two values a and b for an example 
    scanf("%f%f", &a, &b);

    //calling the function
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    printf("prod = %f\ndiv = %f\npwr = %f\ninvb = %f\n", prod, div, pwr, invb);
    return 0;
}

//defining the function and passing the wanted values by reference
void proddivpowinv(float a, float b, float *prod, float *div, 
float *pwr, float *invb){
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a,b);
    *invb = 1/b;
}