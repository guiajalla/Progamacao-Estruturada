#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#define TAM 5
/* Construa um programa para gerenciar informações relativas a um cadastro de funcionários de uma empresa. As informações a serem armazenadas são:

- Nome
- Endereço
- Salário
- Número de dependentes
- Ano de admissão

Utilize uma constante TAM para ajustar facilmente o número de elementos a serem cadastrados. Inicialize seu array de nomes com "*" para garantir que todas as posições estejam livres.
Seu programa deve ter as seguintes funcionalidades:

- INSERIR: Inserir dados de um funcionário (e apenas 1 funcionário por vez). Para isto você deve construir uma FUNCAO que receba o array de nomes e retorne a primeira posição livre que encontrar,
caso não haja uma posição livre, retornar -1.
- LISTAR: Devem ser apresentados todos os dados cadastrados, devidamente formatados, na tela. Esta listagem deve ser feita por uma FUNCAO void.
- PESQUISAR POR NOME: Deve ser feita uma consulta pelo nome do funcionário. Para isto construa uma função que receba o array de nomes e o nome a ser consultado e retorne sua posição,
ou -1 caso não encontre. Para o funcionário encontrado deve ser listado todas suas informações. Caso o funcionário não seja encontrado, apresentar mensagem para o usuário.
- EXCLUIR POR NOME: Utilizando a FUNCAO de pesquisa, permitir que o usuário exclua um funcionário pelo seu nome, caso o funcionário não seja encontrado, apresentar mensagem informando.
- FOLHA DE PAGAMENTO: Apresentar uma listagem com todos os funcionários, seus respectivos salários e o valor total gasto com a folha de pagamento. Para isto utilize uma FUNÇAO que receba
os arrays necessários.*/

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

void listagem_str (char exi_nome[][50] /*char exi_endereço[][50]*/){
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
		printf("\n---------- Escolha uma opcão ----------");
		printf("\n1 - Cadastrar funcionário.");
		printf("\n2 - Listar funcionário.");
		printf("\n3 - Pesquisar funcionário.");
		printf("\n4- Excluir funcionário.");
		printf("\n5 - Folha de Pagamento.");
		printf("\n6 - Sair.");
		printf("\n---------------------------------------");
		printf("\nDigite a opção desejada: ");
		scanf("%i", &op);

		switch(op){

			case 1:
			    p = posicao_livre(nome);
			    if(p==-1)
                {
                    printf("\nNão há posições livres!");
                }
                else{
                    printf("\nDigite o nome do funcionário: ");
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
				printf("\nVocê encerrou o programa!");
				break;

			default:
				printf("Opção inválida! Digite novamente: ");
				scanf("%i", op);
				break;
		}


	}while(op!=0);
	return 0;
}

