/*
CH-230-A
a2 p3.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int w,d,h;
    scanf("%d%d%d",&w,&d,&h);
    d += w*7;
    h += d*24;
    printf("%d\n",h);
    return 0;
}