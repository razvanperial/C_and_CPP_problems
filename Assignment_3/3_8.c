/*
CH-230-A
a3 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

//function for the sum, excluding the value -99 if it exists
float sum(float a[], int n){
    float s = 0;
    for(int i = 1; i <= n; i++)
        if(a[i] != -99)   
            s += a[i];
    return s;
}

//function for the average, excluding the value -99 if it exists
float avg(float a[], int n){
    float s = 0;
    for(int i = 1; i <= n; i++)
        if(a[i] != -99)
            s += a[i];
    
    /*verify if the last number in the array is -99,
    then it doesn't count as a member of the average we want
    to calculate*/
    if(a[n] == -99)
        return s/(n-1);
    else
        return s/n;
}

int main(){
    float a[12];//declaring an array in wich I will store the values
    int n = 0;//variable that will store the number of values in the array

    /*reading values from the keyboard and storing them in the array until 
    there are 10 values or the last value is -99*/
    while(n<10 && a[n] != -99){
        n++;
        scanf("%f", &a[n]);
    }
    //printing the result on the screen
    printf("Sum = %f\nAverage = %f\n", sum(a,n), avg(a,n));
    return 0;
}