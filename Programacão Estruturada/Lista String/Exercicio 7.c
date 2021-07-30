#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*7. Faça um programa que receba uma palavra e calcule quantas vogais (a,
e, i, o, u) possui essa palavra. Entre um caractere (vogal ou consoante)
e substitua todas as vogais da palavra dada por esse caractere.*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	char str[61], carac;
	int i, cont=0;
	
	for(i=0;i<61;i++)
	{
		str[i]='*';
	}
	
	printf("Digite uma palavra: ");
	gets(str);
	
	for(i=0;i<61;i++)
	{
		if (str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
		{
			cont=cont+1;
		}
	}
	printf("\nNúmero de vogais digitadas: %i\n", cont);
	printf("\nEscolha um caracter para substituir as vogais!\n");
	scanf("%c", &carac);
	printf("\nA frase com o caracter que escolheu trocando com as vogais!\n");
	
	for(i=0;i<61;i++)
	{
		if (str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
		{
			str[i]==carac;
			printf("%c", carac);
			
		}
		else if(str[i]!='*')
		{
			printf("%c", str[i]);
		}
	}
		
	return 0;
}
