#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#define TAM 5
/* Construa um programa para gerenciar informa��es relativas a um cadastro de funcion�rios de uma empresa. As informa��es a serem armazenadas s�o:

- Nome
- Endere�o
- Sal�rio
- N�mero de dependentes
- Ano de admiss�o

Utilize uma constante TAM para ajustar facilmente o n�mero de elementos a serem cadastrados. Inicialize seu array de nomes com "*" para garantir que todas as posi��es estejam livres.
Seu programa deve ter as seguintes funcionalidades:

- INSERIR: Inserir dados de um funcion�rio (e apenas 1 funcion�rio por vez). Para isto voc� deve construir uma FUNCAO que receba o array de nomes e retorne a primeira posi��o livre que encontrar,
caso n�o haja uma posi��o livre, retornar -1.
- LISTAR: Devem ser apresentados todos os dados cadastrados, devidamente formatados, na tela. Esta listagem deve ser feita por uma FUNCAO void.
- PESQUISAR POR NOME: Deve ser feita uma consulta pelo nome do funcion�rio. Para isto construa uma fun��o que receba o array de nomes e o nome a ser consultado e retorne sua posi��o,
ou -1 caso n�o encontre. Para o funcion�rio encontrado deve ser listado todas suas informa��es. Caso o funcion�rio n�o seja encontrado, apresentar mensagem para o usu�rio.
- EXCLUIR POR NOME: Utilizando a FUNCAO de pesquisa, permitir que o usu�rio exclua um funcion�rio pelo seu nome, caso o funcion�rio n�o seja encontrado, apresentar mensagem informando.
- FOLHA DE PAGAMENTO: Apresentar uma listagem com todos os funcion�rios, seus respectivos sal�rios e o valor total gasto com a folha de pagamento. Para isto utilize uma FUN�AO que receba
os arrays necess�rios.
Para isto todas as informa��es relativas ao funcion�rio devem estar agrupadas em uma mesma struct. Al�m disso, crie um campo auxiliar do 
tipo int chamado "livre" para auxiliar voc� no controle das posi��es livres e ocupadas. Este campo deve ser inicializado, no in�cio de seu programa, 
com o valor 1, indicando que todas as posi��es de array est�o vazias. Com isto sua l�gica de manipula��o dos dados deve estar vinculada a este novo 
campo.*/

struct funcionario {
	char nome[50];
	char endereco[250];
	int n_dependentes;
	float salario;
	int ano_ad;
	int livre;
};
void inicializa (struct funcionario dados[]);
int posicao_livre (struct funcionario p_livre[]);
int main (){

	setlocale (LC_ALL, "Portuguese");
	int op, i, p;
	struct funcionario cadastro[TAM];
	
	
	// Preencher a posi��o livre
 	inicializa(cadastro);
 	// MENU
	do {
		printf("\n---------- Escolha uma opc�o ----------");
		printf("\n1 - Cadastrar funcion�rio.");
		printf("\n2 - Listar funcion�rio.");
		printf("\n3 - Pesquisar funcion�rio.");
		printf("\n4- Excluir funcion�rio.");
		printf("\n5 - Folha de Pagamento.");
		printf("\n6 - Sair.");
		printf("\n---------------------------------------");
		printf("\nDigite a op��o desejada: ");
		scanf("%i", &op);

		switch(op){

			case 1:
			  	p = posicao_livre(cadastro);
			  	if (p==-1){
			  		printf("\nTodas as op��es est�o ocupadas!");
				  }
				else {
					printf ("\nDigite o nome do funcion�rio: ");
					fflush(stdin);
					gets(cadastro[p].nome);
					
					printf("Digite o endere�o: ");
					fflush(stdin);
					gets(cadastro[p].endereco);
					
					printf("Sal�rio: ");
					scanf("%f", &cadastro[p].salario);
					
					printf("N�mero de dependentes: ");
					scanf("%i", &cadastro[p].n_dependentes);
					
					printf("Ano de admiss�o: ");
					scanf("%i", &cadastro[p].ano_ad);
					
					cadastro[p].livre=0;
				}
                break;

			case 2:
			    

				break;

			case 3:
				break;

			case 4:
				break;

			case 5:
				break;

			case 6:
				printf("\nVoc� encerrou o programa!");
				break;

			default:
				printf("Op��o inv�lida! Digite novamente: ");
				scanf("%i", op);
				break;
		}

	}while(op!=0);
	return 0;
}
void inicializa (struct funcionario dados[]){
	int i;
	for (i=0;i<TAM;i++){
		dados[i].livre=1;
	}
	return;
}
int posicao_livre (struct funcionario p_livre[]){
	int i;
	for (i=0;i<TAM;i++){
		if (!p_livre[i].livre){
			return i;
		}
	}
	return -1;
}
void listar (struct funcionario mostrar){
}
