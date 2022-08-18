/*
CH-230-A
a4 p3.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

//writing the prototypes for the functions
float geometric_mean(float arr[], int num);
float highest(float arr[], int num);
float lowest(float arr[], int num);
float sum(float arr[], int num);

int main(){
    float a[16];//declaring the array
    char c;//used for the switch

    //the index for reading the values and the number of elements in the array
    int i=1,num;

    //reading the first element, in order to compare it to 0 in the while loop
    scanf("%f", &a[i]);

    //reading the elements until one is negative
    while(a[i] >= 0){
        i++;
        scanf("%f", &a[i]);
    }

    /*setting the number of elements in the array as i-1, 
    since the last one is negative*/
    num=i-1;

    //reading the character
    getchar();
    scanf("%c", &c);

    //creating the switch function
    switch(c){
        case 'm':
            printf("the geometric mean is: %f", geometric_mean(a, num));
        break;

        case 'h':
            printf("the highest number is: %f", highest(a, num));
        break;

        case 'l':
            printf("the lowest number is: %f", lowest(a, num));
        break;

        case 's':
            printf("the sum of the elements is: %f", sum(a, num));
        break;
    }
    return 0;
}

//defining the functions

/*calculating the geometric mean by using the pow function and
powering the product of the values to 1/num power*/
float geometric_mean(float arr[], int num){
    float prod = 1,ans;
    for(int i = 1; i <= num; i++)
        prod *= arr[i];
    ans = pow(prod,(float)1/num);
    return ans;
}

/*calculating the highest element in the array using an extra
variable named maxi, initialized with 0 and comparing it to every
value in  the array, changing its value everytime I find
a bigger value*/
float highest(float arr[], int num){
    float maxi = 0;
    for(int i = 1; i <= num; i++)
        if(arr[i] > maxi)
            maxi = arr[i];
    return maxi;
}

/*calculating the lowest element in the array using an extra
variable named mini, initialized with a[1] and comparing it to every
value in  the array, changing its value everytime I find a smaller
value*/
float lowest(float arr[], int num){
    float mini = arr[1];
    for(int i = 1; i <= num; i++)
        if(arr[i] < mini)
            mini = arr[i];
    return mini;
}

/*calculating the sum by adding every value of the array to 
a sum variable initialized with 0*/
float sum(float arr[], int num){
    float sum = 0;
    for(int i = 1; i <= num; i++)
        sum += arr[i];
    return sum;
}