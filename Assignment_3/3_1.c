/*
CH-230-A
a3 p1.[c]
Razvan Perial
rperial@jacobs-university.de
*/
 
#include <stdio.h>

int main()
{
    float x;
    int n;
    scanf("%f", &x);
    scanf("%d", &n);
    while(n <= 0){
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    } 
    for(int i = 1; i <= n; i++)
        printf("%f\n",x);
    return 0;
}
