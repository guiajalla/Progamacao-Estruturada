#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*12. Escreva um programa que recebe do usu�rio uma string S, um 
      caractere C, e uma posi��o I e devolve o �ndice da primeira 
      posi��o da string onde foi encontrado o caractere C. A procura
      deve come�ar a partir da posi��o I.*/

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char S[61];
    char C;
    int i, I, pos_encontrada=0;

    for(i=0;i<61;i++)
    {
        S[i]='*';
    }

    printf("Escreva algo: ");
    gets(S);

    printf("\nInforme a letra que deseja procurar: ");
    scanf("%c", &C);

    printf("\nInforme a partir de qual posi��o deve-se procurar: ");
    scanf(" %i",&I);

    for(i=0;i<61;i++)
    {
        if(S[i]==C)
        {
           pos_encontrada=i;
        }
    }

    printf("Caracter encontrado na posi��o: %i", pos_encontrada);

    return 0;
}

