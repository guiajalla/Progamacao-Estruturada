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
os arrays necessários.
Para isto todas as informações relativas ao funcionário devem estar agrupadas em uma mesma struct. Além disso, crie um campo auxiliar do 
tipo int chamado "livre" para auxiliar você no controle das posições livres e ocupadas. Este campo deve ser inicializado, no início de seu programa, 
com o valor 1, indicando que todas as posições de array estão vazias. Com isto sua lógica de manipulação dos dados deve estar vinculada a este novo 
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
	
	
	// Preencher a posição livre
 	inicializa(cadastro);
 	// MENU
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
			  	p = posicao_livre(cadastro);
			  	if (p==-1){
			  		printf("\nTodas as opções estão ocupadas!");
				  }
				else {
					printf ("\nDigite o nome do funcionário: ");
					fflush(stdin);
					gets(cadastro[p].nome);
					
					printf("Digite o endereço: ");
					fflush(stdin);
					gets(cadastro[p].endereco);
					
					printf("Salário: ");
					scanf("%f", &cadastro[p].salario);
					
					printf("Número de dependentes: ");
					scanf("%i", &cadastro[p].n_dependentes);
					
					printf("Ano de admissão: ");
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
