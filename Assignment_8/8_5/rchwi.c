/*
CH-230-A
a8 p5.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 

int main(){
    //declare the chars
    char a,b;

    //declare the files
    FILE *in_file;
    FILE *out_file;

    //open the files
    in_file = fopen("chars.txt", "r");
    out_file = fopen("codesum.txt", "w");

    //check if the files have been opened
    if (in_file == NULL || out_file == NULL){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    } 

    //read the characters from chars.txt
    fscanf(in_file, "%c %c", &a, &b);

    //print the sum of ASCII codes in results.txt
    fprintf(out_file, "%d", a+b);

    //close the files
    fclose(in_file);
    fclose(out_file);
    
    return 0;
}

