/*
CH-230-A
a8 p8.[c]
Razvan Perial
rperial@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <stdbool.h>

int main(){
    //declare the variables used for reading and moving through the file
    //and the string for storing the name of the file
    char ch1, ch2, fn[50];

    //variable bool is used to check if the file if empty or not
    //and contains at lest a letter at the beggining 
    bool ok = false;

    //variable for counting the number of words
    int count = 0;

    //declare the file
    FILE *in_file;

    //reading the name of the file
    fgets(fn, sizeof(fn), stdin);
    fn[strlen(fn)-1] = '\0';

    //open the file
    in_file = fopen(fn, "r");

    //check if the file has been opened 
    if (in_file == NULL){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    }

    /*read characters from the file until it reaches the end of file 
    or reads a letter. In the case it stops when it reads a letter,
    that letter will represent the first letter of the first word,
    and I will count that word at the end by checking the ok variable.
    I do this because I don't know if the first word is predecessed or 
    not by a separating character, and if the first word exists this will
    make the counter go up in any of these cases*/
    while(fscanf(in_file,"%c", &ch1) != EOF && ok == false){
        if((ch1 >=65 && ch1 <= 92) || (ch1>=95 && ch1 <= 122))
            ok = true;
    }

    fscanf(in_file,"%c", &ch1);
    /*read characters in the file and use ch1 and ch2 to compare 2 characters
    that are next to each other and if the first one is one of the separating
    characters and the other a letter, it means that it is the beginning of a
    word, in which case I count that word by increasing the counter*/
    while(fscanf(in_file,"%c", &ch2) != EOF){
        if(ch1 == ' ' || ch1 == ',' || ch1 == '?' || ch1 == '!' ||
           ch1 == '.' || ch1 == '\t' || ch1 == '\r' || ch1 == '\n'){
                if((ch2 >=65 && ch2 <= 92) || (ch2>=95 && ch2 <= 122)){
                    count++;
                }
        }
        //switch ch1 to the next character and then read the one after that
        ch1 = ch2;
    }

    //count the first word in the file since it may not be predecessed by 
    //a separating character
    if(ok)
        count++;

    //print the number of words
    printf("The file contains %d words.\n", count);
    return 0;
}