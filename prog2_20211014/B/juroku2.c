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
    unsigned int num,upper,lower[7];
    printf("number? (0~4294967295)\n"); scanf("%d", &num);

    int i=0;
    while (num>=16)
    {
        lower[i] = num%16;
        num /=16;
        i++;
    }

    upper = num;
    print16(upper);
    for (int j=i-1; j>=0; j--)
    {
        print16(lower[j]);
    }
    printf("\n");

    return 0;
}