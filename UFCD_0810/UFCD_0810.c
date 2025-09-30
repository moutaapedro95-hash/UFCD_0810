//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void exercicio1() {
//	//Declaracao do vetor com 5 elementos
//	int numeros[5];
//
//	//colocar os valores dentro do vetor( de forma manual)
//	numeros[0] = 12;
//	numeros[1] = 21;
//	numeros[2] = 7;
//	numeros[3] = 9;
//	numeros[4] = 31;
//
//	//mostrar os valores dentro do vetor (forma manul)
//	printf("Valor do indice 0: %d \n", numeros[0]);
//	printf("Valor do indice 1: %d \n", numeros[1]);
//	printf("Valor do indice 2: %d \n", numeros[2]);
//	printf("Valor do indice 3: %d \n", numeros[3]);
//	printf("Valor do indice 4: %d \n", numeros[4]);
//}
//
//void exercicio2() {
//	//declaraçao de um vetor com 5 elementos
//	int lista[5];
//
//	//estrutura de repeticao automatica FOR
//	//para automatizar o processo da obtençao da informaçao;
//	//parametro1: valor minimo a processar
//	//parametro2: condiçao maxima que pode atingir
//	//parametro3: incrementar +1 de cada vez que repetir a estrutura de repetiçao
//	for (int i = 0; i < 5; i++) {
//		//mostrar a mensagem do indice que esta a percurrer atualmente
//		printf("Valor do indice %d: ", i);
//		//ler o valor do teclado e colocar no indice do vetor atual
//		scanf("%d", &lista[i]);
//	}
//
//	//como ler o vetor e mostrar os valores dos indices
//	for (int i = 0; i < 5; i++) {
//		printf("Valor do indice %d: %d \n", i, lista[i]);
//	}
//}
//
//void exercicio3() {
//	//criaçao do vetor decimais com 6 elementos
//	float notas[6];
//
//	//declaraçao de variaveis
//	int positivos = 0;
//	int negativos = 0;
//
//	//estrutura de repetiçao FOR para pedir os valores decimais 
//	for (int i = 0; i < 6; i++) {
//		printf("Valor do indice %d: ", i);
//		//pedir o valor decimal ao utilizador para armazenar no vetor
//		scanf("%f", &notas[i]);
//	}
//
//	//estrutura de repetiçao para ler os valores do vetor
//	for (int i = 0; i < 6; i++) {
//		//estrutura de decisao dupla para avaliar se o valor que estiver a percurrer é positivo ou é negativo
//		if (notas[i] < 0) {
//			negativos++;//negativos = negativos + 1;(sao duas maneiras que se podem usar)
//		}
//		else {
//			positivos++; //positivos = positivos + 1;
//		}
//	}
//	//mostrar quantos positivos e negativos detetou
//	printf("Numero de positivos: %d e negativos: %d \n", positivos, negativos);
//}
//
//void exercicio4() {
//	//devlaraçao do vetor
//	int valores[5];
//
//	//estrutura de repetiçao para inserir valores no vetor 
//	for (int x = 0; x < 5; x++) {
//		//declaraçao de variavel so pra correr dentro do FOR
//		int valor = 0;
//
//		//estrutura de repetiçao do ... while que vai servir
//		//para verificar se os numeros sao diferentes de 1
//		do {
//			printf("Insira o valor para o indice %d: ", x);
//			scanf("%d", &valor);
//		} while (valor == 1);
//
//		//só depois de ultrapassar a condiçao do do...while
//		//é que vamos assumir o novo valor no vetor, ou seja,
//		//o valor introduzido foi diferente de 1
//		valores[x] = valor;
//	}
//
//	// estrutura de repetiçao para ler os valores no vetor
//	for (int x = 0; x < 5; x++) {
//		printf("Valor do indice %d é: %d", x, valores[x]);
//		}
//}
//
//void exercicio5() {
//	//declaraçao do vetor com 5 elementos
//	int numeros[5];
//
//	//estrutura de repetiçao For para inserir valores no vetor
//	for (int i = 0; i < 5; i++) {
//		printf("Insira o valor do indice %d: ", i);
//		scanf("%d", &numeros[i]);
//	}
//
//	//estrutura de repetiçao For para ler os valores 
//	for (int i = 0; i < 5; i++) {
//		printf("Valor do indice %d: %d \n", i, numeros[i]);
//
//		//estrutura de decisao simples para verificar se 
//		//o elemento do indice tem o valor 5
//		if (numeros[i] == 5) {
//			printf("Este indice tem o valor 5! \n");
//		}
//	}
//}
//
//
////exercicio6
////funcao para verificar se existe um numero igual no vetor
////e retornar 2 respostas:
////0 caso nao encontre nenhum numero repetido
////1 caso encontre numero repetido
//int verifica_numeros(int vetor[5], int valor) {
//	//estrutura de repetiçao pra ler os valores do vetor
//	for (int i = 0; i < 5; i++) {
//		//estrutura de repetiçao simples para verificar
//		//se existe o numero repetido dentro do vetor
//		if (vetor[i] == valor) {
//			return 1;
//		}
//	}
//
//	//se nao encontecer nada dentro da repeticao do For
//	//significa se nao encontrou nenhum numero repetido
//	return 0;
//}
//
////precedimento para calcular a media os numeros de um vetor
//void calcula_media(int vetor[5]) {
//	//percorrer todos os elementos do vetor e somar todos os valores 
//	float soma = 0;
//
//	//estrutura de repetiçao para percorrer o vetor que recebemos
//	for (int i = 0; i < 5; i++) {
//		//somar todos os numeros que existem no vetor
//		soma = soma + vetor[i];
//	}
//
//	//mostrar o resultado da media
//	printf("Média dos numeros no vetor: %f", soma / 5);
//}
//
//void exercicio6() {
//	//declaracao do valor com 5 elementos
//	int vetor[5];
//
//	//estrutura de repeticao FOR para inserir valores no vetor
//	for (int i = 0; i < 5; i++) {
//		//declarar variavel para armazenar o valor
//		int valor = 0;
//
//		//estrutura derepetiçao do...while para receber e depois avaliar
//		//o valor inserido no teclado e deve repetir o código se a funçao
//		//verifica_numeros retornar o valor 1
//		do {
//			//pedir a informaçao ao utilizador
//			printf("Insira o valor para o indice %d: ", i);
//			scanf("%d", &valor);
//		} while (verifica_numeros(vetor, valor) == 1);
//
//		//só depois de ultrapassar a condiçao do do,,, while
//		//é que vamos assumir o novo valor no vetor, ou seja
//		//o valor introduzido foi deferente de 1
//		//logo nao existe numero repetido
//		vetor[i] = valor;
//	}
//
//	//invocar o procedimento e mostrar a media
//	calcula_media(vetor);
//}
//
//void exercicio7() {
//	//declarar um array multidimensional (matriz)
//	//uma matiz é composta por linhas e colunas
//	int matriz[5][8];
//
//	//como a matiz tem linhas e colunas, precisamos de 2 estruturas
//	//de repetiçao para processar as mesmas
//
//	//para inserir valores na matriz
//	for (int i = 0; i < 5; i++) { //percorrer as linhas da matriz
//		for (int j = 0; j < 8; j++) { //percorrer as colunas da linha que esta a processar
//			//a interseçao do valor da linha i e a coluna j permite colocar o valor da celula
//			printf("Insira o valor da linha %d e da coluna %d: ", i, j);
//			scanf("%d", &matriz[i][j]);
//		}
//	}
//
//	//ler valores da matriz em causa
//	for (int i = 0; i < 5; i++) { //percorrer as linhas da matriz
//		for (int j = 0; j < 8; j++) { //percorrer as colunas da linha que esta a processar
//			printf("Valor na linha %d e coluna %d: %d \n", i, j, matriz[i][j]);
//		}
//	}
//}
//void main() {
	//exercicio1();
	//exercicio2();
	//exercicio3();
	//exercicio4();
	//exercicio5();
	//exercicio6();
	//exercicio7();
//}