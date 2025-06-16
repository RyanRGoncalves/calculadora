#include <stdio.h>
#include <stdlib.h>
#include "ryanproj.h"

void main() {
	// Introdução
	int escolha;
	float num1;
	float num2;
	float resultado;
	printf("Bem vindo a calculadora, digite o número da operação para escolher-lá:");
	do {
		printf("\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n\n");
		scanf("%d",&escolha);

		//Calculos
		switch (escolha) {
			case 1:
				printf("Coloque o primeiro número.\n");
				scanf("%d",&num1);
				printf("Coloque o segundo número.\n");
				scanf("%d",&num2);
				resultado = adicao(num1, num2);
				printf("A adição destes números são: %d\n",resultado);
				break;
			case 2:
				printf("Subtração");
				break;
			case 3:
				printf("Multiplicação");
				break;
			case 4: 
				printf("Divisão");
				break;
			default:
				printf("Fora do nosso alcance.");
				break;
		}
		printf("Deseja calcular novamente?\n0. Não\n1. Sim");
		scanf("%d",&escolha);
		if(escolha == 1) {
			printf("Então escolha novamente qual operação deseja utilizar.");
		}
	}
	while (escolha == 1);
}
