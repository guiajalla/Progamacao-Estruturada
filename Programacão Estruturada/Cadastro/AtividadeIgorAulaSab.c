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
os arrays necess�rios.*/

void preencher_string (char p_nome[][50]){

		for (int c=0; c<TAM; c++){

			strcpy(p_nome[c], "*");
		}
	return;
}

int posicao_livre (char p_posi[][50]){
    int r;

    for (int i=0; i<TAM;i++){
        r = strcmp(p_posi[i], "*");
        if (r==0){
            return i;
        }

        }
        return -1;
    }

void listagem_str (char exi_nome[][50] /*char exi_endere�o[][50]*/){
	int r;

	for(int i=0;i<TAM;i++){
        r = strcmp(exi_nome[i], "*");
        if (r!=0){
            printf("\nNome: %s", exi_nome[i]);
        }
	}
	return;
}

int main (){

	setlocale (LC_ALL, "Portuguese");
	 int tam[TAM];
	 char nome[TAM][50], endereco[TAM][50];
	 float salario[TAM];
	 int n_dependentes[TAM], ano_ad[TAM], op, p;

 	preencher_string(nome);
 	preencher_string(endereco);
	/*for (int i=0; i<TAM; i++){
        printf("%s", nome[i]);
	}*/
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
			    p = posicao_livre(nome);
			    if(p==-1)
                {
                    printf("\nN�o h� posi��es livres!");
                }
                else{
                    printf("\nDigite o nome do funcion�rio: ");
                    fflush(stdin);
                    gets(nome[p]);
                }
                break;

			case 2:
			    listagem_str(nome);

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

