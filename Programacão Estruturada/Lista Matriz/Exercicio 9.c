#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
9. Faça um programa que leia duas matrizes 2 x 2 com valores reais.
Ofereça ao usuário as seguintes opções:
a) Somar as duas matrizes
b) Subtrair a primeira matriz da segunda
c) Adicionar uma constante as duas matrizes
d) Imprimir as matrizes*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	double mat_1[2][2], mat_2[2][2], mat_aux[2][2];
	int l, c, op, k;
	// Ler Matrizes
	for(l=0;l<2;l++)
		for(c=0;c<2;c++)
		{
			printf("Digite um valor para a posição [%i][%i]: ", l+1, c+1);
			scanf("%d", &mat_1[l][c]);
		}
	for(l=0;l<2;l++)
		for(c=0;c<2;c++)
		{
			printf("Digite um valor para a posição [%i][%i]: ", l+1, c+1);
			scanf("%d", &mat_2[l][c]);
		}
	//Opções:
	do
	{
		printf("\n---- Escolha uma opção ----");
		printf("\n0- Para sair\n1- Somar as duas matrizes\n2- Subtrair a primeira matriz da segunda\n3- Adicionar uma constante para as daus matrizes")/
		printf("\n4- Imprimir as matrizes\n");
		scanf("%i", &op);
		
		switch(op)
		{
			case 0:
			printf("\nVocê finalizou o programa!");
			break;
			
			case 1:
			//Somar matrizes:
			for(l=0;l<2;l++)
				for(c=0;c<2;c++)
				{
					mat_aux[l][c] = mat_1[l][c];
					mat_1[l][c]=mat_1[l][c]+mat_2[l][c];
					mat_2[l][c]=mat_aux[l][c]+mat_2[l][c];
				}
			break;
			
			case 2: 
			//Subtrair a primeira matriz da segunda:
			for (l=0;l<2;l++)
				for (c=0;c<2;c++)
				{
					mat_2[l][c]=mat_2[l][c]-mat_1[l][c];
				}
			break;
			
			case 3:
			// Adicionar uma constante para as daus matrizes:
			printf("\nEscolha uma contante: ");
			scanf("%i", &k);
			for(l=0;l<2;l++)
				for(c=0;c<2;c++)
				{
					mat_1[l][c]=k*mat_1[l][c];
					mat_2[l][c]=k*mat_2[l][c];
				}
			break;
			
			case 4:
			//Imprimir as matrizes:
			printf("\nMatriz 1:\n");
			for (l=0;l<2;l++)
			{
				for (c=0;c<2;c++)
				{
					printf("%d\t", mat_1[l][c]);
				}
				printf("\n");
			}
			
			printf("\nMatriz 2:\n");
			for (l=0;l<2;l++)
			{
				for (c=0;c<2;c++)
				{
					printf("%d\t", mat_2[l][c]);
				}
				printf("\n");
			}
			break;
			
			default:
				printf("\nVocê digitou uma opção inválida!!");
		}
	}while(op!=0);
	return 0;
}
