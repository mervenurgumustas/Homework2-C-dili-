#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,reverse=0,temp,rem; 
    printf("Enter the number: ");
    scanf("%d", &n);
    
    temp = n;
    while(temp>0)
    {
        rem = temp%10;
        reverse = (reverse*10)+rem;
        temp = temp/10;
    }
    if(reverse == n)
        printf("n is a Palindrome number.");
    else
        printf("n is not a Palindrome number.");
	
	
	
	
	
	return 0;
}
