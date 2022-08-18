/*
CH-230-A
a2 p6.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double x,y;
    scanf("%lf%lf", &x,&y);
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;
    printf("ptr_one address=%p\n",ptr_one);
    printf("ptr_two address=%p\n",ptr_two);
    printf("ptr_three address=%p\n",ptr_three);

    return 0;
}