/*
CH-230-A
a7 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

//function for printing the array
void write(int a[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

//function for sorting the array ascending
int compare_up ( const void * va , const void * vb ) {
    const int* a = ( const int *) va ;
    const int* b = ( const int *) vb ;
    if (* a < * b ) return -1;
    else if (* a > * b ) return 1;
    else return 0;
}

//function for sorting the array descending
int compare_down ( const void * va , const void * vb ) {
    const int* a = ( const int *) va ;
    const int* b = ( const int *) vb ;
    if (* a > * b ) return -1;
    else if (* a < * b ) return 1;
    else return 0;
}

int main(){
    int n,a[100];
    scanf("%d", &n);
    char c;

    //reading the elements of the array
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    while(1){
        getchar();
        scanf("%c", &c);//read the character

        //if function for determining which function to apply fot sorting
        if(c == 'a'){
            qsort (a, n, sizeof(a[0]), compare_up);
            write(a, n);
        }
        else if (c == 'd'){
            qsort (a, n, sizeof(a[0]), compare_down);
            write(a, n);
        }
        else if (c == 'e')
            exit(1);
    }

    return 0;
}