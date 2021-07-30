#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*40 - Elabore um programa que faa leitura de vários números inteiros, até que
se digite um número negativo. O programa tem que retornar o maior e o menor número lido.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, maior, menor;
	
	puts("\nDigite um números e diremos quem foi o maior e o menor que você digitou: ");
	scanf("%i", &x);
	
	menor = maior = x;
	
	while(x>=0)
	{
		if(x>maior)
		{
			maior=x;
		}
		else
		{
			menor=x;
		}
		printf("\nDigite um número inteiro: ");
		scanf("%i", &x);
	}
	printf("\nMaior número: %i", maior);
	printf("\nMenor número: %i", menor);
return 0;
}



