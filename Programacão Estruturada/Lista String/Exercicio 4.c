#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*4. Faça um programa que receba uma palavra e a imprima de tras-parafrente.*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	char palavra[61];
	int i;
	
	for(i=0;i<61;i++)
	{
		palavra[i]='*';
	}
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	for (i=61;i>=0;i--)
	{
		if (palavra[i]!='*')
		{
		printf("%c", palavra[i]);
		}
	}
	
	return 0;
}
