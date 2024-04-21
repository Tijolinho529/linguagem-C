#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	unsigned int numero, antecessor, sucessor;
	
	//Dados do usuário
	printf("Digite um número inteiro positivo: ");
	scanf("%i", &numero);
	
	//Cálculos
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	printf("\nNúmero: %i", numero);
	printf("\nAntecessor: %i", antecessor);
	printf("\nSucessor: %i", sucessor);
	
	return 0;	
	}
