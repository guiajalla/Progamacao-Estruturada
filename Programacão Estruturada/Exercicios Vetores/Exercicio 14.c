#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*14- Faça um programa que leia um vetor de 10 posições e verifique se exitem valores iguais e os escreva na tela.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[10], i, j, temp;
	
	for(i=0;i<10;i++)
	{
		printf("Digite um valor para o vetor de posição [%i]: ", i);
		scanf("%i", &vet[i]);
	}
		for(j=0;j<10;j++)
		{
			temp=vet[j];
			for(i=0+1;i<10;i++)
			{
				if(temp==vet[i])
				{
					printf("\nO valor '%i' está se repetindo (comparado a %i)!!", vet[i], vet[j]);
				}
			}
		}
		
	return 0;
}
