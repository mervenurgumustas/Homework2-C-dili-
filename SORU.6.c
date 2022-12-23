#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,M;
	printf("Enter the  two number : \n");
	scanf("%d %d" ,&A,&B);
	M= (A>B) ? A : B ;
	while(1)
	{
		if(M%A ==0 && M%B ==0)
		{
			printf("%d ve %d LCM: %d",A,B,M);
			break;
		}
		++M;
	}
	
	
	 
	return 0;
    }
