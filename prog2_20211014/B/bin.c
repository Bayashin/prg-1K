#include <stdio.h>

void printbin(unsigned int num){
	int pnum,x=0;
    for(int i=31; i>=0; i--){
	pnum=num>>i;
	pnum&=1;
	if(x==0&&pnum==0) continue; 
	x=1;
	printf("%d",pnum);
    }
    printf("\n");
}

int main(){
	int num;
	printf("number? (0~4294967295)\n");
	scanf("%d",&num);
	printbin(num);
	
	return 0;
}
