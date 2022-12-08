//
//  main.c
//  prog05
//
//  Created by k21099kk on 2021/11/11.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 256

int main(int argc, const char * argv[]) {
    char line[MAX];
    FILE* fp;
    fp=fopen("meibo.txt","r");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    while(fgets(line, MAX, fp)!=NULL){
        printf("%s",line);
    }
    fclose(fp);
    
    return 0;
}
