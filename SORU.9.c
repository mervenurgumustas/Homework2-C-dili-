#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, originalNumber, remainder, result = 0, n = 0 ;
    printf("Bir tamsayý girin: ");
    scanf("%d", &number);
    originalNumber = number;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder= originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d n is Armstrong number.", number);
    else
        printf("%d n is not Armstrong number.", number);
	return 0;
}
