#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 10

/*Aluno: Guilherme Ajalla Ferreira; C�d: 02080236

1- Fa�a um programa capaz de cadastrar no m�ximo 10 alunos
Dado:
- C�digo
- Nome - m�ximo (50 caracteres)
- Idade

O programa dever� ser capaz de apresentar um menu com as seguintes op��es.

1- Cadastrar
2 - Listar
3 - Sair
*/

struct aluno {
	
	char nome[50];
	int codigo;
	int idade;
	int livre;
	};
void menu();
int cadastrar (struct aluno dados[]);

int main(){
	int op, p;
	struct aluno cadastro[TAM];
	//MENU
	do{
		printf("\n---------- Escolha uma opc�o ----------");
		printf("\n1 - Cadastrar funcion�rio.");
		printf("\n2 - Listar funcion�rio.");
		printf("\n3 - Sair.");
		printf("\n---------------------------------------");
		printf("\nDigite a op��o desejada: ");
		scanf("%i", &op);
		
		switch(op);
		
		case 1: 
		p = cadastrar(cadastro);
			if (p=<10){
				
			}	
			
	}while(op!=3);
	
}
int cadastrar (struct aluno dados[]){
	int cont=0;
	//Cod:
	printf("\nDigite o c�digo do aluno: \n");
	scanf(%i, &dados[cont].codigo);
	//Nome
	printf("\nDigite o nome do aluno: \n");
	gets(dados[cont].nome);
	fflush(stdin);
	//Idade
	printf("\nIdade: \n");
	scanf(%i, &dados[cont].idade);
	cont++
	return cont;
}
