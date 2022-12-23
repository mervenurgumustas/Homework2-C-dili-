#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c,result=1;
	for(c=1;c<=4;c++)
	result*=2;
	printf("result: %d",result);	
	return 0;
}
