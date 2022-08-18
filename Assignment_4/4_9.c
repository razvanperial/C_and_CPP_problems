/*
CH-230-A
a4 p9.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n);

int main(){
    int *dyn_array, n, i;
    scanf("%d", &n);//reading the dimension of the array

    //allocating memory dynamically 
    dyn_array = (int*) malloc(sizeof(int)* n);

    //checking if malloc returned a valid pointer
    if(dyn_array == NULL)
        exit(1);

    //reading the elements of the array
    for(i = 1; i <= n; i++)
        scanf("%d", &dyn_array[i]);
    printf("The product is: %d\n", prodminmax(dyn_array, n));

    //deallocating the memory used
    free(dyn_array);

    return 0;
}

/*writing the function for the product,
using two variables for the largest and smallest values*/

int prodminmax(int arr[], int n){
    int maxi = arr[1], mini = arr[1];
    for(int i = 1; i <= n; i++){
        if(arr[i] > maxi)
            maxi = arr[i];
        if(arr[i] < mini)
            mini = arr[i];
    }
    return maxi * mini;
}