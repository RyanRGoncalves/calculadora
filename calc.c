#include <stdio.h>
#include <stdlib.h>

void main() {
	int escolha;
	printf("Bem vindo a calculadora, digite o número da operação para escolher-lá:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n\n");
	scanf("%d",&escolha);
	printf("Voçe escolheu a opção %d\n",escolha);
}
