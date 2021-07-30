#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

	/*
	 * 45 - Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. Você deve
	 criar um menu com duas opções de conversão e com uma opção para finalizar o programa. O usuário poderá
	 fazer quantas conversões desejar, sendo que o programa só será finalizado quando a opção de finalizar
	 for escolhida.
	*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float km, ms;
	int op;
	do
	{
		puts("\n------ Escolha a opção desejada ------");
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
			printf("Programa será finalizado!");
			break;
			
			default:
			printf ("Opção Inválida!");
			break;	
		}
	}while(op!=3);
	return 0;
}
