#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*30- Fa�a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a intersecc��o entre os vetores
anteriores, ou seja, que cont�m apenas os n�meros que est�o em ambos os vetores. N�o deve conter n�meros
repetidos.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[10], b[10], intersec[10], i, aux=10;
	// Ler vetor de A
	for(i=0;i<aux;i++)
	{
		printf("Valores para o Vetor A[%i]: ", i+1);
		scanf("%i", &a[i]);	
	}
	// Ler vetor de B
	for(i=0;i<aux;i++)
	{
		printf("Valores para o Vetor B[%i]: ", i+1);
		scanf("%i", &b[i]);	
	}
	
	// Intersecc��o
	printf("\nA intersecc��o dos dois vetores:\n");
	for (i=0;i<aux;i++)
	{
		if(a[i]!=b[i])
		{
			printf(" %i %i", a[i], b[i]);
		}
		else
		{
			printf(" %i ", a[i]);
		}
	}
	return 0;
}
