#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

/*8. Escreva um programa para converter uma cadeia de caracteres de
     letras mai�sculas em letras min�sculas. Dica: some 32 dos
     caracteres cujo c�digo ASCII est� entre 65 e 90.*/

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char str[61];
    int i, cont=0;

    printf("Escreva algo: ");
    gets(str);

    for(i = 0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
           str[i]=str[i]+32;
        }
    }
   
    printf("\nA frase convertida para letras min�sculas: %s", str);


    return 0;

}

