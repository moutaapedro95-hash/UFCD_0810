//// instrução para permitir ultrapassar a mensagem de erro
//
//// do scanf()
//
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//struct Animal {
//	int ID;
//	char nome[25];
//	int idade;
//	float peso;
//};
//
//struct Veterinario {
//	int ID;
//	char nome[25];
//	int idade;
//	char cidade[25];
//};
//
//void Mostra_Animal(struct Animal registo) {
//	printf("ID: %d \n", registo.ID);
//	printf("Nome: %s \n", registo.nome);
//	printf("Idade: %d \n", registo.idade);
//	printf("Peso: %f \n", registo.peso);
//}
//
//void Mostrar_Veterinario(struct Veterinario registo) {
//	printf("Veterinario \n");
//	printf("ID: %d \n", registo.ID);
//	printf("Nome: %s \n", registo.nome);
//	printf("Idade: %d \n", registo.idade);
//	printf("Cidade: %s \n", registo.cidade);
//}
//
//void exercicio1() {
//	//declaraçao de uma variavel do tipo estrutura baseado no animal
//	struct Animal registos_animais[3];
//
//	//informaçoes com uma estrutura de repetiçao
//	for (int i = 0; i < 3; i++) {
//		/*int id = 0, idade = 0;
//		float peso = 0;
//		char nome[25];*/
//
//		printf("Inserir Registo %d \n", i);
//
//		printf("Insira o ID: ");
//		scanf("%d", &registos_animais[i].ID);
//
//		printf("Insira o nome: ");
//		scanf("%s", registos_animais[i].nome);
//
//		printf("Insira a idade: ");
//		scanf("%d", &registos_animais[i].idade);
//
//		printf("Insira o peso: ");
//		scanf("%f", &registos_animais[i].peso);
//	}
//
//	//ler a informaçao da estrutura registos_animais
//	for (int i = 0; i < 3; i++) {
//		Mostra_Animal(registos_animais[i]);
//	}
//}
//
//
//void exercicio2() {
//	struct Veterinario registos_veterinarios[3];
//	for (int i = 0; i < 3; i++) {
//		printf("Insira os dados do veterinario %d \n", i);
//
//		printf("Insira o ID: ");
//		scanf("%d", &registos_veterinarios[i].ID);
//
//		printf("Insira o Nome: ");
//		scanf("%s", registos_veterinarios[i].nome);
//
//		printf("Insira a Idade: ");
//		scanf("%d", &registos_veterinarios[i].idade);
//
//		printf("Insira a Cidade: ");
//		scanf("%s", registos_veterinarios[i].cidade);
//	}
//	printf("Lista de Veterinarios \n");
//	for (int i = 0; i < 3; i++) {
//		Mostrar_Veterinario(registos_veterinarios[i]);
//	}
//}
//
//void main() {
//	//exercicio1();
//	exercicio2();
//
//}
