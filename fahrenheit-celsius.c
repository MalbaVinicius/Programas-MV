#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float F, C;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    
    C=(5*(F-32))/9;
    
    printf("\nTemperatura em Celsius: %.2f", C);
	return 0;
}
