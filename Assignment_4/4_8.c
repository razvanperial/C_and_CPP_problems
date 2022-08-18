/*
CH-230-A
a4 p8.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

void write_matrix(int m[30][30], int n);
void sec_diag(int m[30][30], int n);

int main(){
    int n, a[30][30],i,j;

    //reading the dimensions of the matrix
    scanf("%d", &n);

    //reading the elements of the matrix
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    //calling the function for writing the matrix
    write_matrix(a, n);
    
    /*calling the function for writing the elements 
    under the secondary diagonal*/
    sec_diag(a, n);
    return 0;
}

//function for writing the matrix on the screen
void write_matrix(int m[30][30], int n){
    int i,j;
    printf("The entered matrix is:\n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");//newline at the end of every row
    }
}

//function for writing the elements under the main diagonal
/*
the elements under the secondary diagonal will have the 
sum of the row index and the the column index bigger than 
n+1, n being the dimension of the square matrix
(Note: the sum of the indexes of any element from the secondary
diagonal is n+1)
*/
void sec_diag(int m[30][30], int n){
    int i,j;
    printf("Under the secondary diagonal:\n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i + j > n + 1)
            printf("%d ", m[i][j]);
        }
    }
    printf("\n");
}