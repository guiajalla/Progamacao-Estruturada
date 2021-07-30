#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*29- Faça um programa que receba 6 números inteiros e mostre:
- OS números pares digitados;
- A soma dos números pares digitados;
- Os números ímpares digitados;
- A quantidade de números ímpares digitados; */

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n[6], s_pares=0, impares, i, cont_i=0;
	
	for(i=0;i<6;i++)
	{
		printf("Digite um número (%i/6): ", i+1);
		scanf("%i", &n[i]);
	}
	/// PAR 
	printf("\nNúmeros pares digitados:\n");
	for(i=0;i<6;i++)
	{
		if(n[i]%2==0)
		{
			printf("%i ", n[i]);
			s_pares = s_pares + n[i];		
		}
	}
	
	printf("\nA soma dos números pares digitados:\n");
	printf("%i", s_pares);
	
	///Impar
	printf("\nNúmeros ímpares digitados:\n");
	for(i=0;i<6;i++)
	{
		if(n[i]%2!=0)
		{
			printf("%i ", n[i]);
			cont_i=cont_i+1;
		}
	}
	printf("\nQuantidade de números ímpares: \n%i", cont_i);
	return 0;
}
