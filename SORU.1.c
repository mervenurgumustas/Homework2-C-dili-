#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float area,perimeter,pi=3.14,r;
	printf("Enter the r of circle: \n");
	scanf("%f" ,&r);
	area = pi*r*r;
	printf("area %f dir\n" ,area);
	perimeter = 2*pi*r;
    printf("perimeter %f dir" ,perimeter);
	
	return 0;
}
