#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*34 - Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo, quando
o aluno tem mais de 20 faltas ocorre uma redução de conceito. */

int main()
{
	setlocale (LC_ALL, "Portuguese");
	float nota, faltas;
	
	puts ("Digite a nota de um aluno e suas faltas, para descobrir o seu conceito: ");
	scanf("%f%f", &nota, &faltas);
	
	if (faltas<=20)
	{
		if (nota<4.0)
		{
			printf("\nE!");
		}
			else if (nota<5.0)
			{
				printf("\nD!");
			}
				else if (nota<7.5)
				{
					printf("\nC!");
				}
					else if(nota<9.0)
					{
						printf("\nB!");
					}
						else
						{
							printf("\nA!");
						}
	}
	else
	{
		if (nota<4.0)
		{
			printf("\nE!");
		}
			else if (nota<5.0)
			{
				printf("\nE!");
			}
				else if (nota<7.5)
				{
					printf("\nD!");
				}
					else if(nota<9.0)
					{
						printf("\nC!");
					}
						else
						{
							printf("\nB!");
						}
	}
	return 0;
}
