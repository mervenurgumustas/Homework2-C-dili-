#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int i,n,x,j;
	int factor=1;
	float sum=1,a;
	printf("Enter the value of n : ");
	scanf("%d" ,&n);
	printf("Enter the value of x : ");
	scanf("%d" ,&x);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			factor = factor*j;
		}
		a=i/factor;
		sum = sum + pow(x,a);
	}
	printf("Sum : %f",sum);	
	return 0;
}
