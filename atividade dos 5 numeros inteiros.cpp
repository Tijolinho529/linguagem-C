#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <limits.h>
#define TAM 5

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    //Vari�veis
    int numeros[TAM], contadorPar = 0, contadorImpar = 0, contadorPositivo = 0, contadorNegativo = 0;
    int i = 0;
    
    //Dados do usu�rio
    for(i = 0; i < TAM; i++){
    	printf("Digite o %i� n�mero: ", i + 1);
    	scanf("%i", &numeros[i]);
    	
    	if(numeros[i] % 2 == 0){
    		contadorPar++;
		}else{
			contadorImpar++;
		}
		if(numeros[i] > 0){
			contadorPositivo++;
		}
		if(numeros[i] < 0){
			contadorNegativo++;
		}
	}
		
		system("cls");
		
		//Resultados
		printf("---Resultados---");
		printf("\nN�meros pares: %i", contadorPar);
		printf("\nN�meros �mpares: %i", contadorImpar);
		printf("\nN�meros positivos: %i", contadorPositivo);
		printf("\nN�meros negativos: %i", contadorNegativo);
		printf("\nN�meros inseridos: %i", TAM);
		
		return 0;
	}
