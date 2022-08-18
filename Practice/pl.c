#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int (*ptr) (int);
int a (int x){
    return x;
}

int main(){
    FILE *f;
    f = fopen("pula.txt","wb");
    if(f == NULL){
        printf("Error opening file\n");
        exit(1);
    }
    char c1[3] = "aa\n";
    fwrite(c1, sizeof(char), 3,f);
    fclose(f);
    return 0;
}