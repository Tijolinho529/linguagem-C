#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	float precoMaca1, precoMaca2, precoCertoMaca, precoTotal;
	int maca;
	
	//Dados do usuário
	printf("Digite quantas maçãs você quer comprar: ");
	scanf("%i", &maca);
	
	//Cálculos
	precoMaca1 = 1.30 * maca;
	precoMaca2 = 1.00 * maca;
	
	system("cls");
	
	//Resultados
	printf("--Resultados---");
	printf("\nMaçãs compradas: %i", maca);
	
	if(maca < 12){
		precoCertoMaca = precoMaca1;
	}else{
		precoCertoMaca = precoMaca2;
	}
	
	printf("\nTotal a pagar: R$%.2f", precoCertoMaca);
	
	return 0;
	}
