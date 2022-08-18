/*
CH-230-A
a5 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>

//writing the prototypes of the functions
double scal_product(double a[], double b[], int n);
double minimum(double a[], int n);
double maximum(double a[], int n);
int poz_min(double a[], int n);
int poz_max(double a[], int n);

int main(){
    int n, i;
    scanf("%d", &n);//reading the number of components

    /*declaring the arrays where each component of 
    the specific vector will be stored*/
    double a1[n], a2[n];

    //reading and storing the components of the first vector
    for(i = 0; i < n; i++)
        scanf("%lf", &a1[i]);

    //reading and storing the components of the second vector
    for(i = 0; i < n; i++)
        scanf("%lf", &a2[i]);

    //calling the function for the scalar product and writing the result
    printf("Scalar product=%lf\n", scal_product(a1,a2,n));

    //printing the results for the first vector
    printf("The smallest = %lf\n", minimum(a1,n));
    printf("Position of smallest = %d\n", poz_min(a1,n));
    printf("The largest = %lf\n", maximum(a1,n));
    printf("Position of largest = %d\n", poz_max(a1,n));

    //printing the results for the second vector
    printf("The smallest = %lf\n", minimum(a2,n));
    printf("Position of smallest = %d\n", poz_min(a2,n));
    printf("The largest = %lf\n", maximum(a2,n));
    printf("Position of largest = %d\n", poz_max(a2,n));

    return 0;
}

//declaring the functions

//scalar product
double scal_product(double a[], double b[], int n){
    double ans = 0;
    for(int i = 0; i < n; i++)
        ans+= a[i]*b[i];

    return ans;
}

//minimum value
/*calculate minimum value using a variable ans initialized to the
first value of the array and going through every element of the
array, changing the variable's value each time I find a smaller one*/
double minimum(double a[], int n){
    double ans = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < ans)
            ans = a[i];
    return ans;
}

//maximum value
/*same as the minimum value, but this time change the variable
when I find a bigger value*/
double maximum(double a[], int n){
    double ans = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > ans)
            ans = a[i];
    return ans;
}

//position of the minimum
/*similar to minimum and maximum function, but this time
I use two variables, one for the index and one for the minimum,
changing their values accordingly*/
int poz_min(double a[], int n){
    int ans = 0;
    double mini = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < mini){
            ans = i;
            mini = a[i];
        }
    return ans;
}

//position of the maximum
/*same as pos for the minimum but change for greater*/
int poz_max(double a[], int n){
    int ans = 0;
    double maxi = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > maxi){
            ans = i;
            maxi = a[i];
        }
    return ans;
}