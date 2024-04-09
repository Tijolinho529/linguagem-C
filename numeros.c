#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#define TAM 5

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	int numeros[TAM], maiorNumero = INT_MIN, menorNumero = INT_MAX;
	int i;
    
    //Dados do usuário
    for (i = 0; i < 5; i++){
    	printf("Digite o %dº número: ", i + 1);
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
	printf("\n%dº número: %i", i + 1, numeros[i]);
}
	printf("\nMaior número: %i", maiorNumero);
	printf("\nMenor número: %i", menorNumero);
	
	return 0;
}
     
