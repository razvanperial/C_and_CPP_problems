/*
CH-230-A
a2 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    printf("a=%d\n",a);
    int *ptr_a = &a;
    printf("address=%p\n",ptr_a);
    *ptr_a += 5;
    printf("new value=%d\n",a);
    printf("address=%p\n",ptr_a);

    return 0;
}