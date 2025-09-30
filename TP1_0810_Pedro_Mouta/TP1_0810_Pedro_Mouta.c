// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	int numero[4];

	for (int i = 0; i < 4; i++) {
		printf("valor do indice %d: ", i);
		scanf("%d", &numero[i]);
	}
	for (int i = 0; i < 4; i++) {
		printf("valor do indice %d: %d \n", i, numero[i]);
	}
}

void exercicio2() {
	int numeros[5];
	int pares = 0;
	int impares = 0;

	for (int i = 0; i < 5; i++) {
		printf("valor do indice %d: ", i);
		scanf("%d", &numeros[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (numeros[i] % 2 == 0) {
			pares++;
		}
		else {
			impares++;
		}
	}
	printf("Numeros pares: %d e impares: %d \n", pares, impares);
}

void exercicio3() {
	int numeros[6];
	int alvos = 0;
	int encontrado = 0;

	for (int i = 0; i < 6; i++) {
		printf("Insira o valor do indice %d: ", i);
		scanf("%d", &numeros[i]);
	}
	printf("Qual o numero que deseja procurar no vetor: ");
	scanf("%d", &alvos);

	for (int i = 0; i < 6; i++) {
		if (numeros[i] == alvos) {
			if (encontrado) {
				printf("Numero encontrado nas posicoes: \n");
			}
			encontrado = 1;
			printf("Indice: %d Posicao: %d \n", i, i + 1);
		}
	}
	if (!encontrado) {
		printf("O numero %d nao doi encontrado no vetor! \n", alvos);
	}
}

void main() {
	//exercicio1();
	//exercicio2();
	exercicio3();

}