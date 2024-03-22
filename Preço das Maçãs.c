#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	float precoMaca1, precoMaca2, precoCertoMaca;
	int quantidadeDeMacas;
	
	//Dados do usuário
	printf("Digite a quantidade de maçãs: ");
	scanf("%i", &quantidadeDeMacas);
	
	//Fórmulas
	precoMaca1 = quantidadeDeMacas * 1.30;
	precoMaca2 = quantidadeDeMacas * 1.00;
	
	//Resultados
	printf("---Resultados---");
	printf("\nQuantidade de maçãs: %i", quantidadeDeMacas);
	if(quantidadeDeMacas < 12){
		precoCertoMaca = precoMaca1;
	}
	else{
	precoCertoMaca = precoMaca2;
	}
	printf("\nTotal a pagar: %.2f", precoCertoMaca);
	
	return 0;
}
