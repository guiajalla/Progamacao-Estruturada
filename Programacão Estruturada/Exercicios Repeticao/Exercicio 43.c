#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 43- Fa�a um programa que leia um n�mero indeterminado de idade de indiv�duos (pare quando for informado a idade 0), e calcule
	 a idade m�dia desse grupo.
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
	
	printf("A m�dia de idade da turma �: %i", media);
	return 0;
}
