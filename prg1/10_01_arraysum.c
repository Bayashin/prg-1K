//
//  10_01_arraysum.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int a[5],n,i,ans;
    
    for(i=0;i<5;i++){
        n=2*(i+1);
        a[i]=n;
    }
    
    for(i=0;i<5;i++){
        ans += a[i];
    }
    
    printf("合計=%d\n",ans);
    
    return 0;
}
