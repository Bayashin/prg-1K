//
//  07_07_boggest.c
//  prg1
//
//  Created by k21099kk on 2021/05/27.
//

#include <stdio.h>
int main(){
    int n[5],max,i;
    
    for(i=0;i<5;i++){
        printf("%d\?\n",i+1); scanf("%d",&n[i]);
    }
    
    max=n[0];
    
    for(i=1;i<5;i++){
        if(max<n[i]) max=n[i];
        }
    
    printf("max=%d\n",max);
    
    return 0;
}
