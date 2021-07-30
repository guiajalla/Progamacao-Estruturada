#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*44. Leia um número positivo do usuário, então
      calcule e imprima a sequência Fibonacci
      até o primeiro número superior ao número
      lido. Exemplo: se o usuário informou o
      número 30, a sequência a ser impressa será
      0, 1, 1, 2, 3, 5, 8, 13, 21 e 34.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1 = 0, n2 = 1, soma=0, num_lido;

	printf("\nInforme um número: ");
	scanf("%i",&num_lido);

	do
	{

		soma=n1+n2;
		n1=n2;
		n2=soma;

        printf("\nSoma: %i",soma);

	}while (soma<=num_lido);

	return 0;
}
