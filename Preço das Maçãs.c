#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	float precoMaca1, precoMaca2, precoCertoMaca;
	int quantidadeDeMacas;
	
	//Dados do usu�rio
	printf("Digite a quantidade de ma��s: ");
	scanf("%i", &quantidadeDeMacas);
	
	//F�rmulas
	precoMaca1 = quantidadeDeMacas * 1.30;
	precoMaca2 = quantidadeDeMacas * 1.00;
	
	//Resultados
	printf("---Resultados---");
	printf("\nQuantidade de ma��s: %i", quantidadeDeMacas);
	if(quantidadeDeMacas < 12){
		precoCertoMaca = precoMaca1;
	}
	else{
	precoCertoMaca = precoMaca2;
	}
	printf("\nTotal a pagar: %.2f", precoCertoMaca);
	
	return 0;
}
