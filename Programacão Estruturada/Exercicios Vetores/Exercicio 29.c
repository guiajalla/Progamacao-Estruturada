#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*29- Fa�a um programa que receba 6 n�meros inteiros e mostre:
- OS n�meros pares digitados;
- A soma dos n�meros pares digitados;
- Os n�meros �mpares digitados;
- A quantidade de n�meros �mpares digitados; */

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n[6], s_pares=0, impares, i, cont_i=0;
	
	for(i=0;i<6;i++)
	{
		printf("Digite um n�mero (%i/6): ", i+1);
		scanf("%i", &n[i]);
	}
	/// PAR 
	printf("\nN�meros pares digitados:\n");
	for(i=0;i<6;i++)
	{
		if(n[i]%2==0)
		{
			printf("%i ", n[i]);
			s_pares = s_pares + n[i];		
		}
	}
	
	printf("\nA soma dos n�meros pares digitados:\n");
	printf("%i", s_pares);
	
	///Impar
	printf("\nN�meros �mpares digitados:\n");
	for(i=0;i<6;i++)
	{
		if(n[i]%2!=0)
		{
			printf("%i ", n[i]);
			cont_i=cont_i+1;
		}
	}
	printf("\nQuantidade de n�meros �mpares: \n%i", cont_i);
	return 0;
}
