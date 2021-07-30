#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*19- Faça um vetor de tqamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i a posição do elemento
no vetor. Em seguida imprima o vetor na tela.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[50], i, aux=50;
	
	for (i=0;i<aux;i++)
	{
		vet[i]=(i+(5*i))%(i+1);
	}
 	for (i=0;i<aux;i++)
 	{
 		printf("%i, ", vet[i]);	
	}
	return 0;
}
