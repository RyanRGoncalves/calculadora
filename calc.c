#include <stdio.h>
#include <stdlib.h>
#include "ryanproj.h"

void main() {
	// Introdução
	int escolhaint;
	char escolhachar;
	float num[2];
	float resultado;

	scanf("%c",&escolhachar);

	printf("Bem vindo a calculadora, digite o número da operação para escolher-lá:");
	do {
		escolhaint = intqna("\n1. Adição\n2.Subtração\n3.Multiplicação\n4.Divisão\n\n");

		//Calculos
		switch (escolhaint) {
			case 1:
				printf("Escolheu a adição,\n");
				num[0] = (float) intqna("Primeiro número: ");
				num[1] = (float) intqna("Segundo número: ");
				resultado = adicao(num[0], num[1]);
				printf("A adição destes números são: %.2f\n",resultado);
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
		escolhachar = charqna("Deseja continuar a usar a calculadora?\n Pressione \"q\" para sair, \"p\" para continuar.");
		if(escolhachar == 'q' || escolhachar == 'Q') {
			printf("Então escolha novamente qual operação deseja utilizar.");
		}
	}
	while (escolhachar == 'q' || escolhachar == 'Q');
}
