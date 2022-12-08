//
//  main.c
//  prog01
//
//  Created by k21099kk on 2021/12/15.
//

#include <stdio.h>
#include <math.h>

void SumOhTheSequences (int *sum, int n, int a){
    for (int i=0; i<=n; i++) {
            *sum += pow(a, n-i);
        }
}

int main(int argc, const char * argv[]) {
   
    int n=10,a=4,sum=0;
    
    SumOhTheSequences(&sum,n,a);
    
    printf("10Σk=0{4^(10-k)} = %d\n",sum);
    
    return 0;
}
