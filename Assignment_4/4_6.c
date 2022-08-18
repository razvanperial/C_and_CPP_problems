/*
CH-230-A
a4 p6.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void two_greatest(int arr[], int n);

int main(){
    int *dyn_arr, n, i;
    scanf("%d", &n);//reading the dimension of the array

    //allocating memory dynamically 
    dyn_arr = (int*) malloc(sizeof(int)* n);

    //checking if malloc returned a valid pointer
    if(dyn_arr == NULL)
        exit(1);

    //reading the elements of the array
    for(i = 1; i <= n; i++){
        scanf("%d", &dyn_arr[i]);
    }

    //call the function
    two_greatest(dyn_arr, n);

    //deallocating the memory used
    free(dyn_arr);

}

//defining the function
/*I determined the largest two numbers by using two different 
variables and changing theor value while I check every element of the array*/
void two_greatest(int arr[], int n){
    //initializing max1 and max2 with the smallest value an integer can have
    int max1 = -2147483648, max2 = -2147483648;
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
            max2 = arr[i];
    }
    printf("Largest two numbers are: %d and %d\n", max1, max2);
}