#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	char banda[3][200];
	char integrantes[3][5][200];
	
	//Dados do usuário
	int i;
	int j;
	
	for(i = 0; i < 3; i++){
		printf("\nDigite o nome da %iº banda: ", i + 1);
		scanf("%s", &banda[i]);
		
		for(j = 0; j < 5; j++){
			printf("\nDigite o nome do %iº integrante desta banda: ", j + 1);
			scanf("%s", &integrantes[j]);
		}
	}
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	for(i = 0; i < 3; i++){
		printf("\n%iº banda: %s", i + 1, banda[i]);
		
		for(j = 0; j < 5; j++){
			printf("\n%iº integrante: %s", i + 1, integrantes[j]);
		}
	}
	return 0;
	}
