#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*44. Leia um n�mero positivo do usu�rio, ent�o
      calcule e imprima a sequ�ncia Fibonacci
      at� o primeiro n�mero superior ao n�mero
      lido. Exemplo: se o usu�rio informou o
      n�mero 30, a sequ�ncia a ser impressa ser�
      0, 1, 1, 2, 3, 5, 8, 13, 21 e 34.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1 = 0, n2 = 1, soma=0, num_lido;

	printf("\nInforme um n�mero: ");
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
