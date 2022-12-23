#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,binaryNum,decimalNum=0,base=1,rem;
	printf("Enter a binary number with the combination of 0s an 1s : ");
	scanf("%d",&num);
	binaryNum=-num;
	while(num>0)
	{
		rem=num%10;
		decimalNum = decimalNum + rem*base;
		num = num/10;
		base = base*2;
	}
	printf("\n Decimal number : %d \t",decimalNum);
	
	
	return 0;
}
