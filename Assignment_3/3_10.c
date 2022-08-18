/*
CH-230-A
a3 p10.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b);

void productbyref(float a, float b, float *p);

void modifybyref(float *a, float *b);

int main(){
    float a,b,p;

    //reading the first variable
    printf("a=");
    scanf("%f", &a);

    //reading the second variable
    printf("b=");
    scanf("%f", &b);

    //calling and printing the result of the first function
    printf("product of a and b with the first function = %f\n", product(a,b));

    //calling and printing the product calculated by the second function
    productbyref(a,b,&p);
    printf("product of a and b with the second function = %f\n", p);

    //showing the values of a and b before calling the third function
    printf("value of a before calling modifybyref = %f\n", a);
    printf("value of b before calling modifybyref = %f\n", b);

    //calling the third function
    modifybyref(&a, &b);

    //printing the values of a and b after calling the third function
    printf("value of a after calling modifybyref = %f\n", a);
    printf("value of b after calling modifybyref = %f\n", b);
    return 0;
}


//writing the first function
float product(float a, float b){
    return a*b;
}

//writing the second function
void productbyref(float a, float b, float *p){
    *p = a*b;
}

//writing the third function
void modifybyref(float *a, float *b){
    *a = *a + 3;
    *b = *b + 11;
}