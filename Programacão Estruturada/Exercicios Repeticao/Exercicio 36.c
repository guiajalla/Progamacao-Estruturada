#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 36 - Fa�a um programa que calcule a diferen�a entre a soma dos quadrados dos primeiros 100 n� naturais
	 e o quadrado da soma. Ex: A soma dos quadrados dos dez primeiros n�meros naturais �:
	 
	 385
	 
	 O quadrado da soma doz dez primeiros n�meros naturais �: 3025
	 A diferen�a entre a soma dos quadrados doz dez primeiros n�meros naturais e o quadrado da soma � 3025-385= 2640
	*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, sdq=0, qds=0;
	
	for (n=1;n<=100;n++)
	{
		sdq = (pow(n,2)) + sdq;
	}
	printf("\nA soma dos quadrados �: %i", sdq);
	
	for (n=1;n<=100;n++)
	{
		qds = qds + n;
	}
	qds = pow(qds,2);
	
	printf("\nO quadrado da soma �: %i", qds);
	n = qds - sdq;
	printf("\nA diferen�a entre %i e %i �: %i", qds, sdq, n);
	return 0;
}
