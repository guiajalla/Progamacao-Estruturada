#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*3. Fa�a um programa que conte o numero de 1�s que aparecem em um
string. Exemplo: �0011001� -> 3*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	char str[61];
	int cont=0, i;
	
	for(i=0;i<61;i++)
	{
		str[i]='*';
	}
	
	printf("Escreva um sequ�ncia de n�meros: ");
	gets(str);
	
	for(i=0;i<61;i++)
	{
		if(str[i]=='1')
		{
			cont=cont+1;
		}
	}
	
	printf("\nExistem '%i' n�meros [1] na sua sequ�ncia!", cont);
	return 0;
}
