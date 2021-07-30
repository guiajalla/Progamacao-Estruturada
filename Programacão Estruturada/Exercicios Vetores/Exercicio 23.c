#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*23- Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar entre eles.
Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o produto escalar, sendo que o produto escalar
é dado por: x1*y1 + x2*y2 + ... + xn*yn */

int main()
{
	int x[5], y[5], z, i;
	
	for(i=0;i<5;i++)
	{
		printf("Digite um valor para o Vetor X[%i]: ", i);
		scanf("%i", &x[i]);
	}
	
		for(i=0;i<5;i++)
		{
			printf("\nDigite um valor para o Vetor Y[%i]: ", i);
			scanf("%i", &y[i]);
		}
	
	for(i=0;i<5;i++)
	{
		z=(x[i]*y[i])+z;
	}
	printf("\nVetor X: ");
	
		for(i=0;i<5;i++)
		{
			printf("%i ", x[i]);
		}
		printf("\nVetor Y: ");
		
			for(i=0;i<5;i++)
			{
				printf("%i ", y[i]);
			}
			printf("\nProduto escalar: %i", z);
			
		
		
	return 0;
}
