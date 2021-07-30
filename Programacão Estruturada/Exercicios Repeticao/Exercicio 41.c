#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 * 41 - Faça um programa que  calcula a assocoação em paralelo de dois resistores R1 e R2 fornecidos
	 pelo usu[ario via teclado. O programa fica pedindo estes valores e calculando até que o usuario 
	 entre com um valor para resistência igual a zero.
	 
	 R = (R1*R2)/(R1+R2)
	*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float r,r1,r2;
	do
	{
		printf("R1: ");
		scanf("%f",&r1);
		printf("R2: ");
		scanf("%f",&r2);
		
		r=(r1*r2)/(r1+r2);
		
		printf("Valor de R: %.2f\n\n",r);
	} while(r1!=0 || r2!=0);
	printf("Valor inválido!\n");
	return 0;
}
