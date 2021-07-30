#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*9. Faça um programa que leia uma palavra (Maximo de 50 letras)
     e some 1 no valor ASCII de cada caractere da palavra. Imprima
     a string resultante.*/

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char str[50];
    int i, cont=0;

    for(i=0;i<50;i++)
    {
        str[i]='*';
    }

    printf("\nEscreva algo: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
       str[i]=str[i]+1;
    }

    printf("\nA frase resultante: %s", str);

    return 0;

}
