#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,n,a,i,sum=0;
	printf("Enter the power of  : ");
	scanf("%d" ,&n);
	printf("Enter the base of  : ");
	scanf("%d" ,&x);
	for(i=3;i<n;){
		i=i+2;
		sum = pow(x,i);
	}
	a= x - pow(x,3);
	sum = sum +a;
	printf("sum : %d" ,sum );

	return 0;
}
