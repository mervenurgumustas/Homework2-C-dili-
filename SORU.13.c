#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int remainder,fact,count,num,temp,sum;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	temp=num;
	while(num)
	{
		remainder=num%10;
		count=1;
		fact = 1;
		while(count <=remainder)
		{
			fact=fact*count;
			count++;
		}
		printf("Factorial of %d is %d\n",remainder,fact);
		sum = sum + fact;
		num=num/10;
	}
	if(temp==sum)
	{ 
		printf("%d is Strong number\n",temp);
	}
	else
	{
		printf("%d is not Strong number\n",temp);
	}
	return 0;
}
