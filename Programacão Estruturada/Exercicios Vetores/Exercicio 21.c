#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*21- Fa�a um programa que receba do usu�rio dois vetores, A e B, com 10 n�meros inteiros cada. Crie um novo vetor
denominado C calculando C = A - B. Mostre na tela os dados do vetor C.*/

int main()
{
	int A[10], B[10], C[10], i, aux=10;
	
	for (i=0;i<aux;i++)
	{
		printf("\nAtribua um valor para o Vetor A[%i]: ", i);
		scanf("%i", &A[i]);
	}
	
	for (i=0;i<aux;i++)
	{
		printf("\nAtribua um valor para o Vetor B[%i]: ", i);
		scanf("%i", &B[i]);
	}
	printf("\nValor do Vetor C: ");
	for (i=0;i<aux;i++)
	{
		C[i]=A[i]-B[i];
		
		printf("%i, ", C[i]);
		
		
	}
	return 0;
}
