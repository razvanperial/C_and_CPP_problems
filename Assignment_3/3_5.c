/*
CH-230-A
a3 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char c;
    int n,i;
    double a[105],sum = 0;
    scanf("%c",&c);
    scanf("%d", &n);
    //reading and storing the double values in the array
    for(i = 1; i <= n; i++){
        scanf("%lf", &a[i]);
    }

    /*sorting the values printed based on a switch function,
    each case considering the value of the variable c*/
    switch(c){
        case 's':
            for(i = 1; i <= n; i++){
                sum += a[i];
            }
            printf("%lf", sum);
        break;

        case 'p':
            for(i = 1; i <= n; i++){
                printf("%lf\n", a[i]);
            }
        break;

        case 't':            
            for(i = 1; i <= n; i++){
                printf("%lf\n", 9/5*a[i]+32);
            }
        break;

        default:
            for(i = 1; i <= n; i++){
                sum += a[i];
            }

            printf("%lf\n", sum/n);
        break;
    }

    return 0;
}