#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*I.- Questão 1 (2,0 pts) Considerando o seu código de matricula, construa o seguinte programa em C:  
1. Declare uma string, de tamanho igual à soma dos números do seu código de matrícula. 
2. Solicite ao usuário um nome e o armazene na string criada. 
3. Mostre ao usuário 10 operações relacionadas à tabuada (1 ao 10) do último digito do seu código de matricula. 
Mostre uma operação por vez e peça a sua resposta. 
4. Mostre a quantidade de operações acertadas e erradas. 
5. Se o usuário acertou todas, mostre uma mensagem de parabéns que inclua o nome ingressado, mas imprima o nome de trás-pra-frente. 
(“Parabéns OLECRAM!”). */

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
	// Inicio da Tabuada do último número da minha matrícula (6);
	printf("\nResponda a tabuada e no final diremos quantas você acertou!!\n\n");
	
	for(i=1;i<=10;i++)
	{
		r=0;
		printf("Quanto é 6 x %i = ", i);
		scanf("%i", &r);
		if (r==6*i)
		{
			cont++;
		}
	}
	// Verificação se acertou todas as questões;
	if (cont==10)
	{
		printf("\nParabéns ");
		for (i=21;i>=0;i--)
		{
			if (str[i]!='*' && str[i]!='\0')
			{
				printf("%c", str[i]);
			}
		}
		printf("!!");
	}

	printf("\nVocê acertou um total de %i questões!", cont);
	return 0;
}
