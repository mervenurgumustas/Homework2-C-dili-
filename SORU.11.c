#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,sum=0,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("%d n is a Perfect Number.");
	}
	else
	{
		printf("%d n is not a Perfect Number");
	}
	
	
	
	
	return 0;
}
