#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	unsigned int idade;
	
	//Dados do usu�rio
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	if(idade < 18 || idade > 65){
		printf("Voc� n�o � obrigado a votar");
	}else{
		printf("Voc� � obrigado a votar");
	}
	
	return 0;
	}
