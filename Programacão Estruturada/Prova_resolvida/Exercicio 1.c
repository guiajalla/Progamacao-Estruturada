#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*I.- Quest�o 1 (2,0 pts) Considerando o seu c�digo de matricula, construa o seguinte programa em C:  
1. Declare uma string, de tamanho igual � soma dos n�meros do seu c�digo de matr�cula. 
2. Solicite ao usu�rio um nome e o armazene na string criada. 
3. Mostre ao usu�rio 10 opera��es relacionadas � tabuada (1 ao 10) do �ltimo digito do seu c�digo de matricula. 
Mostre uma opera��o por vez e pe�a a sua resposta. 
4. Mostre a quantidade de opera��es acertadas e erradas. 
5. Se o usu�rio acertou todas, mostre uma mensagem de parab�ns que inclua o nome ingressado, mas imprima o nome de tr�s-pra-frente. 
(�Parab�ns OLECRAM!�). */

int main()
{
	setlocale (LC_ALL, "Portuguese");
	// Matricula (02080236) --> Somada = 21;
	char str[21];
	int i, r, cont=0;
	
	for(i=0;i<21;i++)
    {
        str[i]='*';
    }
	printf("Seu nome: ");
	gets(str);
	// Inicio da Tabuada do �ltimo n�mero da minha matr�cula (6);
	printf("\nResponda a tabuada e no final diremos quantas voc� acertou!!\n\n");
	
	for(i=1;i<=10;i++)
	{
		r=0;
		printf("Quanto � 6 x %i = ", i);
		scanf("%i", &r);
		if (r==6*i)
		{
			cont++;
		}
	}
	// Verifica��o se acertou todas as quest�es;
	if (cont==10)
	{
		printf("\nParab�ns ");
		for (i=21;i>=0;i--)
		{
			if (str[i]!='*' && str[i]!='\0')
			{
				printf("%c", str[i]);
			}
		}
		printf("!!");
	}

	printf("\nVoc� acertou um total de %i quest�es!", cont);
	return 0;
}
