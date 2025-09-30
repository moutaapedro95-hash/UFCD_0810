//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Data {
//	int dia;
//	int mes;
//	int ano;
//};
//
//union um_valor {
//	int val_int;
//	float val_long;
//	double val_double;
//};
//
//struct Morada {
//	char rua[150];
//	int n_porta;
//	char cidade[100];
//	char distrito[50];
//	char concelho[50];
//};
//
//struct Pessoa {
//	int ID;
//	char PNome[25];
//	char UNome[25];
//	//ligar a estrutura Data dentro da pessoa
//	struct Data DataNasc;
//
//	//ligar uniao dentro da pessoa
//	union um_valor Peso;
//
//	struct Morada morada
//};
//
//void main() {
//	//criar uma variavel estruturada com base na Pessoa
//	struct Pessoa p1 = { 1, "Pedro", "Mouta", {12,11,1995} };
//
//	//mostrar os dados da Pessoa (com estrutura ligada)
//	printf("ID: %d \n", p1.ID);
//	printf("Primeiro Nome: %s \n", p1.PNome);
//	printf("Ultimo Nome: %s \n", p1.UNome);
//
//	printf("Data Nascimento: %d-%d-%d \n", p1.DataNasc.dia, p1.DataNasc.mes, p1.DataNasc.ano);
//
//	//criar outra variavel estrutura com base na Pessoa
//	struct Pessoa p2;
//
//	//vamos pedir os dados pelo teclado
//	printf("Insira o ID: ");
//	scanf("%d", &p2.ID);
//
//	printf("Insira o Primeiro Nome: ");
//	scanf("%s", p2.PNome);
//
//	printf("Insira o Ultimo Nome: ");
//	scanf("%s", p2.UNome);
//
//	printf("Insira o Dia de Nascimento: ");
//	scanf("%d", &p2.DataNasc.dia);
//	printf("Insira o Mes de Nascimento: ");
//	scanf("%d", &p2.DataNasc.mes);
//	printf("Insira o Ano de Nascimento: ");
//	scanf("%d", &p2.DataNasc.ano);
//
//	//inserir valores fixos da uniao
//	p2.Peso.val_int = 15;
//	p2.Peso.val_double = 18.5;
//
//	//mostrar os dados da Pessoa(com estrutura ligada)
//	printf("ID: %d \n", p2.ID);
//	printf("Primeiro Nome: %s \n", p2.PNome);
//	printf("Ultimo Nome: %s \n", p2.UNome);
//
//	printf("Data Nascimento: %d-%d-%d \n", p2.DataNasc.dia, p2.DataNasc.mes, p2.DataNasc.ano);
//
//	printf("Peso val_int: %d \n", p2.Peso.val_int);
//	printf("Peso val_long: %f \n", p2.Peso.val_long);
//	printf("Peso val_double: %f \n", p2.Peso.val_double);
//
//	p2.morada.cidade;
//}