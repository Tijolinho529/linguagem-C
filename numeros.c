#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#define TAM 5

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	int numeros[TAM], maiorNumero = INT_MIN, menorNumero = INT_MAX;
	int i;
    
    //Dados do usu�rio
    for (i = 0; i < 5; i++){
    	printf("Digite o %d� n�mero: ", i + 1);
    	scanf("%i", &numeros[i]);
    	
    	if (numeros[i] > maiorNumero) {
    		maiorNumero = numeros[i];
		}
		if (numeros[i] < menorNumero) {
			menorNumero = numeros[i];
		}
	}
	system("cls");
	//Exibindo resultados
	printf("---Resultados---");
	for (i = 0; i < 5; i++){
	printf("\n%d� n�mero: %i", i + 1, numeros[i]);
}
	printf("\nMaior n�mero: %i", maiorNumero);
	printf("\nMenor n�mero: %i", menorNumero);
	
	return 0;
}
     
