#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	float valor, valorDesconto;
	
	//Dados do usu�rio
	printf("Digite o valor do produto: ");
	scanf("%f", &valor);
	
	//C�lculos
	valorDesconto = valor - (valor * 0.1);
	
	system("cls");
	
	//Resultados
	printf("---Resultados---");
	printf("\nValor do produto: R$ %.2f", valor);
	printf("\nValor com desconto: R$ %.2f", valorDesconto);
	
	return 0;
	}
