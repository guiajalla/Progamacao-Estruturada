#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 36 - Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros 100 nº naturais
	 e o quadrado da soma. Ex: A soma dos quadrados dos dez primeiros números naturais é:
	 
	 385
	 
	 O quadrado da soma doz dez primeiros números naturais é: 3025
	 A diferença entre a soma dos quadrados doz dez primeiros números naturais e o quadrado da soma é 3025-385= 2640
	*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, sdq=0, qds=0;
	
	for (n=1;n<=100;n++)
	{
		sdq = (pow(n,2)) + sdq;
	}
	printf("\nA soma dos quadrados é: %i", sdq);
	
	for (n=1;n<=100;n++)
	{
		qds = qds + n;
	}
	qds = pow(qds,2);
	
	printf("\nO quadrado da soma é: %i", qds);
	n = qds - sdq;
	printf("\nA diferença entre %i e %i é: %i", qds, sdq, n);
	return 0;
}
