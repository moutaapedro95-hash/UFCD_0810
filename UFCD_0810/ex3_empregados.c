//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
////passo 1- criar a estrutura empregado
//struct Empregado {
//	char nome[50];
//	char cargo[50];
//	int idade;
//	float salario;
//};
//
////passo 2 - procedimento para ler as informaçoes
//void imprime_pessoa(struct Empregado registo){
//	printf("Nome: %s \n", registo.nome);
//	printf("Cargo: %s \n", registo.cargo);
//	printf("Idade: %d \n", registo.idade);
//	printf("Salario: %f \n", registo.salario);
//}
//void main() {
//	//declaraçao e criaçao de um vetor com 3 elementos baseado na estrutura empregado
//	struct Empregados registo_empregados[3];
//
//	//inserir valores dentro da estrutura registos baseado na struct empregado
//	for (int i = 0; i < 3; i++) {
//		//limpar os dados do teclado que estao em memoria
//		fflish(stdin);
//
//		//pedir os dados para preencher os valores da estrutura registo a registo
//		printf("\nDados do empregado %d: \n", i + 1);
//
//		printf("Nome: ");
//		scanf("%s", registo_empregados[i].nome);
//
//		printf("Cargo: ");
//		scanf("%s", registo_empregados[i].cargo);
//
//		printf("Idade: ");
//		scanf("%d", &registo_empregados[i].idade);
//
//		printf("Salario: ");
//		scanf("%f", &registo_empregados[i].salario);
//	}
//
//	//estrutura de repeticao para ler os valores dentro da estrutura 
//	//registos baseado no struct empregado
//	for (int i = 0; i < 3; i++) {
//		//mostrar a mensagem do registo que esta a percorrer
//		printf("\n\nRegisto do Empregado %d \n\n", i + 1);
//
//		//invocar o procedimento imprime_pessoa passando o registo
//		//atual que esta a percorrer e mostrar o mesmo padrao de dados
//		imprime_pessoa(registo_empregados[i]);
//	}
//}