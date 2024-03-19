#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	int primeiroNumero, segundoNumero, soma, produto;
	float media;
	
	//Dados do usuário
	printf("Digite o primeiro número: ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%i", &segundoNumero);
	
	//Cálculos
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	media = (primeiroNumero + segundoNumero) / 2;
	
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	printf("\nPrimeiro número: %i", primeiroNumero);
	printf("\nSegundo número: %i", segundoNumero);
	printf("\nSoma: %i", soma);
	printf("\nProduto: %i", produto);
	printf("\nMédia: ", media);
	if(primeiroNumero == segundoNumero){
		printf("\nOs números são iguais");
	}else{ if(primeiroNumero > segundoNumero){
		printf("\nMaior valor: %i", primeiroNumero);
		printf("\nMenor valor: %i", segundoNumero);
	}else{ if(primeiroNumero < segundoNumero){
		printf("\nMaior valor: %i", segundoNumero);
		printf("\nMenor valor: %1", primeiroNumero);
	}
	}
	}
	
	return 0;
		
}
