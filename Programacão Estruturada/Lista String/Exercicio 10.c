#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*10. Faça um programa em que troque todas as ocorrências de uma
     letra L1 pela letra L2 em uma string. A string e as letras L1
     e L2 devem ser fornecidas pelo usuário.*/

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char str[61];
    char l1, l2;
    int i;

    printf("Escreva uma frase: ");
    gets(str);
//--------------------------------------------
    printf("\nInforme a letra que deseja trocar da frase: ");
    scanf("%c", &l1);
//--------------------------------------------
	printf("\nInforme a letra que deseja inserir no lugar: ");
    scanf(" %c",&l2);
//--------------------------------------------

    for(i=0;i<61;i++)
    {
        if(str[i]==l1)
        {
            str[i] = l2;
        }
    }

    printf("\nFrase com a troca de letras: %s", str);
    
    return 0;
}
