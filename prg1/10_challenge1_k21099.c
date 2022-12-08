//
//  10_challenge1_k21099.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int size = 100;
    int sosuu[size],i,j,amari,n;
    
    for(i=0;i<size;i++){
        sosuu[i]=0;
    }
    
    for(i=2;sosuu[0] == 0;i++){
        for(j=2;j<=i;j++){
            amari = i%j;
            if (amari == 0 && i == j) {
                sosuu[0] = i;
            }
        }
    }
   
    while (i <= size) {
        j =0; amari =1;
        while (sosuu[j] != 0 && amari != 0) {
            amari = i % sosuu[j];
            j++;
        }
        switch (amari) {
            case 0:
                break;
                
            default:
                sosuu[j] = i;
                break;
            }
        i++;
    }
    
    i=0;
    while (sosuu[i] != 0) {
        printf("%d ",sosuu[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}
