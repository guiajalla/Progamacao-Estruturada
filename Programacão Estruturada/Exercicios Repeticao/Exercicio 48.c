#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*48. Fa�a um programa que some os termos de
      valor par da sequ�ncia Fibonacci, cujos
      valores n�o ultrapassem quatro milh�es.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1 = 0, n2 = 1, soma=0;

	do
	{

		soma=n1+n2;
		n1=n2;
		n2=soma;

        if(soma%2==0)
        {

            printf("\nSoma: %i",soma);


        }

	}while (soma<=4000000);

	return 0;
}
