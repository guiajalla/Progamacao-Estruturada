#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*30 - Faça um programa que receba três números e mostre-os em ordem crescente.*/

int main (){
	setlocale (LC_ALL, "Portuguese");
	int x, y, z;
	
	puts("Digite três números e mostraremos eles em ordem crescente: ");
	scanf("%i%i%i", &x, &y, &z);
	
	if(x<y && y<z)
	{
		printf("%i  %i  %i", x, y, z);
	}
	else if(x<z && z<y)
	{
		printf("%i  %i  %i", x, z, y);
	}
	else if (y<x && x<z)
	{
		printf("%i  %i  %i", y, x, z);
	}
	else if (y<z && z<x)
	{
		printf("%i  %i  %i", y, z, x);
	}
	else if (z<x && x<y)
	{
		printf ("%i  %i  %i", z, x, y);
	}
	else
	{
		printf("%i  %i  %i", z, y, x);
	}
	
	
	return 0;
}
