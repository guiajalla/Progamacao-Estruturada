#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAXTAM 100
/*IV.- Questão 4 (3,0 pts)
1. Construa um programa em C que peça para o usuário digitar quantos números inteiros
positivos ele quiser (não precisa verificar erros, assuma que ele só vai digitar valores
válidos). O programa deve pedir 1 número de cada vez e perguntar se deseja informar
mais 1, até o usuário dizer que não. Os valores devem ser armazenados em um vetor.
Mostre os valores quando a lista for encerrada.
2. Quando o usuário encerrar a lista, ordene o vetor.
3. Após, peça para o usuário informar um valor a ser buscado (no vetor ordenado), e
mostre a sua posição na tela (-1 se não encontrar).*/

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int vet[MAXTAM];
	int cont=0, i=0, j=0, op, x;
	
	printf("---- Menu ----");
	printf("\n1 - Sim");
	printf("\n2 - Não\n\n");
	// Números digitados pelo usuário;
	do
	{
		printf("Digite um número: ");
		scanf("%i", &vet[i]);
		i=i+1;
		
		printf("\nDeseja digitar mais um número? ");
		scanf("%i", &op);
		cont=cont+1;
		
	}while(op!=2);
	// 1. Mostrar vetor digitado
	printf("\nSeu vetor digitado!!\n");
	for (i=0;i<cont;i++)
	{
		printf(" %i\t", vet[i]);
	}
	
	printf("\nDigite um número que você quer procurar no vetor: ");
	scanf("%i", &x);
	
	for (i=0;i<cont;i++)
	{
		if (vet[i]==x)
		{
			printf("O valor [%i] encontra-se na posição [%i] do seu vetor.\n", x, i+1);
		}
		else
		{
			printf("\n-1");
		}
	}
		
	return 0;
}
