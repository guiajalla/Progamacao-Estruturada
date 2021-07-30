#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAXTAM 100

/*II.- Questão 2 (2,5 pts)
Faça um programa que leia um número n e imprima n linhas na tela com o seguinte formato */

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int mat[MAXTAM][MAXTAM];
	int n, l, c, aux_l, aux_c;
	
	printf("Digite o número de linhas que você deseja ter: ");
	scanf("%i", &n);
	
	for(l=0;l<n;l++)
	{
		for (c=0;c<n;c++)
		{
			if (l==c || c==0)
			{
				mat[l][c]=1;
			}
		}
	}
	// Mostra Matriz;
	for (l=0;l<n;l++)
	{
		for (c=0;c<n;c++)
		{
			if (l<c)
			{
				printf("\t");
			}
			else if (mat[l][c]==0)
			{
				aux_l=l-1;
				aux_c=c-1;
				mat[l][c]=mat[aux_l][c]+mat[aux_l][aux_c];
				printf("%i\t", mat[l][c]);
			}
			else
			{
				printf("%i\t", mat[l][c]);
			}
		}
		printf("\n");
	}
	return 0;
}
