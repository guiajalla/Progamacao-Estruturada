#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*33 - Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o pre�o antigo. calcule e escreva o 
pre�o novo, e escreva uma mensagem em fun��o do pre�o novo (De acordo com a segunda tabela).*/

int main()
{
	setlocale (LC_ALL, "Portuguese");
	float preco_a, preco_n;
	
	puts ("Digite o pre�o do produto que ir� receber o aumento: ");
	scanf("%f", &preco_a);
	
	if (preco_a<=50)
	{
		preco_n=preco_a*1.05;
	}
	else if (preco_a<=100)
	{
		preco_n=preco_a*1.10;
	}
	else
	{
		preco_n=preco_a*1.15;
	}
		if (preco_n<=80)
		{
			printf("Barato!");
		}
		else if (preco_n<=120)
		{
			printf("Normal!");
		}
		else if (preco_n<=200)
		{
			printf("Caro!");
		}
		else
		{
			printf ("Muito caro!");
		}
		
	
	return 0;
}
