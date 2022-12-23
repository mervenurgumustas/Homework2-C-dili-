#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,x,factor=1,i,j;
	float sum1,sum2,sum,a;
	printf("Enter the value of pow: ");
	scanf("%d" ,&n);
	printf("Enter the value of base: ");
	scanf("%d" ,&x);
	
	for(j=2;j<=n;j+=2){
		for(i=2;i<=n;i++)
	{
		factor=factor*i;
	}
	a=n/factor;
	if(n%4==0)
	{
		sum1=0;
		sum1 += pow(x,a);	
	}
	else
	{
		sum2=0;
		sum2 -=  pow(x,a);		
	}
	}
	sum = 1 + sum1 + sum2;
	printf("sum : %f" ,sum);
	
	return 0;
}
