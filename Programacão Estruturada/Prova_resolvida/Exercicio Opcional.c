#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

/*OPCIONAL (1,0 pts)
(Se conseguiu fazer s� 1 ou 2 quest�es, pode adicionar essa opcional)
O c�digo de C�sar � uma das mais simples e conhecidas t�cnicas de criptografia. � um tipo de
substitui��o na qual cada letra do texto � substitu�da por outra, que se apresenta no alfabeto
abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de tr�s posi��es,
�A�seria substitu�do por �D�, �B�se tornaria �E�, e assim por diante. Implemente um
programa que fa�a uso desse C�digo de C�sar (3 posi��es), entre com uma string e retorne a
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
    
    printf("\nA frase resultante �: \n\n");
    
	printf("%s", str);
	return 0;
}
