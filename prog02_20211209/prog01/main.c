//
//  main.c
//  prog01
//
//  Created by k21099kk on 2021/12/09.
//

#include <stdio.h>
#define MESSAGE

int main(int argc, const char * argv[]) {
#ifdef MESSAGE
    printf("debug\n");
    (void)getchar();
#endif
    
    printf("finish\n");
    return 0;
}
