#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	float precoMaca1, precoMaca2, precoCertoMaca, precoTotal;
	int maca;
	
	//Dados do usu�rio
	printf("Digite quantas ma��s voc� quer comprar: ");
	scanf("%i", &maca);
	
	//C�lculos
	precoMaca1 = 1.30 * maca;
	precoMaca2 = 1.00 * maca;
	
	system("cls");
	
	//Resultados
	printf("--Resultados---");
	printf("\nMa��s compradas: %i", maca);
	
	if(maca < 12){
		precoCertoMaca = precoMaca1;
	}else{
		precoCertoMaca = precoMaca2;
	}
	
	printf("\nTotal a pagar: R$%.2f", precoCertoMaca);
	
	return 0;
	}
