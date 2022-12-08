#include <stdio.h>

extern int draw_figure(int);

int main(){
	int size;

	printf("Size of figure? "); scanf("%d",&size);
	draw_figure(size);

	return 0;
}
