//
//  main.c
//  exercise1
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

void swap_str_ptr(char* *str1,char* *str2){
    char *tmp = *str1;
    *str1=*str2;
    *str2=tmp;
}

void sort_str_ptr (char**str1,char**str2){
    if (strlen(*str1)>strlen(*str2)) {
        swap_str_ptr(&*str1, &*str2);
    }
}

void bubble_str_ptr(char* *list,int size){
    for (int i=0; i<size; i++) {
        for (int j=0; j<size-i-1; j++) {
            sort_str_ptr(&*(list+j),&*(list+j+1));
        }
    }
}

int main(int argc, const char * argv[]) {
    char *list[]={"hoge","abc","xy","fugagaga"};
    int size=sizeof(list)/sizeof(char*);
    
    for (int i=0; i<size; i++) printf("%s ",list[i]);
    printf("\n");
    bubble_str_ptr(&*list, size);
    for (int i=0; i<size; i++) printf("%s ",list[i]);
    printf("\n");
    
    
    
    return 0;
}
