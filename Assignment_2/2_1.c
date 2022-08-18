/*
CH-230-A
a2 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double x,y;
    int a,b;
    char c1,c2;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%d",&a);
    scanf("%d",&b);
    getchar();
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);
    printf("sum of doubles=%lf\n", x+y);
    printf("difference of doubles=%lf\n", x-y);
    printf("square=%lf\n", x*x);
    printf("sum of integers=%d\n", a+b);
    printf("product of integers=%d\n", a*b);
    printf("sum of chars=%d\n", c1 + c2);
    printf("product of chars=%d\n", c1*c2);
    printf("sum of chars=%c\n", c1 + c2);
    printf("product of chars=%c\n", c1*c2);
    return 0;
}