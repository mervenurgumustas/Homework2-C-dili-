#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sum=0;
	for(i=1;i<=50;i++){
		printf(" %d ",i);
		sum = sum + i;
	}
	printf("\nSum : %d" ,sum);
	
	
	
	
	
	
	
	return 0;
}
