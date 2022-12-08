#include <stdio.h>

void printbin(unsigned int x){

    int Logicalsum;

    for (int i=31; i >= 0; i--)
    {
        Logicalsum = x >> i;
        Logicalsum &= 1;
        printf("%d",Logicalsum);
    }
    
    printf("\n");
}

int main(){

    int num;
    printf("number? (0~4294967295)\n"); scanf("%d" ,&num);

    printbin(num);

    return 0;
}