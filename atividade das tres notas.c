#include <stdio.h>
#include <locale.h>
#define TAM 3

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	float notas[TAM];
	
	//Dados do usu�rio
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite a %i� nota: ", i + 1);
		scanf("%f", &notas[i]);
	}
	printf("\n1� nota: %.1f", notas[0]);
	printf("\n2� nota: %.1f", notas[1]);
	printf("\n3� nota: %.1f", notas[2]);
	
	return 0;
	}
