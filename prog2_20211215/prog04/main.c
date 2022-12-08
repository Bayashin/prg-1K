//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/12/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getrand (int i) {
   //0~iまでの整数値をランダムに決めて返す
    srand((unsigned int)time(NULL));
    return rand()%i + rand()%2;
}

void swap(int *a,int i,int j){
    //a[i]とa[j]の入れ替え
    int tmp=*(a+i);
    *(a+i) = *(a+j);
    *(a+j) = tmp;
}

int main(int argc, const char * argv[]) {
    
    int a[]={1,2,3,4,5,6,7,8,9,10};
    
    for (int  i=sizeof(a)/sizeof(int)-1; i>0; i--) {
        int j = getrand(i);
        swap(&a[0], i, j);
    }
    
    for (int i=0; i<sizeof(a)/sizeof(int); i++) {
        printf("%d\n",a[i]);
    }
    
    return 0;
}
