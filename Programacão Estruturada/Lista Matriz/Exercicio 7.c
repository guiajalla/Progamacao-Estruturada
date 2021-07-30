#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*7. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int mat[3][3];
	int l, c, aux=3;
	
	for(l=0;l<aux;l++)
	{
	
		for (c=0;c<aux;c++)
		{
			printf("Digite uma valor para a posição[%i][%i]: ", l+1, c+1);
			scanf("%i", &mat[l][c]);
		}
	}
	printf("\nMatriz Digitada:\n");
	
	for(l=0;l<aux;l++)
	{
	
		for(c=0;c<aux;c++)
		{
			printf("%d\t", mat[l][c]);
		}
		printf("\n");
	}
		
	printf("\nMatriz Transposta:\n");
	for(c=0;c<aux;c++)
	{
		for(l=0;l<aux;l++)
		{
			printf("%d\t", mat[l][c]);
		}
		printf("\n");
	}
	return 0;
}
