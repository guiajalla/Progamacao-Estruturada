#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAXTAM_N 100
/*III.- Questão 3 (2,5 pts)
Faça um programa em C que calcule a seguinte operação de matrizes: (A^2) + (2*A) + I, onde
A e I são matrizes quadradas de tamanho nxn. I é uma matriz identidade (tem 1’s na diagonal
principal e 0’s nas outras posições), Solicite os valores de n e A ao usuário. (pode usar matrizes
de números inteiros)*/

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int A[MAXTAM_N][MAXTAM_N], I[MAXTAM_N][MAXTAM_N], mat_r[MAXTAM_N][MAXTAM_N];
	int l, c, n;
	
	printf("Digite o tamanho da suas  matrizes: ");
	scanf("%i", &n);
	printf("\n");
	//Definir MAtriz A.
	for (l=0;l<n;l++)
		for (c=0;c<n;c++)
		{
			printf("Escreva o valor para a a Matriz A[%i][%i]: ", l+1, c+1);
			scanf("%i", &A[l][c]);
		}
	//Matriz I (identidade)	
	for (l=0;l<n;l++)
		for(c=0;c<n;c++)
		{
			if(l==c)
			{
				I[l][c]=1;
			}
			else
			{
				I[l][c]=0;
			}
		}
	//Operação de matrizes: (A^2) + (2*A) + I
	printf("\nA Matriz resultante da operação ((A^2) + (2*A) + I) é:\n\n");
	for (l=0;l<n;l++)
	{
		for (c=0;c<n;c++)
		{
			mat_r[l][c]=(pow(A[l][c], 2))+ (2*A[l][c]) + I[l][c];
			printf("%i\t", mat_r[l][c]);
		}
		printf("\n");
	}
	return 0;
}
