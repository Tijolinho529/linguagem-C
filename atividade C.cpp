#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	char banda[3][200];
	char integrantes[3][5][200];
	
	//Dados do usu�rio
	int i;
	int j;
	
	for(i = 0; i < 3; i++){
		printf("\nDigite o nome da %i� banda: ", i + 1);
		scanf("%s", &banda[i]);
		
		for(j = 0; j < 5; j++){
			printf("\nDigite o nome do %i� integrante desta banda: ", j + 1);
			scanf("%s", &integrantes[j]);
		}
	}
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	for(i = 0; i < 3; i++){
		printf("\n%i� banda: %s", i + 1, banda[i]);
		
		for(j = 0; j < 5; j++){
			printf("\n%i� integrante: %s", i + 1, integrantes[j]);
		}
	}
	return 0;
	}
