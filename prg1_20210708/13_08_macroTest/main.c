//
//  main.c
//  13_08_macroTest
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>
#define X_NUM (10)

int main(int argc, const char * argv[]) {

    int a = X_NUM;
    int i,sum;
    
      for(i=0,sum = 0;i<=a;i++){
          sum += i;
      }
      printf("総和 = %d\n",sum);
    
    return 0;
}
