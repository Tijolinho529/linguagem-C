#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	unsigned int numero, antecessor, sucessor;
	
	//Dados do usu�rio
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%i", &numero);
	
	//C�lculos
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	printf("\nN�mero: %i", numero);
	printf("\nAntecessor: %i", antecessor);
	printf("\nSucessor: %i", sucessor);
	
	return 0;	
	}
