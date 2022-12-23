#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int rows, yaz=1,i,space,j;
    
    printf("Satir Sayisi Girin: ");
    scanf("%d", &rows);
    
    for (i=0; i<rows; i++) {
    	
        for (space=1; space <= rows-i; space++)
            printf("  ");
            
        for (j=0; j<=i; j++) {
            if (j==0 || i==0)
                yaz = 1;
            else
                yaz=yaz*(i-j+1)/j;
            printf("%4d", yaz);
        }
        
        printf("\n");
    }

	
	return 0;
}
