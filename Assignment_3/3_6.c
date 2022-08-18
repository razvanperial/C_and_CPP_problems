/*
CH-230-A
a3 p6.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
/*build a function converts the value in kg
into pounds*/
float to_pounds(int kg, int g){
    float ans = (kg + g/1000.0)*2.2;
    return ans;
}

int main(){
    int kg,g;
    scanf("%d%d", &kg, &g);//read the variables
    /*use the function to_pounds in the printf statement
    to return the wanted value*/
    printf("Result of conversion: %f\n", to_pounds(kg,g));

    return 0;
}
