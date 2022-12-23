#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,end,sum;
	
	printf("Enter the number : ");
	scanf("%d",&end);
	
	for(i=1;i<=end;i++)
	{
		sum = 0;
		for(j=1;j<i;j++)
		{
			if(i % j == 0)
			{
				sum = sum +j;
			}
		}
		if(sum == i)
		{
			printf("%d, ",i);
		}
	}
	
	return 0;
}
