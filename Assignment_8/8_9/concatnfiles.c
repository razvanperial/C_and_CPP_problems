/*
CH-230-A
a8 p9.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){

    char buffer[64], fn[60];

    int n,size;

    //declare the files
    FILE *in_file;
    FILE *out_file;

    //open the output file
    out_file = fopen("output.txt", "w");

    //check if the file has been opened 
    if (out_file == NULL){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    }

    //read the number of files
    scanf("%d", &n);
    getchar();

    //read the name of each file and open and close file by file
    while(n--){
        fgets(fn, sizeof(fn),stdin);
        fn[strlen(fn) - 1] = '\0';

        //open file
        in_file = fopen(fn, "r");

        //check if the file has been opened 
        if (in_file == NULL){   
            printf("Error! Could not open file\n"); 
            exit(-1);
        }

        //reading characters from the file in 64 chunks of 1 byte
        //until it reaches the end of file
        while(!feof(in_file)){
            //store the int value returend by fread in the size variable
            size = fread(buffer, sizeof(char), 64, in_file);
            
            //write the content previously read in the out_file using
            //the size variable as the number of chunks
            fwrite(buffer, sizeof(char), size, out_file);
        }

        fprintf(out_file,"\n");

        //close file
        fclose(in_file);
    }
    return 0;
}