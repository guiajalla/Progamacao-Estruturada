#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
6. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos
são da forma:
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i² - 1 se i = j;
A[i][j] = 4i³ - 5j² + 1 se i > j;
*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int A[10][10];
	int c, l, aux=10;
	
	for (l=0;l<aux;l++)
		for(c=0;c<aux;c++)
		{
			if(l<c)
			{
				A[l][c]= (2*l) + (7*c) - 2;
			}
			else if (l==c)
			{
				A[l][c]= (3*(pow(l, 2))) - 1;
			}
			else
			{
				A[l][c]= (4*(pow(l, 3))) - (5*(pow(c, 2))) + 1;
			}
		}
		
	for (l=0;l<aux;l++)
	{
		for (c=0;c<aux;c++)
		{
			printf("%d\t", A[l][c]);
		}
		printf("\n");
	}
	return 0;
}
