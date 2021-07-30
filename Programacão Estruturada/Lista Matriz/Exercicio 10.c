#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*10.Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e
calcule C = A*B*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int A[3][3], B[3][3], mat_c[3][3];
	int l, c;
	
	// Ler Matrizes
	for(l=0;l<3;l++)
		for(c=0;c<3;c++)
		{
			printf("Digite um valor para a posição da Matriz A[%i][%i]: ", l+1, c+1);
			scanf("%i", &A[l][c]);
		}
		printf("\n");
		
	for(l=0;l<3;l++)
		for(c=0;c<3;c++)
		{
			printf("Digite um valor para a posição da Matriz B[%i][%i]: ", l+1, c+1);
			scanf("%i", &B[l][c]);
		}
	// C = A*B	
	printf("\nMatriz C:\n");
	for(l=0;l<3;l++)
	{
		for(c=0;c<3;c++)
		{
			mat_c[l][c] = A[l][c]*B[l][c];
			printf("%i\t", mat_c[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}
