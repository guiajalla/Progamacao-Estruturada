#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>


/*39 - Faça um programa que calcule a área de um triângulo, cuja base e a altura
são fornecidas pelo usuário. Esse programa não pode permitir a entrada de dados inválidos,
ou seja, medidas menores ou iguais a 0.*/

int main(){
	setlocale (LC_ALL, "Portuguese");
int b, a, area;

puts("Digite a base e a altura do seu triângulo: ");
scanf("%i%i", &b, &a);

while(a>0 && b>0)
{
	area=(b*a)/2;
	printf("\nA area do triangulo de base '%i' e altura '%i' é: %i\n\n", b, a, area);
	
	puts("\nDigite a base e a altura do seu triângulo: ");
	scanf("%i%i", &b, &a);	
	
}
printf("Digito inválido!");
return 0;
}



