// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

struct Empresa {
	int NIF;
	char Nome[25];
	char Tipo_Empresa[25];
	int Ano_Fundacao;
	int Qtd_Trabalhadores;
};

struct Funcionario {
	int ID;
	char Nome[25];
	char Cargo[50];
	float Salario;
};

void Mostrar_Empresa(struct Empresa registo) {
	printf("\n***** Empresa *****\n");
	printf("NIF: %d \n", registo.NIF);
	printf("Nome: %s \n", registo.Nome);
	printf("Tipo de Empresa: %s \n", registo.Tipo_Empresa);
	printf("Ano da Fundacao: %d \n", registo.Ano_Fundacao);
	printf("Quantidade de Trabalhadores: %d \n", registo.Qtd_Trabalhadores);
}

void Mostrar_Funcionario(struct Funcionario registo) {
	printf("\n***** Funcionario *****\n");
	printf("ID: %d \n", registo.ID);
	printf("Nome: %s \n", registo.Nome);
	printf("Cargo: %s \n", registo.Cargo);
	printf("Salario: %f \n", registo.Salario);
}

void exercicio1() {
	struct Empresa registo_empresas[4];

	for (int i = 0; i < 4; i++) {
		printf("Empresa %d: \n", i + 1);
		printf("NIF: ");
		scanf("%d", &registo_empresas[i].NIF);

		printf("Nome: ");
		scanf("%s", registo_empresas[i].Nome);

		printf("Tipo da Empresa: ");
		scanf("%s", registo_empresas[i].Tipo_Empresa);

		printf("Ano da Fundacao: ");
		scanf("%d", &registo_empresas[i].Ano_Fundacao);

		printf("Quantidade de Trabalhadores: ");
		scanf("%d", &registo_empresas[i].Qtd_Trabalhadores);
	}
	printf("Empresas Registadas");
	for (int i = 0; i < 4; i++) {
		Mostrar_Empresa(registo_empresas[i]);
	}
}

void exercicio2() {
	struct Funcionario registo_funcionarios[3];

	for (int i = 0; i < 3; i++) {
		printf("Funcionario %d: \n", i + 1);
		printf("ID: ");
		scanf("%d", &registo_funcionarios[i].ID);

		printf("Nome: ");
		scanf("%s", registo_funcionarios[i].Nome);

		printf("Cargo: ");
		scanf("%s", registo_funcionarios[i].Cargo);

		printf("Salario: ");
		scanf("%f", &registo_funcionarios[i].Salario);
	}
	printf("Funcionarios Registados");
	for (int i = 0; i < 3; i++) {
		Mostrar_Funcionario(registo_funcionarios[i]);
	}
}

int main() {
	int opcao;

	do {
		printf("***** MENU *****\n");
		printf("1 - Exercicio 1 (Empresas) \n");
		printf("2 - Exercicio 2 (Funcionarios) \n");
		printf("0 - Sair \n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			exercicio1();
			break;
		case 2:
			exercicio2();
			break;
		case 0:
			printf("A encerrar o programa \n");
			break;
		default:
			printf("Opcao invalida! \n");
		}
	} while (opcao != 0);
	return 0;
}