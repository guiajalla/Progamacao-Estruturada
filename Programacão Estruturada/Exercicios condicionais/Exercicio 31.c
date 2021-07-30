#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*31 - Faça um programa que receba altura e o peso de uma pessoa. De acordo com a tabela a seguir, verigique
e mostre qual a classificação da pessoa.*/

int main(){
	setlocale (LC_ALL, "Portuguese");
	float altura, peso;
	
	puts ("Digite sua altura e seu peso: ");
	scanf("%f%f", &altura, &peso);
	
	if (altura<1.20)
	{
		if (peso<=60)
		{
			printf("A!!");
		}
		else if (peso<=90)
		{
			printf("D!!");
		}
		else
		{
			printf("G!!");
		}
	}
	
	else if (altura<=1.70)
	{
		if(peso<=60)
		{
			printf("B!!");	
		}
		else if(peso<=90)
		{
			printf("E!!");
		}
		else
		{
			printf("H!!");
		}
	}
	else
	{
		if(peso<=60)
		{
			printf("C!!");
		}
		else if (peso<=90)
		{
			printf("F!!");
		}
		else
		{
			printf ("I!!");
		}
	}
	return 0;
}
