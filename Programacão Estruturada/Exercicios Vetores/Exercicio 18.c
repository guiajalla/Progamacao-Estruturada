#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*18- Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os múltiplos de um número inteiro x num vetor e mostre-os na tela.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[10], i, aux=10, x;
	
	for (i=0;i<aux;i++)
	{
		printf("Digite um valor para o Vetor[%i]: ", i+1);
		scanf("%i", &vet[i]);
	}
	
	// Multiplos
	printf("Digite um número: ");
	scanf("%i", &x);
	printf("Seu vetor agora é:\n");
	for (i=0;i<aux;i++)
	{
		vet[i]=vet[i]*x;
		printf(" %i ", vet[i]);
	}

	return 0;
}
