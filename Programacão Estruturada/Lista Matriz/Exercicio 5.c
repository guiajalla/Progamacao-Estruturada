#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*5. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores
de cada posição das matrizes lidas.*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int mat_1[4][4], mat_2[4][4], mat_3[4][4];
	int c, l, aux=4;
	
	for (l=0;l<aux;l++)
		for(c=0;c<aux;c++)
		{
			printf("Digite um valor para a posição [%i][%i]: ", l+1, c+1);
			scanf("%i", &mat_1[l][c]);
		}
	
	for (l=0;l<aux;l++)
		for(c=0;c<aux;c++)
		{
			printf("Digite um valor para a posição [%i][%i]: ", l+1, c+1);
			scanf("%i", &mat_2[l][c]);
		}
		
	for (l=0;l<aux;l++)
		for(c=0;c<aux;c++)
		{
			if (mat_1[l][c]>mat_2[l][c])
			{
				mat_3[l][c]=mat_1[l][c];
			}
			else if (mat_1[l][c] < mat_2[l][c])
			{
				mat_3[l][c]=mat_2[l][c];
			}
			else
			{
				mat_3[l][c]=mat_1[l][c];
			}
		}
	printf("\nMatriz dos mais valores de cada posição das matrizes lidas. ");
	printf("\n");
	for (l=0;l<aux;l++)
	{
	
		for(c=0;c<aux;c++)
		{
			printf("%d\t", mat_3[l][c]);
			
		}
		printf("\n");
	}
	return 0;
}
