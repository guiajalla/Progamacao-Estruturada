#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*15- Leia um vetor com 20 n�meros inteiros. Escreva os elementos do vetor eliminando elementos repetidos*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[20], i, j, aux=20, comparador;
	
	for(i=0;i<aux;i++)
	{
		printf("Atribua um valor para a posi��o Vet[%i]: ", i+1);
		scanf("%i", &vet[i]);
	}
	
	//Compara��o
	printf("\nElementos do vetor sem repetir:\n");
	for(i=0;i<aux;i++)
	{
		comparador=vet[i];
		j=i+1;
		if (comparador!=vet[j])
		{
			printf(" %i ", vet[i]);
		}
		
	}
	
	return 0;
}
