#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*27 - Escreva um programa que. dada a idade de um nadados, classifique-o em umas das seguintes
categorias.

Categoria  | Idade
Infantil A |5 a 7
Infantil B |8 a 10
Juvenil A  |11 a 13
Juvenil B  |14 a 17
Sênior     | >18       */

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int idade;
	
	printf ("Digite sua idade e diremos em que categoria você encontra-se: ");
	scanf ("%i", &idade);
	
	if (idade >=5 && idade<=7)
	{
		printf("Para a sua idade %i, você está na Categoria Infantil A.", idade);
	}
	else if (idade<=10)
	{
		printf("Para a sua idade %i, você está na Categoria Infantil B.", idade);
	}
	else if (idade<=13)
	{
		printf("Para a sua idade %i, você está na Categoria Juvenil A.", idade);
	}
	else if (idade<=17)
	{
		printf("Para a sua idade %i, você está na Categoria Juvenil B.", idade);
	}
	else
	{
		printf("Para a sua idade %i, você está na Categoria Sênior.", idade);
	}
	
	return 0;
}
