#include <stdio.h>

unsigned int rrotate(unsigned int x, int n){

    int r_shift,l_shift,logicalsum;
    r_shift = x >> n;
    l_shift = x << (32-n);
    logicalsum = r_shift | l_shift;
    
    return logicalsum;
}

unsigned int lrotate(unsigned int x, int n){

    int r_shift,l_shift,logicalsum;
        r_shift = x >> (32-n);
        l_shift = x << n;
        logicalsum = r_shift | l_shift;

        return logicalsum;
}

void print_binary(unsigned int num){
    int pnum;
    for(int i=31; i>=0; i--){
	pnum=num>>i;
	pnum&=1;
	printf("%d",pnum);
    }
    printf("\n");
}

int main(){

    int num,time,rl;
    printf("number? (0~4294967295) time?(0~32)\n");
    scanf("%d %d" ,&num,&time);
    printf("right? left?\n"); printf("right:1 left:2\n"); scanf("%d",&rl);

    int rote_num;

    if (rl==1)
    {
        rote_num=rrotate(num,time);
    }else{
        rote_num=lrotate(num,time);
    }
    print_binary(rote_num);

    return 0;
}
