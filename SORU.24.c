#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,remainder,sum=0,a=1;
	printf("Enter the decimal number : ");
	scanf("%d",&n);
	while(n>0)
	{
		remainder=n%2;
		sum=sum+remainder*a;
		n=n/2;
		a=a*10;
	}
	printf("Binary number : %d\n",sum);
	printf("Read right to left !!! ");
	
	
	return 0;
}
