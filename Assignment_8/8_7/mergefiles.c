/*
CH-230-A
a8 p7.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){
    //declare the character used for reading the strings
    //and the pointers that will point to the strings
    char *f1, *f2 ,ch;

    //declare the lengths of the strings and the size originally 
    //allocated for the strings
    int length1 = 0, length2 = 0, size1 = 50, size2 = 50;

    //allocate memory for strings
    f1 = (char *) malloc ( sizeof(char) * size1 );
    f2 = (char *) malloc ( sizeof(char) * size2 );

    //declarte the files
    FILE *in_file1;
    FILE *in_file2;
    FILE *out_file;

    //open the files
    in_file1 = fopen("text1.txt", "r");
    in_file2 = fopen("text2.txt", "r");
    out_file = fopen("merge12.txt", "w");

    //check if the files have been opened 
    if (in_file1 == NULL || in_file2 == NULL || out_file == NULL){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    }

    //while there is something to read in the first text file
    while(fscanf(in_file1,"%c", &ch) != EOF){
        //double the memory allocated using the buffer if the
        //length outreaches the original size declared
        if(length1 >= size1){
            size1*=2;
            f1 = (char *) realloc (f1, size1 * sizeof(char));
        }
        //add the character to the string 
        f1[length1] = ch;

        //increase the length of the string
        length1++;
    }

    //copy the content from the first file to merge12
    fprintf(out_file, "%s", f1);

    //while there is something to read in the second text file
    while(fscanf(in_file2,"%c", &ch) != EOF){
        //double the memory allocated using the buffer if the
        //length outreaches the original size declared
        if(length2 >= size2){
            size2*=2;
            f2 = (char *) realloc (f2, size2 * sizeof(char));
        }
        //add the character to the string 
        f2[length2] = ch;

        //increase the length of the string
        length2++;
    }

    //copy the content from the second file to merge12
    fprintf(out_file, "\n%s", f2);

    //close the files
    fclose(in_file1);
    fclose(in_file2);
    fclose(out_file);

    return 0;
}