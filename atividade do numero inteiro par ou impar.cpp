#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	unsigned int numero;
	
	//Dados do usu�rio
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%i", &numero);
	
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	if(numero % 2 == 0){
		printf("\nO n�mero digitado � par.");
	}else{
		printf("\nO n�mero digitado � �mpar.");
	}

	return 0;
	}
