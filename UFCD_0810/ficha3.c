//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
////exercicio 1 - criar estruturas
//struct Carro {
//	char marca[25];
//	char modelo[25];
//	char cor[25];
//};
//
//struct Produto {
//	int ID;
//	char nome[25];
//	float preco;
//};
//
//void main() {
//	//declarar variaveis baseadas em estruturas e cada uma tem de ter pelo a possibiliddade de armazenar até 3 registos
//	struct Carro registo_carros[3];
//	struct Produto registo_produtos[3];
//
//	//inserir 3 registos de carros com uma estrutura de repeticao FOR
//	for (int i = 0; i < 3; i++) {
//		printf("Inserir o registo %d \n", i);
//
//		printf("Inserir o nome do carro: ");
//		scanf("%s", registo_carros[i].marca);
//		
//		printf("Inserir o modelo do carro: ");
//		scanf("%s", registo_carros[i].modelo);
//
//		printf("Inserir a cor do carro: ");
//		scanf("%s", registo_carros[i].cor);
//	}
//	
//	//estrutura de repeticao FOR para ler a informaçao
//	for (int i = 0; i < 3; i++) {
//		printf("*** Registo %d ***\n", i);
//		printf("Marca: %S \n", registo_carros[i].marca);
//		printf("Modelo: %s \n", registo_carros[i].modelo);
//		printf("Cor: %s \n", registo_carros[i].cor);
//	}
//
//	//exercicio para armazenar os produtos
//	for (int i = 0; i < 3; i++) {
//		printf("Insira o registo %d \n", i);
//
//		printf("Insira o ID do produto: ");
//		scanf("%d", &registo_produtos[i].ID);
//
//		printf("Insira o nome do produto: ");
//		scanf("%s", registo_produtos[i].nome);
//
//		printf("Insira o preco do produto: ");
//		scanf("%f", &registo_produtos[i].preco);
//	}
//
//	//estrutura de repeticao FOR para ler a informaçao
//	for (int i = 0; i < 3; i++) {
//		printf("*** Registo %d ***\n", i);
//		printf("ID: %d \n", registo_produtos[i].ID);
//		printf("Nome: %s \n", registo_produtos[i].nome);
//		printf("Preco: %f \n", registo_produtos[i].preco);
//}