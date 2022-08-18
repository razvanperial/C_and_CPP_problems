/*
CH-230-A
a5 p8.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void read(int **a, int n, int m);
void write(int **a, int n, int m);
void prod(int **a1, int **a2, int **a3, int n, int m, int p);

int main(){
    int n,m,p,i;
    int **a1, **a2, **a3;

    scanf("%d%d%d", &n, &m, &p);

    //allocating memory for the rows
    a1 = (int**) malloc(sizeof(int) * n);
    a2 = (int**) malloc(sizeof(int) * m);
    a3 = (int**) malloc(sizeof(int) * p);
    if(a1 == NULL)
        exit(1);
    if(a2 == NULL)
        exit(1);
    if(a3 == NULL)
        exit(1);
    
    //allocating memory for the columns
    for(i = 0; i < n; i++){
        a1[i] = (int*) malloc(sizeof(int) * m);
        if(a1[i] == NULL)
            exit(1);
    }

    for(i = 0; i < m; i++){
        a2[i] = (int*) malloc(sizeof(int) * p);
        if(a2[i] == NULL)
            exit(1);
    }

    for(i = 0; i < n; i++){
        a3[i] = (int*) malloc(sizeof(int) * p);
        if(a3[i] == NULL)
            exit(1);
    }

    //read the elements of the matrixes
    read(a1,n,m);
    read(a2,m,p);

    //write the elements of the matrixes
    printf("Matrix A:\n");
    write(a1,n,m);
    printf("Matrix B:\n");
    write(a2,m,p);

    //calculate the product and write it on the screen
    prod(a1,a2,a3,n,m,p);
    printf("The multiplication result AxB:\n");
    write(a3,n,p);

    //deallocating the memory
    for(int i = 0; i < n; i++)
        free(a1[i]);
    free(a1);
    
    for(int i = 0; i < m; i++)
        free(a2[i]);
    free(a2);

    for(int i = 0; i < n; i++)
        free(a3[i]);
    free(a3);
    return 0;
}

//defining the functions

//reading the matrixes
void read(int **a, int n, int m){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
}

//writing the elements of the matrixes
void write(int **a, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

//calculate the product of the matrixes
void prod(int **a1, int **a2, int **a3, int n, int m, int p){
    int i,j,l;
    for(l = 0; l < n; l++)
        for(i = 0; i < p; i++){
            for(j = 0; j < m; j++){
                 a3[l][i] += a1[l][j]*a2[j][i];
            }
        }
}