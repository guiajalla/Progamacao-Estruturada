#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
4. Leia uma matriz 5 x 5. Leia também um valor X. O programa devera
fazer uma busca desse valor na matriz e, ao final, escrever a localização
(linha e coluna) ou uma mensagem de “não encontrado”.
*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int mat[5][5];
	int x, c, l, aux=5, cont=0;
	
	for(l=0;l<aux;l++){
	
		for (c=0;c<aux;c++)
		{
			printf("Digite um valor para a matriz[%i][%i]: ", l+1, c+1);
			scanf("%i", &mat[l][c]);
			
		}
    }
	printf("\nDigite um valor e vamos verificar se ele está na matriz: ");
	scanf("%i", &x);
	
	for (l=0;l<aux;l++)
		for (c=0;c<aux;c++)
		{
			if (x==mat[l][c])
			{
				printf("\nValor [%i] digitado, encontra-se na linha [%i] e na coluna [%i]", x, l+1, c+1);
				cont=cont-1;
			}
			else
			{
				cont=cont+1;				
			}
		}
	if (cont>0)
	{
		printf("\nNão encontra-se na matriz!!");
	}
	return 0;
}
