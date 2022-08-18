/*
CH-230-A
a9 p8.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>

//function for substracting the max value from every element of array
void subtract_max(int a[], int n){
    //use variable maxi for finding the maximum value
    int maxi = a[0],i;
    for(i = 1; i < n; i++){
        //function max() returns the maximum of the two parameters passed
        maxi = std::max(maxi,a[i]);
    }

    //substract the maximum drom the values
    for(i = 0; i < n; i++)
        a[i] -= maxi;
}

//function for deallocating array
void deallocate(int a[]){
    delete [] a;
}

int main(){
    int n,i;

    //reading the number of elements
    std::cin>>n;

    //allocating memory for the array
    int *a = new int[n];

    //reading the elements
    for(i = 0; i < n; i++)
        std::cin>>a[i];

    //printing the elements before calling the function
    std::cout<<"Array before calling the function:"<<'\n';
    for(i = 0; i < n; i++)
        std::cout<<a[i]<<" ";
    std::cout<<'\n';

    //calling the function
    subtract_max(a,n);

    //printing the elements after calling the function
    std::cout<<"Array after calling the function:"<<'\n';
    for(i = 0; i < n; i++)
        std::cout<<a[i]<<" ";
    std::cout<<'\n';
    
    //deallocate the memory
    deallocate(a);

    return 0;
}
