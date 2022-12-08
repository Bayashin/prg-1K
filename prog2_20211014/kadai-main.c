#include <stdio.h>
#include <stdlib.h>

extern void yomiage(long long n);

int main(){
    char ss[256];
    long long n;

    printf("Number? "); fgets(ss, sizeof(ss), stdin);
    n = atoll(ss);

    printf("%lld = ", n);
    yomiage(n);
    printf("\n");

    return 0;
}