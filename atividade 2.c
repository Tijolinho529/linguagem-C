#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	int primeiroNumero, segundoNumero, soma, produto;
	float media;
	
	//Dados do usu�rio
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%i", &segundoNumero);
	
	//C�lculos
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	media = (primeiroNumero + segundoNumero) / 2;
	
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	printf("\nPrimeiro n�mero: %i", primeiroNumero);
	printf("\nSegundo n�mero: %i", segundoNumero);
	printf("\nSoma: %i", soma);
	printf("\nProduto: %i", produto);
	printf("\nM�dia: ", media);
	if(primeiroNumero == segundoNumero){
		printf("\nOs n�meros s�o iguais");
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
