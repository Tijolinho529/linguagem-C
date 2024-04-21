#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	unsigned int idade;
	
	//Dados do usuário
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	if(idade < 18 || idade > 65){
		printf("Você não é obrigado a votar");
	}else{
		printf("Você é obrigado a votar");
	}
	
	return 0;
	}
