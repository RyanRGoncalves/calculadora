#include <stdio.h>
#include <stdlib.h>
#include "ryanproj.h"

void main() {
	// Criação de variaveis
	int escolhaint;
	char escolhachar;
	float num[2];
	float resultado;

	// Decisão pra qual funcionalidade usar
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
				printf("Fora do nosso alcance.\n");
				break;
		}
		getchar(); // APARENTEMENTE o commando pra pegar char não funciona depois de um outro commando pra pegar input do usuario, o que significa que eu vou ter que usar isto para toda hora que eu quiser usar um "scaf("%c")" >:T 
		escolhachar = charqna("Deseja continuar a usar a calculadora?\nPressione q para sair, pressione outra etra para continuar.\n");
		if (escolhachar == 'q' || escolhachar == 'Q') {
			printf("Obrigado por utilizar a calculadora, tenha um bom dia.\n");
		} else {
			printf("Então escolha novamente qual funcionalidade deseja usar:");
		}
	}
	while (escolhachar != 'q' && escolhachar != 'Q');
}
