/*
CH-230-A
a9 p6.[cpp]
Razvan Perial
rperial@jacobs-university.de
*/

#include <iostream>
#include <cstring>

//function taking array of integers
int myfirst(int a[], int arrSize){
    int i;
    bool ok = false;
    for(i = 0; i < arrSize; i++){
        if(a[i] % 2 == 0 && a[i] > 0){//find the first pozitive even number
            ok = true;
            break;
        }
    }
    //check if the number has been found and return -1 if not
    if(ok)
        return i;
    else 
        return -1;
    
    return 0;
}

////function taking array of doubles
double myfirst(double a[], int arrSize){
    int i;
    bool ok = false;
    for(i = 0; i < arrSize; i++){
        //finding the negative first value with no 
        //fractional part
        if(a[i] == int(a[i]) && a[i] < 0){
            ok = true;
            break;
        }
    }
    //check if the number has been found and return -1 if not
    if(ok)
        return a[i];
    else 
        return -1;
    
    return 0;
}

char myfirst(char s[]){
    int i;
    int l = strlen(s);
    for(i = 0; i < l; i++){
        //find the first consonant
        if(strchr("aeiouAEIOU", s[i]) == NULL && 
        ((s[i] > 'A' && s[i] < 'Z') || (s[i] > 'a' && s[i] < 'z')))
            break;
    }

    //return 0 if i has reached the end of the string without 
    //finding the character
    if(i == l)
        return '0';

    //return the consonant otherwise
    return s[i];
}

int main(){

    int a[] = {-2, 0, 5, 7, 6, 9, 12, 13};
    double ab[] = {3.5, 4.898, 0, -2.345, -56.0, 89, -34};
    char s[] = "aeiousfrwww";

    //calculate the size of the first array and print the result 
    //after calling the function
    int arrSize = sizeof(a)/sizeof(a[0]);
    std::cout<<"Passing array {-2, 0, 5, 7, 6, 9, 12, 13} returns: "
    <<myfirst(a, arrSize)<<std::endl;

    //calculate the size of the second array and print the result 
    //after calling the function
    arrSize = sizeof(ab)/sizeof(ab[0]);
    std::cout<<"Passing array {3.5, 4.898, 0, -2.345, -56.0, 89, -34} returns: "
    <<myfirst(ab, arrSize)<<std::endl;

    //print the 
    std::cout<<"Passing the array of characters aeiousfrwww returns: "
    <<myfirst(s)<<std::endl;

    return 0;
}