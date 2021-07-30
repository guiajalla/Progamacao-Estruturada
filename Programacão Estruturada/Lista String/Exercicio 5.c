#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*5. Faça um programa que receba do usuário uma string. O programa
imprime a string sem suas vogais.*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	char str[61];
	int i;
	
	for(i=0;i<61;i++)
	{
		str[i]='*';
	}
	
	printf("Digite uma frase: ");
	gets(str);
	
	for(i=0;i<61;i++)
	{
		if(str[i]!='*' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
		{
			printf("%c", str[i]);
		}
		else
		{
			printf(" ");
		}
	}
	return 0;
}
