#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*28. Fa�a um programa que leia tr�s n�meros inteiros
      positivos e efetue o c�lculo de uma das seguintes
      m�dias de acordo com um valor n�merico digitado
      pelo usu�rio:

      1 - Geom�trica

      2 - Ponderada

      3 - Harm�nica

      4 - Aritm�tica*/


int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int n1,n2,n3,media,op;

	printf("Informe 3 n�meros: ");
	scanf("%i%i%i",&n1,&n2,&n3);

	printf("\n1 - Geom�trica");

	printf("\n2 - Ponderada");

	printf("\n3 - Harm�nica");

	printf("\n4 - Aritm�tica");

	printf("\nEscolha uma m�dia: ");
	scanf("%i",&op);

	if(op==1)
	{
		media=pow(n1*n2*n3,0.3);
		printf("\nM�dia geom�trica: %i",media);
	}

	else if(op==2)
	{
		media=(n1+2*n2+3*n3)/6;
		printf("\nM�dia ponderada: %i",media);
	}

	else if(op==3)
	{
		media=((1/n1)+(1/n2)+(1/n3))/1;
		printf("\nM�dia harm�nica: %i",media);
	}

	else if(op==4)
	{
		media=(n1+n2+n3)/3;
		printf("\nM�dia aritm�tica: %i",media);
	}

	return 0;
}



