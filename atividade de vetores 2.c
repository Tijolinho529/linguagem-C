
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	int vetor[200];
	int i;
	
	//Dados do usuário
	printf("Digite os elementos do vetor:\n");
	for (i = 0; i < 200; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
		return 0;
}
	
	
	
	
