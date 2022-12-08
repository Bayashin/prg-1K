//
//  main.c
//  prog06
//
//  Created by k21099kk on 2021/11/11.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 256

int main(int argc, const char * argv[]) {
    FILE* fp;
    fp=fopen("number.txt","w+");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    for (int i=0; i<100; i++) {
        fprintf(fp, "%d\n",i);
        printf("%d\n",i);
    }
    
    fclose(fp);
    
    return 0;
}
