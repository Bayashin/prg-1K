#include <stdio.h>

void print16(unsigned int x)
{
    if(x <= 9) {
        printf("%d", x);
    } else {
        switch(x) {
            case 10: printf("A"); break;
            case 11: printf("B"); break;
            case 12: printf("C"); break;
            case 13: printf("D"); break;
            case 14: printf("E"); break;
            case 15: printf("F"); break;
        }
    } 
}

int main() {
    unsigned int num,upper,lower;
    printf("number? (1~255)\n"); scanf("%d", &num); 

    upper = num / 16;
    lower = num % 16;
    
    print16(upper);
    print16(lower);
    printf("\n");

    return 0;
}