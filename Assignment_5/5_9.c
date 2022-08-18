/*
CH-230-A
a5 p9.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//declaring the prototypes
void read(int ***a, int x, int y, int z);
void sections(int ***a, int x, int y, int z);

int main(){
    int x,y,z,***a,i,j;
    scanf("%d%d%d", &x, &y, &z);//reading the parameters

    //allocating memory for the rows
    a = (int***) malloc(sizeof(int) * x);
    if(a == NULL)
        exit(1);

    for(i = 0; i < x; i++){
        //allocating memory for the columns
        a[i] = (int**) malloc(sizeof(int) * y);
        if(a[i] == NULL)
            exit(1);
        for(j = 0; j < y; j++){
            //allocating memory for the depth
            a[i][j] = (int*) malloc(sizeof(int) * z);
            if(a[i][j] == NULL)
                exit(1);
        }
    }

    //read the elements
    read(a,x,y,z);

    //printing the sections
    sections(a,x,y,z);

    //deallocating the memory
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            free(a[i][j]);
        }
        free(a[i]);
    }
    free(a);

    return 0;
}

//defining the functions

//reading the values
void read(int ***a, int x, int y, int z){
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            for(int l = 0; l < z; l++)
                scanf("%d", &a[i][j][l]);
}

//printing the sections
void sections(int ***a, int x, int y, int z){
    for(int l = 0; l < z; l++){
        printf("Section %d:\n", l+1);
        for(int j = 0; j < y; j++){
            for(int i = 0; i < x; i++)
                printf("%d ", a[j][i][l]);
            printf("\n");
        }
    }
}
