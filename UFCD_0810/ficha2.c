//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void exercicio1() {
//	int num1 = 7;
//	int *num2;
//
//	//utilizar o & para copiar o endereço da variavel num1 para o apontador num2
//	num2 = &num1;
//
//	//mostrar as informaçoes da variavel e apontador
//	printf("Valor de num1: %d \n", num1);
//	printf("Valor de num2: %d \n", num2);
//	printf("Valor de num2 com *: %d \n", *num2);
//}
//
//void exercicio2() {
//	//declarar as variaveis
//	int valor1 = 5;
//	float valor2 = 10.5;
//	char letra = 'a';
//
//	//declarar variaveis do tipo ponteiros
//	int *ponteiro_valor1;
//	float *ponteiro_valor2;
//	char *ponteiro_letra;
//
//	//associaçao dos ponteiros para as variaveis (para copiar o endereço)
//	ponteiro_valor1 = &valor1;
//	ponteiro_valor2 = &valor2;
//	ponteiro_letra = &letra;
//
//	//mostrar os valores dos apontadores
//	printf("Valor do ponteiro_valor1: %d \n", *ponteiro_valor1);
//	printf("Valor do ponteiro_valor2: %f \n", *ponteiro_valor2);
//	printf("Valor do ponteiro_letra: %c \n", *ponteiro_letra);
//
//	//mudar os valores dos ponteiros nas variaveis
//	*ponteiro_valor1 = 15;
//	*ponteiro_valor2 = 31.2;
//	*ponteiro_letra = 'f';
//
//	//mostrar os valores dos apontadores
//	printf("Valor do ponteiro_valor1 depois da operacao: %d \n", valor1);
//	printf("Valor do ponteiro_valor2 depois da operacao: %f \n", valor2);
//	printf("Valor do ponteiro_letra depois da operacao: %c \n", letra);
//}
//
//void exercicio3() {
//	//declarar variaveis
//	int x = 5, y = 7;
//
//	//estrutura de decisao para verificar se o endereco de x é maior que y ou nao
//	if (&x > &y) {
//		printf("Valor de x: %d e valor de y: %d, logo x é maior", &x, &y);
//	}
//	else {
//		printf("Valor de x: %d e valor de y: %d, logo y é maior", &x, &y);
//	}
//}
//
////procedimento do exercicio 4
//void verifica_numeros(int v1, int v2) {
//	//estrutura de decisao para verificar qual é o maior
//	if (v1 > v2) {
//		printf("V1 é o maior!");
//	}
//	else if (v2 > v1) {
//		printf("V2 é o maior!");
//	}
//	else {
//		printf("Numeros iguais");
//	}
//}
//
//void exercicio4() {
//	int valor1 = 10, valor2 = 15;
//
//	//invocar o procedimento para verifcar qual dos numeros é o maior
//	verifica_numeros(valor1, valor2);
//
//}
//
////subprograma do exercicio5
//void recebe_valores(int *n1, int *n2) {
//	//mostrar valores no subprograma
//	printf("ANTES: Valor de n1: %d \n", n1);
//	printf("ANTES: Valor de n2: %d \n", n2);
//
//	*n1 = 30;
//	*n2 = 75;
//
//	//mostrar valores no subprograma
//	printf("DEPOIS: Valor de n1: %d \n", n1);
//	printf("DEPOIS: Valor de n2: %d \n", n2);
//}
//
//void exercicio5() {
//	int num1 = 5, num2 = 10;
//
//	//invocar subprograma para receber a informaçao
//	recebe_valores(&num1, &num2);
//
//	//mostrar valores no subprograma
//	printf("Valor de num1: %d \n", num1);
//	printf("Valor de num2: %d \n", num2);
//}
//
//void main() {
	//exercicio1();
	//exercicio2();
	//exercicio3();
	//exercicio4();
	//exercicio5();
//}



//typedef struct Atleta {
//	int ID;
//	char nome[25];
//	int idade;
//	float peso;
//} Atleta1, Atleta2, Atleta3;
//
//void main() {
//	//declaracao de uma variavel do tipo estrutura
//	Atleta1 atleta1 = {1, "Ana", 12, 55.2 };
//	Atleta2 atleta2 = { 2, "Marlon", 25, 65.5 };
//
//	struct Atleta atleta3;
//
//	//aceder aos dados da estrutura do altleta3
//	atleta3.ID = 3;
//	strcpy(atleta3.nome = "Luis");
//	atleta3.idade = 24;
//	atleta3.peso = 67.2;
//	 
//	//criar uma variavel com um numero de registos baseados em vetores
//	struct Atleta registos[100] = {
//		{1, "Ana", 12, 55.2},
//		{2, "Marlon", 25, 65.5},
//		{3, "Luis", 24, 67.2}
//	};
//}