#include <stdio.h>
#include <locale.h>
#define TAM 3

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	float notas[TAM];
	
	//Dados do usuário
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite a %iª nota: ", i + 1);
		scanf("%f", &notas[i]);
	}
	printf("\n1ª nota: %.1f", notas[0]);
	printf("\n2ª nota: %.1f", notas[1]);
	printf("\n3ª nota: %.1f", notas[2]);
	
	return 0;
	}
