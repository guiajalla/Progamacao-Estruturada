#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>


/*39 - Fa�a um programa que calcule a �rea de um tri�ngulo, cuja base e a altura
s�o fornecidas pelo usu�rio. Esse programa n�o pode permitir a entrada de dados inv�lidos,
ou seja, medidas menores ou iguais a 0.*/

int main(){
	setlocale (LC_ALL, "Portuguese");
int b, a, area;

puts("Digite a base e a altura do seu tri�ngulo: ");
scanf("%i%i", &b, &a);

while(a>0 && b>0)
{
	area=(b*a)/2;
	printf("\nA area do triangulo de base '%i' e altura '%i' �: %i\n\n", b, a, area);
	
	puts("\nDigite a base e a altura do seu tri�ngulo: ");
	scanf("%i%i", &b, &a);	
	
}
printf("Digito inv�lido!");
return 0;
}



