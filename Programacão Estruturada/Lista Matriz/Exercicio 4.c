#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
4. Leia uma matriz 5 x 5. Leia tamb�m um valor X. O programa devera
fazer uma busca desse valor na matriz e, ao final, escrever a localiza��o
(linha e coluna) ou uma mensagem de �n�o encontrado�.
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
	printf("\nDigite um valor e vamos verificar se ele est� na matriz: ");
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
		printf("\nN�o encontra-se na matriz!!");
	}
	return 0;
}
