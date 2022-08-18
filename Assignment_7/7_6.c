/*
CH-230-A
a7 p6.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct person {
    char name[30];
    int age;
};
//swap with respect to age
int swap_age(struct person x, struct person y){
    if(x.age > y.age)
        return 1;
    if(x.age == y.age){ 
        if(strcmp(x.name,y.name) > 0)
            return 1;
    }
    return 0;
}

//swap with respect to age
int swap_name(struct person x, struct person y){
    if(strcmp(x.name,y.name) > 0)//compare names
        return 1;

    if(strcmp(x.name,y.name) < 0)//check if it is smaller 
        return 0;
    
    //continues if names are the same
    if(strcmp(x.name,y.name) == 0)  
        if(x.age > y.age)//check ages
            return 1;
    
    //returns 0 if they have the same name and age
    return 0;
}

void bubble_sort(struct person a[], int n, int f()){
    int i;
    bool swapped = true;
    struct person aux;//variable used for swapping
    while(swapped){
        swapped = false;
        for(i = 1; i < n; i++){
            if(f(a[i-1], a[i])){
                swapped = true;
                aux = a[i-1];
                a[i-1] = a[i];
                a[i] = aux;
            }
        }
    }
}

int main(){
    int n,i;
    //read the dimension of the array       
    scanf("%d ", &n);
    //declare the struct
    struct person a[n];
    
    //reading the elements
    for(i = 0; i < n; i++){
        fgets(a[i].name, sizeof(a[i].name),stdin);
        a[i].name[strlen(a[i].name)-1] = '\0';
        scanf("%d", &a[i].age);
        getchar();
    }  

    //sort the function with respect to name and print the result
    bubble_sort(a,n,swap_name);
    for(i = 0; i < n; i++){
        printf("{%s, %d}; ", a[i].name, a[i].age);
    }  
    printf("\n");

    //sort the function with respect to age and print the result
    bubble_sort(a,n,swap_age);
    for(i = 0; i < n; i++){
        printf("{%s, %d}; ", a[i].name, a[i].age);
    }  
    printf("\n");
    return 0;
}