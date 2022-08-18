/*
CH-230-A
a2 p8.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x%14 == 0){/*In order for a number to be divisible
        by 2 and 7 it needs to be divisible by 14*/
        printf("The number is divisible by 2 and 7\n");
    }
    else
        printf("The number is NOT divisible by 2 and 7\n");
    
    return 0;
}