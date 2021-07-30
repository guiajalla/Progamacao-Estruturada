#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*28. Faça um programa que leia três números inteiros
      positivos e efetue o cálculo de uma das seguintes
      médias de acordo com um valor númerico digitado
      pelo usuário:

      1 - Geométrica

      2 - Ponderada

      3 - Harmônica

      4 - Aritmética*/


int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int n1,n2,n3,media,op;

	printf("Informe 3 números: ");
	scanf("%i%i%i",&n1,&n2,&n3);

	printf("\n1 - Geométrica");

	printf("\n2 - Ponderada");

	printf("\n3 - Harmônica");

	printf("\n4 - Aritmética");

	printf("\nEscolha uma média: ");
	scanf("%i",&op);

	if(op==1)
	{
		media=pow(n1*n2*n3,0.3);
		printf("\nMédia geométrica: %i",media);
	}

	else if(op==2)
	{
		media=(n1+2*n2+3*n3)/6;
		printf("\nMédia ponderada: %i",media);
	}

	else if(op==3)
	{
		media=((1/n1)+(1/n2)+(1/n3))/1;
		printf("\nMédia harmônica: %i",media);
	}

	else if(op==4)
	{
		media=(n1+n2+n3)/3;
		printf("\nMédia aritmética: %i",media);
	}

	return 0;
}



