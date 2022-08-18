/*
CH-230-A
a5 p4.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//declaring the prototype for the function
void divby5(float arr[], int size);

int main(){
    float *a;
    int n,i;

    //reading the number of elements of the array
    scanf("%d", &n);

    //allocate memory for the specific number of elements
    a = (float*) malloc(sizeof(float)* n);

    //checking if malloc returned a valid pointer
    if(a == NULL)
        exit(1);

    //reading the elements of the array
    for(i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }

    //printing the array before calling the function
    printf("Before:\n");
    for(i = 0; i < n; i++)
        printf("%f ", a[i]);

    //newline character
    printf("\n");

    //calling the function
    divby5(a,n);

    //printing the array after calling the function
    printf("After:\n");
    for(i = 0; i < n; i++)
        printf("%f ", a[i]);

    //deallocate the memory used
    free(a);

    return 0;
}

//writing the function
void divby5(float arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] /= 5;
    }
}