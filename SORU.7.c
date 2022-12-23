#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,n;
	int key;
	printf("Enter the number : ");
	scanf("%d" ,&n);
	printf("All prime numbers between 1 to %d are : \n",n);
	// 2 is first prime number 
	
	for(i=2;i<=n;i++)
	{
		key=1;
		for (j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				key =0;
				break;
			}
		}
		if(key ==1)
		{
			printf("%d\n",i);
		}
	}


	return 0;
}
