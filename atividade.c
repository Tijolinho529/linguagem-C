#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, media;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite a nota de portugu�s: ");
	scanf("%f", &primeiraNota);
	
	printf("Digite a nota de matem�tica: ");
	scanf("%f", &segundaNota);
	
	printf("Digite a nota de hist�ria: ");
	scanf("%f", &terceiraNota);
	
	//C�lculos
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;

	system("cls");
	
	//Resultados
	printf("---Resultados---");
	printf("\nNome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\nNota de portugu�s: %.1f", primeiraNota);
	printf("\nNota de matem�tica: %.1f", segundaNota);
	printf("\nNota de hist�ria: %.1f", terceiraNota);
	printf("\nM�dia: %.1f", media);
	
	if(media >= 7){
		printf("\nVoc� foi aprovado!!");
	}else{
		printf("\nVoc� foi reprovado!!");
	}
	
	return 0;
}

