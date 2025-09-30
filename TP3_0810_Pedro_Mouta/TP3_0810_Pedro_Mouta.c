// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	FILE * fp;
	char texto[1000];

	//abrir ficheiro para leitura
	fp = fopen("ficheiro_tp3.txt", "r");

	if (fp == NULL) {
		printf("Erro ao ler a informacao do ficheiro! \n");
		exit(1);
	}
	else {
		printf("ficheiro aberto com sucesso! \n");

		while (fgets(texto, 1000, fp) == NULL) {
			printf("%s", texto);
		}
		fclose(fp);
	}
}

void exercicio2() {
	FILE * fp;
	fp = fopen("ficheiro_tp3_escrita.txt", "w");

	if (fp == NULL) {
		printf("Erro a criar o ficheiro");
		exit(1);
	}
	else {
		char texto[100] = "Este é um exemplo de escrita no ficheiro TP3.";
		fputs(texto, fp);
		fclose(fp);
	}
}

void exercicio3() {
	FILE * fp;
	fp = fopen("ficheiro_tp3_escrita.txt", "a");

	if (fp == NULL) {
		printf("Erro ao abrir o ficheiro \n");
	}
	else {
		char expressao[150] = "\nAgora acrescentei mais uma frase ao ficheiro para completar o exercicio.";
		fputs(expressao, fp);
		fclose(fp);
	}
}

void main() {
	//exercicio1();
	exercicio2();
	//exercicio3();
}