#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*40 - Elabore um programa que faa leitura de v�rios n�meros inteiros, at� que
se digite um n�mero negativo. O programa tem que retornar o maior e o menor n�mero lido.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, maior, menor;
	
	puts("\nDigite um n�meros e diremos quem foi o maior e o menor que voc� digitou: ");
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
		printf("\nDigite um n�mero inteiro: ");
		scanf("%i", &x);
	}
	printf("\nMaior n�mero: %i", maior);
	printf("\nMenor n�mero: %i", menor);
return 0;
}



