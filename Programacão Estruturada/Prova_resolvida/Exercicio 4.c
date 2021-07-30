#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAXTAM 100
/*IV.- Quest�o 4 (3,0 pts)
1. Construa um programa em C que pe�a para o usu�rio digitar quantos n�meros inteiros
positivos ele quiser (n�o precisa verificar erros, assuma que ele s� vai digitar valores
v�lidos). O programa deve pedir 1 n�mero de cada vez e perguntar se deseja informar
mais 1, at� o usu�rio dizer que n�o. Os valores devem ser armazenados em um vetor.
Mostre os valores quando a lista for encerrada.
2. Quando o usu�rio encerrar a lista, ordene o vetor.
3. Ap�s, pe�a para o usu�rio informar um valor a ser buscado (no vetor ordenado), e
mostre a sua posi��o na tela (-1 se n�o encontrar).*/

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int vet[MAXTAM];
	int cont=0, i=0, j=0, op, x;
	
	printf("---- Menu ----");
	printf("\n1 - Sim");
	printf("\n2 - N�o\n\n");
	// N�meros digitados pelo usu�rio;
	do
	{
		printf("Digite um n�mero: ");
		scanf("%i", &vet[i]);
		i=i+1;
		
		printf("\nDeseja digitar mais um n�mero? ");
		scanf("%i", &op);
		cont=cont+1;
		
	}while(op!=2);
	// 1. Mostrar vetor digitado
	printf("\nSeu vetor digitado!!\n");
	for (i=0;i<cont;i++)
	{
		printf(" %i\t", vet[i]);
	}
	
	printf("\nDigite um n�mero que voc� quer procurar no vetor: ");
	scanf("%i", &x);
	
	for (i=0;i<cont;i++)
	{
		if (vet[i]==x)
		{
			printf("O valor [%i] encontra-se na posi��o [%i] do seu vetor.\n", x, i+1);
		}
		else
		{
			printf("\n-1");
		}
	}
		
	return 0;
}
