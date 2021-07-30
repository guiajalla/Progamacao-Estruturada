#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 35- Faça um programa que some números impares contidos em um intervalo de definido pelo usuario.
	 O usuário define o valor inicial do intervalo e o calor final deste intervalo e o programa deve somar
	 todos os números ímpares contidos neste intervalo. Caso o usuário digite um intervalo inválido (começando
	 por um valor maior que o valor final) deve ser escrito uma mensagem de erro an tela, "Intervalo de valores
	 inválido" e o programa termina.
	 
	 ex: Digite o valor inicial e o valor final: 5 e 10
	 Soma dos ímpares neste intervalo: 21
	*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int valor_i, valor_f, soma=0;
	puts("Digite o valor inicial e o valor final: ");
	scanf("%i%i", &valor_i, &valor_f);
	
	if(valor_i<valor_f)
	{
	
		for (valor_i;valor_i<=valor_f;valor_i++)
		{
			if(valor_i%2!=0)
			{
				soma  = soma + valor_i;
			}
		}
		printf("A soma dos ímpares neste intervalo: %i", soma);

	}
	else
	{
		printf("Intervalo de valores inválido!");
	}
	return 0;
}
