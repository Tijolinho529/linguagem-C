#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	char disciplinas[3][200];
	float notas[3][2];
	float media[3], soma = 0;
	
	//Dados do usuário
	int i;
	int j;
	
	for(i = 0; i < 3; i++){
		printf("Escreva a disciplina: ", i + 1);
		scanf("%s", &disciplinas[i]);
		
		for(j = 0; j < 2; j++){
		
			printf("Escreva as suas notas: ", j + 1);
			scanf("%f", &notas[i][j]);
			soma += notas[i][j];
			
	//Cálculos
	
	media[i] = soma / j;
	soma = 0;
	fflush(stdin);
		}	
	}
	system("cls");
	//Resultados
	printf("---Resultados---");
	for(i = 0; i < 3; i++){
		printf("\n%iº disciplina: %.1s", i + 1, disciplinas[i]);
		
		for(j = 0; j < 2; j++){
			printf("\n%iº nota: %.1f", j + 1, notas[i][j]);
			
			printf("\nMédia: %.1f", media[i]);
			printf("\n");
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
