// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	//inicializar um ficheiro e colocar o modo de abertura
	FILE* fp;
	char linha[1000];//variavel para armazenar as linhas lidas do ficheiro

	//a funçao fopen tem 2 parametros
	//parametro1 - localizacao do ficheiro
	//parametro 2 - modo de abertura
	//fp = fopen("fichero1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		printf("Informaçao do ficheiro: \n\n");

		//estrutura de repetiçao, pois a funçao fgets le o conteudo linha a linha
		while (fgets(linha, 1000, fp) != NULL) {//enquanto nao atingir o fim do ficheiro
			printf("%s", linha);
		}
	}
}

void exercicio2() {
	//inicializar um ficheiro e colocar o modo de abertura
	FILE* fp;
	char linha[1000];//variavel para armazenar as linhas lidas do ficheiro

	//a funçao fopen tem 2 parametros
	//parametro1 - localizacao do ficheiro
	//parametro 2 - modo de abertura
	//fp = fopen("fichero1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "w")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		char texto[50] = "Onde esta o texto? \n sera que quebrou?";
		//funçao fputs tem 2 parametros: variavel e ficheiro
		fputs(texto, fp);
	}
	//fechar o ficheiro que foi aberto
	fclose(fp);
}

void exercicio3() {
	//inicializar um ficheiro e colocar o modo de abertura
	FILE* fp;
	char linha[1000];//variavel para armazenar as linhas lidas do ficheiro

	//a funçao fopen tem 2 parametros
	//parametro1 - localizacao do ficheiro
	//parametro 2 - modo de abertura
	

	if ((fp = fopen("ficheiro1.txt", "w+")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		//escrever uma frase dentro do ficheiro com fputs
		fputs("Isto e uma experiencia utilizando o tema de acesso a informaçao de forma direta", fp);

		//funçao fseek - serve para posicionar o cursor dentro do ficheiro
		//parametro 1 - qual o ficheiro que estao a trabalhar
		//parametro 2 - de qual caracter deve começar a ler a informalao 		
		//parametro 3 - onde coloca o curso seek_set (inicio), seek_cur(numa posiçao a nossa escolha), seek_end(fim)
		fseek(fp, 0, SEEK_SET);

		//funçao fgets serve para obter uma quantidade de informaçao
		//parametro1 - qual a variavel que vai armazenar a informaçao da linha
		//parametro2 - quantos caracteres devera ler a partir do fseek
		//parametro 3 - qual o ficheiro que estao a trabalhar
		fgets(linha, 30, fp);
		printf("%s \n", linha);

		fseek(fp, 0, SEEK_CUR);
		fgets(linha, 30, fp);
		printf("%s \n", linha);

		//ler a informaçao a partir do final do ficheiro
		fseek(fp, -7, SEEK_END);
		fgets(linha, 30, fp);
		printf("%s \n", linha);

		fseek(fp, 0, SEEK_CUR);
		fgets(linha, 10, fp);
		printf("%s \n", linha);

		////funcao fseek serva para posicionar o ficheiro
		////parametro 1 - indicar qual o ficheiro 
		////parametro 2 - quantos caracteres vamos ler
		////parametro 3 - qual o funcionamento(inicio, especifico ou fim)
		//fseek(fp, 0, SEEK_SET);

		////funçao fgets para obter os dados
		//fgets(linha, 35, fp);

		////mostrar o que foi obtido
		//printf("Antes de usar a funcao fseek : \n %s \n\n", linha);

		////utilizar a funcao fseek para colocar a leitura da informacao no caracter 21
		//fseek(fp, 21, SEEK_SET);
		////funcao fgets para obter a informaçao
		//fgets(linha, 10, fp);
		////exibir a informaçao
		//printf("Depois de usar o metodo SEEK_SEt a partir do caracter 21: \n %s \n\n", linha);

		////utilizar o fseek e retirar 10 caracteres
		//fseek(fp, -10, SEEK_CUR);
		//fgets(linha, 100, fp);
		//printf("Depois de usar o SEEK_CUR e retirar 10 caracteres na posiçao atual: \n %s \n\n", linha);
	}
}

void main() {
	//exercicio1();
	//exercicio2();
	exercicio3();
}