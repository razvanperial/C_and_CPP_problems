/*
CH-230-A
a3 p9.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n);

int main(){
    int n,i;
    double v[25];
    scanf("%d", &n);

    //reading and storing the values in the array
    for(i = 0; i < n; i++)
        scanf("%lf", &v[i]);

    /*using the function to print the right result, checking
    that positions are 2 and 5 valid*/
    if(n>=6)
        printf("sum=%lf\n", sum25(v,n));
    else
        printf("One or both positions are invalid\n");
    return 0;
}

/*writing the function and verifying if positions
2 and 5 are valid*/
double sum25(double v[], int n){
    if(n<6)
        return -111;
    else
        return v[2] + v[5];
}