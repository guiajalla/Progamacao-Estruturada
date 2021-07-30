#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*36 - Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor.
Para calcular a comissão, considere a abela a baixo.*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float venda, comissa;
	
	puts ("Digite o valor da venda e diremos sua comissão: ");
	scanf("%f", &venda);
	
	if (venda<20000.00)
	{
		comissa=((venda*1.14)-venda)+400;
	}
		else if(venda<40000.00)
		{
			comissa=((venda*1.14)-venda)+500;
		}
			else if (venda<60000.00)
			{
				comissa=((venda*1.14)-venda)+550;
			}
				else if (venda<80000.00)
				{
					comissa=((venda*1.14)-venda)+600;
				}
					else if (venda<100000.00)
					{
						comissa=((venda*1.14)-venda)+650;
					}
						else 
						{
							comissa=((venda*1.16)-venda)+700;
						}
printf("Sua comissão é: %.2f", comissa);
return 0;
}
