/*
CH-230-A
a5 p2.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

//declaring the prototype for the function
void divby5(float arr[], int size);

int main(){
    //declare the array and assigning values to it
    float a[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int i;

    //printing the array before calling the function
    printf("Before:\n");
    for(i = 0; i < 6; i++)
        printf("%.3f ", a[i]);

    //newline character
    printf("\n");

    //calling the function
    divby5(a,6);

    //printing the array after calling the function
    printf("After:\n");
    for(i = 0; i < 6; i++)
        printf("%.3f ", a[i]);

    //newline at the end of file
    printf("\n");

    return 0;
}

//writing the function
void divby5(float arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] /= 5;
    }
}