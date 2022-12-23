#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,i,n,sum;
	printf("Enter the number :");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		sum= sum + (1/i);
		printf("%f \n",1/i);
	}
	printf("sum : %f",sum);
	
	
	return 0;
}
