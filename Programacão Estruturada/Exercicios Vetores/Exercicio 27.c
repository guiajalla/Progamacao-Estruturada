#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*27 - Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos
e suas respectivas posições no vetor. */

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[10], primos[10], i, j=0, aux=3;
	
	for (i=0;i<aux;i++)
	{
		printf("Atribua um valor para o Vetor[%i]: ", i);
		scanf("%i", &vet[i]);
	}
	
	for (i=0;i<aux;i++)
	{
		if(vet[i]%1==0 && vet[i]%vet[i]==0)
		{
			primos[j]=vet[i];
			j=j+1;
		}
	}
	printf("Número primos: \n");
	for (i=0;i<aux;i++)
	{
		printf("%i ", primos[i]);
	}
	return 0;
}
