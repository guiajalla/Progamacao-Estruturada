#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 43- Faça um programa que leia um número indeterminado de idade de indivíduos (pare quando for informado a idade 0), e calcule
	 a idade média desse grupo.
	*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade, media, i=0, soma;
	
	do
	{
		puts("Digite um idade ou 0 para encerrar: ");
		scanf("%i", &idade);
		soma = soma + idade;
		i++;
	}while(idade!=0);
	media = soma / (i-1);
	
	printf("A média de idade da turma é: %i", media);
	return 0;
}
