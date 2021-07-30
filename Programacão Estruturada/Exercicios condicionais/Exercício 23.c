#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*23- Determine se um ano é Bissexto. Condicão: Se for divisivel por 400 ou se for divisivel por 4 e não for divisivel por 100. */

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Digite um ano e vamos verificar se ele é um ano Bissexto ou não: ");
	scanf("%i", &ano);
	
	if (ano%400==0)
	{
		printf("O ano: %i, é bissexto.", ano);
	}
	else if (ano%4==0 && ano%100!=0)
	{
		printf("O ano: %i, é bissexto.", ano);
	}
	else 
	{
		printf("O ano %i, não é bissexto.", ano);
	}
return 0;
}



