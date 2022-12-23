#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,delta,x1,x2;
	printf("Enter the a :");
	scanf("%f" ,&a);
	printf("Enter the b :");
	scanf("%f" ,&b);
	printf("Enter the c :");
	scanf("%f" ,&c);
	delta=b*b-(4*a*c);
	if(delta<0)
		printf("There isn't solution ");
	else if(delta>0){
		x1= (-b+(pow(delta,1/2)))/(2*a);
		x2= (+b+(pow(delta,1/2)))/(2*a);
		printf("x1 %f dir\n" ,x1);
		printf("x2 %f dir" ,x2);
	}
	else if (delta==0){
		x1=x2=-b/(2*a);
		printf("x1 = x2 = %f dir" ,x1 = x2 );
	}	
	
	
	return 0;
}
