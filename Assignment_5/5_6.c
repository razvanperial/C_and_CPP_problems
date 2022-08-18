/*
CH-230-A
a5 p6.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);//reading the number of elements
    float a[n];//declaring the array

    //reading the elements from the array
    for(int i = 0; i < n; i++)
        scanf("%f", &a[i]);

    /*declare and use the pointer initialized with the location of 
    the first value of a to find the first negative element of the array
    and print the number of elements before it*/
    float *p = a;
    while(p < a + n){
        if(*p < 0){
            printf("Before the first negative value: %ld elements\n", p-a);
            break;
        }
        p++;
    } 
    return 0;
}