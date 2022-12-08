#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_yomi(long long *x,int num){
	for(int i=num-1; i>=0; i--){
		switch(*(x+i)){
			case 1: 
				if(i%4!=0) break;
				printf("一"); break;
			case 2: printf("二"); break;
			case 3: printf("三"); break;
			case 4: printf("四"); break;
			case 5: printf("五"); break;
			case 6: printf("六"); break;
			case 7: printf("七"); break;
			case 8: printf("八"); break;
			case 9: printf("九"); break;
		}
		switch(i%4){
			case 0: break;
			case 1: printf("十"); break;
			case 2: printf("百"); break;
			case 3: printf("千"); break;
		}
		if(i==8) printf("億");
		if(i==4) printf("万");
	}
}

void yomiage(long long n){
	if (n-100000000000>=0){
            printf("読めません");
        }else if(n==0){
            printf("零");
        }else{
            long long x[13];
            int num=0,i=0;
            while(n!=0){
                x[i] = (n % llrint(pow(10,i+1)))/llrint(pow(10,i));
                n -= x[i]*llrint(pow(10,i));
                num++; i++;
            }
            print_yomi(x,num);
        }
}
