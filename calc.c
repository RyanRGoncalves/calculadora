#include <stdio.h>
#include <stdlib.h>

void main() {
	// Introdução
	int escolha;
	printf("Bem vindo a calculadora, digite o número da operação para escolher-lá:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n\n");
	scanf("%d",&escolha);
	
	//Calculos
	switch (escolha) {
		case 1:
			printf("Adição");
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
}
