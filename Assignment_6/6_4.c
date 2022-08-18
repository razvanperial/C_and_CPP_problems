/*
CH-230-A
a6 p4.[c]
Razvan Perial
rperial@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//define the directive
#define INTERMEDIATE


//function for calculating the scalar product
int prod(int v1[], int v2[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans += v1[i]*v2[i];

    return ans;
}

int main(){
    //define the variables
    int n,i,aux;

    //read the dimension of the vectors
    scanf("%d", &n);

    //declare the vectors and allocate memory dynamically to them
    int *v1, *v2;
    v1 = (int*) malloc(sizeof(int)*n);
    if(v1 == NULL)
        exit(1);

    v2 = (int*) malloc(sizeof(int)*n);
    if(v2 == NULL)
        exit(1);

    //read the values of the vectors
    for(i = 0; i < n; i++)
        scanf("%d", &v1[i]);

    for(i = 0; i < n; i++)
        scanf("%d", &v2[i]);

    //checking if the directive is defined
    #ifdef INTERMEDIATE
        printf("The intermediate product values are:\n");
        for(i = 0; i < n; i++){
            aux = v1[i]*v2[i];
            printf("%d\n", aux);
        }
    #endif

    //print the scalar product calculated with the function
    printf("The scalar product is: %d\n", prod(v1,v2,n));

    //deallocate the memory used
    free(v1);
    free(v2);

    return 0;
}