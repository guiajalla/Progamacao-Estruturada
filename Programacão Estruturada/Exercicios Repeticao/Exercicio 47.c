#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*47 - Faa um programa que apresente um menu de op��es para o c�lculo das seguintes
opera��es entre dois n�meros:

Adi��o (Op��o 1)
Subtracao (op�ao 2)
Multiplica��o (op��o 3)
Divisao (Op��o 4)
Saida (Op��o 5)*/

int main(){
	setlocale (LC_ALL, "Portuguese");
float n1, n2, result;
int op;
	
	printf("------ Escolha uma op��o ------");
	printf("\n1- Adi��o\n2- Subtra��o\n3- Multiplica��o\n4- Divis�o\n5- Sa�da\n\n");
	scanf("%i", &op);

while(op!=5){

	fflush(stdin);
	puts("\n\nDigite dois n�meros: ");
	scanf("%f%f", &n1, &n2);
	
	switch(op){
		case 1: result=n1+n2;
		printf("\nO resultado da soma de %.2f + %.2f �: %.2f", n1, n2, result);
		break;
		
		case 2: result=n1-n2;
		printf("\nO resultado da subtra��o de %.2f - %.2f �: %.2f", n1, n2, result);
		break;
		
		case 3: result=n1*n2;
		printf("\nO resultado da multiplica��o de %.2f x %.2f �: %.2f", n1, n2, result);
		break;
		
		default: result=n1/n2;
		printf("\nO resultado da divis�o de %f / %.2f �: %.2f", n1, n2, result);
		break;
	}
	printf("\n------ Escolha uma op��o ------");
	printf("\n1- Adi��o\n2- Subtra��o\n3- Multiplica��o\n4- Divis�o\n5- Sa�da\n\n");
	scanf("%i", &op);
		

}

return 0;
}



