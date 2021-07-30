#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*OPCIONAL (1,0 pts)
(Se conseguiu fazer só 1 ou 2 questões, pode adicionar essa opcional)
O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de
substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto
abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de três posições,
‘A’seria substituído por ‘D’, ‘B’se tornaria ‘E’, e assim por diante. Implemente um
programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a
string codificada.
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR
FDQVDGR*/

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	char str[250];
	int i;
	printf("Escreva uma frase: ");
	gets(str);
	
	 for(i=0;str[i]!='\0';i++)
    {
       str[i]=str[i]+3;
       
	   if(str[i]=='#')
       {
       	str[i]=' ';
	   }
    }
    
    printf("\nA frase resultante é: \n\n");
    
	printf("%s", str);
	return 0;
}
