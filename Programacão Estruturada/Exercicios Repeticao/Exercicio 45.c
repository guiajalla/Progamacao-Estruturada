#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 * 45 - Fa�a um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. Voc� deve
	 criar um menu com duas op��es de convers�o e com uma op��o para finalizar o programa. O usu�rio poder�
	 fazer quantas convers�es desejar, sendo que o programa s� ser� finalizado quando a op��o de finalizar
	 for escolhida.
	*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float km, ms;
	int op;
	do
	{
		puts("\n------ Escolha a op��o desejada ------");
		printf("\n1- Converter Km/h --> M/s\n2- Converter M/s --> Km/h\n3- Finalizar\n");
		scanf("%i", &op);
				
		switch(op)
		{
			case 1: 
			printf("\nDigite o valor em km/h: ");
			scanf("%f", &km);
			
			ms = km / 3.6;
			
			printf("%.2f Km/h ---> %.2f M/s", km, ms);
			break;
			
			case 2:
			printf("\nDigite o valor em M/s: ");
			scanf("%f", &ms);
			
			km = ms*3.6;
			
			printf("%.2f M/s ---> %.2f Km/h", ms, km);
			break;
			
			case 3:
			printf("Programa ser� finalizado!");
			break;
			
			default:
			printf ("Op��o Inv�lida!");
			break;	
		}
	}while(op!=3);
	return 0;
}
