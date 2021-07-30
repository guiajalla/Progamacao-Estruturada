#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*2. Crie um programa que calcula o comprimento de uma string (não use a
função strlen).*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	char str[61];
	int cont=0, i;
	
	for(i=0;i<61;i++)
	{
		str[i]='*';
	}
	
	printf("Escreva algo: ");
	gets(str);
	
	for (i=0;i<61;i++)
	{
		if (str[i]!='*')
		{
			cont=cont+1;
		}
	}
	
	printf("\nExistem '%i' caracteres na sua frase.", cont-1);
	return 0;
}
