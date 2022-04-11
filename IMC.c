#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura, peso;
    int conta;
    
    printf("Digite a altura em m: ");
    scanf("%f", &altura);
    printf("Digite a massa em kg: ");
    scanf("%f", &peso);
    
    conta=altura/(peso*peso);
    
    printf("\nIMC: %d", conta);
	return 0;
}
