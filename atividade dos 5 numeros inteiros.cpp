#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <limits.h>
#define TAM 5

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    //Variáveis
    int numeros[TAM], contadorPar = 0, contadorImpar = 0, contadorPositivo = 0, contadorNegativo = 0;
    int i = 0;
    
    //Dados do usuário
    for(i = 0; i < TAM; i++){
    	printf("Digite o %iº número: ", i + 1);
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
		printf("\nNúmeros pares: %i", contadorPar);
		printf("\nNúmeros ímpares: %i", contadorImpar);
		printf("\nNúmeros positivos: %i", contadorPositivo);
		printf("\nNúmeros negativos: %i", contadorNegativo);
		printf("\nNúmeros inseridos: %i", TAM);
		
		return 0;
	}
