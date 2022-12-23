#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,i,gcd,lcm;
	printf("Enter the value A and B \n");
	scanf("%d %d" ,&A,&B);
	
	for(i=1;i<=A && i<=B; i++)
	{
		if(A%i==0 && B%i==0)
		gcd=i;
	}
	lcm=(A*B)/gcd;
	printf(" The LCM of two numbers %d and %d is: %d",A,B,lcm);	
	return 0;
}
