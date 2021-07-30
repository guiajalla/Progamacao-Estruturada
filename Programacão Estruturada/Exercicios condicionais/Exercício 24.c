#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*24- Uma empresa vendo o mesmo produto para quatro estados diferentes. Cada estado possui uma taxa diferente de imposto sobre o produto (MG = 7%; SP = 12%; RJ = 15%; MS = 8%).
Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido.
Se o estado digitado não for válido, mostrar mensagem de erro. */

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float preco_f;
	
	
	printf("\nValor do seu produto: ");
	scanf("%f", &preco_f);
	fflush(stdin);
	printf("------ Escolha o estado que será feito o envio ------");
	printf("\n1- Minas Gerais\n2- São Paulo\n3- Rio de Janeiro\n4- Mato Grosso do Sul\n\n");
	scanf("%i", &i);

	
	switch (i)
	{
		case 1: 
		
			preco_f=preco_f*1.07;
		break;
		
		case 2:
			preco_f=preco_f*1.12;
			break;
			
		case 3:
			preco_f=preco_f*1.15;
			break;
			
		case 4:
			preco_f=preco_f*1.08;
			break;
			
		default:
			puts("Você digitou um estado errado!!");
	
	}
	printf("O preco final é: %.2f", preco_f);
	

return 0;
}



