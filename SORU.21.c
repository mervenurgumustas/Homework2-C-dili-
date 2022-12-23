#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int t=1,sum=0,c=1;
	printf("Enter the number : ");
	scanf("%d" ,&n);
	
	while(c<=n){
		if(c==n){
			sum+=t;
			printf("%d= ",t);
			t=(t*10)+1;
		}
		else if (c==1){
			sum+=t;
			t=(t*10)+1;
			printf("1 + ");
		}
		else {
			sum+=t;
			printf("%d + ",t);
			t=(t*10)+1;
		}
		c++;
	}
	printf("Sum : %d",sum);
	return 0;
}
