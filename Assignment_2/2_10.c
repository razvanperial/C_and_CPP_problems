/*
CH-230-A
a2 p10.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int x,i;
    scanf("%d", &x);
    while(x <= 0){
        scanf("%d", &x);
    }
    i=1;
    while(i <= x){
        if(i == 1)
            printf("%d day = %d hours\n", i,i*24);
        else        
            printf("%d days = %d hours\n", i,i*24);
        i++;
    }
    return 0;
}