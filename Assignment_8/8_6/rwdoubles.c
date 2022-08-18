/*
CH-230-A
a8 p6.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){
    //declarte the files
    FILE *in_file1;
    FILE *in_file2;
    FILE *out_file;

    //declare the strigns which will store the names of the files
    char f1[100], f2[100];

    //declare the values that will be read from the files
    double x,y;

    //read the two names from the keyboard
    fgets(f1,sizeof(f1),stdin);
    f1[strlen(f1)-1] = '\0';
    fgets(f2,sizeof(f2),stdin);
    f2[strlen(f2)-1] = '\0';

    //open the files
    in_file1 = fopen(f1, "r");
    in_file2 = fopen(f2, "r");
    out_file = fopen("results.txt", "w");

    //check if the files have been opened 
    if (in_file1 == NULL || in_file2 == NULL || out_file == NULL){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    } 

    //read the variables
    fscanf(in_file1, "%lf", &x);
    fscanf(in_file2, "%lf", &y);

    //print the required values in the results.txt file
    fprintf(out_file, "Sum = %lf\n", x+y);
    fprintf(out_file, "Difference = %lf\n", x-y);
    fprintf(out_file, "Product = %lf\n", x*y);
    fprintf(out_file, "Division = %lf\n", x/y);

    //close the files
    fclose(in_file1);
    fclose(in_file2);
    fclose(out_file);
    
    return 0;
}