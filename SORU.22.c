#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sum=0;
	for(i=100;i<=200;i++){
		if(i%9==0){
			printf("%d\n",i);
			sum += i;
		}
	}
	printf("sum : %d" ,sum);
	
	return 0;
}
