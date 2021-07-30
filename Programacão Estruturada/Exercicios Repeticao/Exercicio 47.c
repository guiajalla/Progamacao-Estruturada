#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*47 - Faa um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:

Adição (Opção 1)
Subtracao (opçao 2)
Multiplicação (opção 3)
Divisao (Opção 4)
Saida (Opção 5)*/

int main(){
	setlocale (LC_ALL, "Portuguese");
float n1, n2, result;
int op;
	
	printf("------ Escolha uma opção ------");
	printf("\n1- Adição\n2- Subtração\n3- Multiplicação\n4- Divisão\n5- Saída\n\n");
	scanf("%i", &op);

while(op!=5){

	fflush(stdin);
	puts("\n\nDigite dois números: ");
	scanf("%f%f", &n1, &n2);
	
	switch(op){
		case 1: result=n1+n2;
		printf("\nO resultado da soma de %.2f + %.2f é: %.2f", n1, n2, result);
		break;
		
		case 2: result=n1-n2;
		printf("\nO resultado da subtração de %.2f - %.2f é: %.2f", n1, n2, result);
		break;
		
		case 3: result=n1*n2;
		printf("\nO resultado da multiplicação de %.2f x %.2f é: %.2f", n1, n2, result);
		break;
		
		default: result=n1/n2;
		printf("\nO resultado da divisão de %f / %.2f é: %.2f", n1, n2, result);
		break;
	}
	printf("\n------ Escolha uma opção ------");
	printf("\n1- Adição\n2- Subtração\n3- Multiplicação\n4- Divisão\n5- Saída\n\n");
	scanf("%i", &op);
		

}

return 0;
}



