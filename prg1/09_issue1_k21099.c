//
//  09_issue1_k21099.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    int a[3],b[3],i,dif;
    
    for(i=0;i<3;i++){
        printf("a[%d]\? ",i);scanf("%d",&a[i]);
    }
    
    for(i=0;i<3;i++){
        printf("b[%d]\? ",i);scanf("%d",&b[i]);
    }
    
    for(i=0;i<3;i++){
        dif=a[i]-b[i];
        printf("a[%d]-b[%d]= %d\n",i,i,dif);
    }
    
    return 0;
}
