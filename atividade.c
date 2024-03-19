#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, media;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite a nota de português: ");
	scanf("%f", &primeiraNota);
	
	printf("Digite a nota de matemática: ");
	scanf("%f", &segundaNota);
	
	printf("Digite a nota de história: ");
	scanf("%f", &terceiraNota);
	
	//Cálculos
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;

	system("cls");
	
	//Resultados
	printf("---Resultados---");
	printf("\nNome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\nNota de português: %.1f", primeiraNota);
	printf("\nNota de matemática: %.1f", segundaNota);
	printf("\nNota de história: %.1f", terceiraNota);
	printf("\nMédia: %.1f", media);
	
	if(media >= 7){
		printf("\nVocê foi aprovado!!");
	}else{
		printf("\nVocê foi reprovado!!");
	}
	
	return 0;
}

