#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*16- Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro.
Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre o
vetor na ordem inversa. Caso, o código for diferente de 1 e 2 escreva uma msg informando que o código é
inválido.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[5], i, op;
	
	for (i=0;i<5;i++)
	{
		printf("Atribua um valor para o Vetor[%i]: ",i);
		scanf("%i", &vet[i]);
	}
	printf("----- Escolha uma das opções -----");
	printf("\n0- Finalizar");
	printf("\n1- Mostrar o vetor na ordem direta");
	printf("\n2- Mostrar o vetor na ordem inversa\n");
	scanf("%i", &op);
	
	switch(op)
	{
		case 0:
			printf("Programa Finalziado!");
			break;
		case 1:
			for(i=0;i<5;i++)
			{
				printf("%i, ", vet[i]);
			}
			break;
		case 2:
			for(i=4;i>=0;i--)
			{
				printf("%i, ", vet[i]);
			}
			break;
		default:
			printf("Digito inválido!");
	}
	return 0;
}
