#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	unsigned int numero;
	
	//Dados do usuário
	printf("Digite um número inteiro positivo: ");
	scanf("%i", &numero);
	
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	if(numero % 2 == 0){
		printf("\nO número digitado é par.");
	}else{
		printf("\nO número digitado é ímpar.");
	}

	return 0;
	}
