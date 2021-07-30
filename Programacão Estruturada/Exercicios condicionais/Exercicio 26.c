#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*26- Leia a distância em Km e a quantidade de litros de gasolina consumidos por um
carro em um percurso, calcule o consumo em Kn/l e escreva uma mensagem de acordo
com a tabela abaixo:

Consumo    | (Km/l)   | MENSAGEM
menor que  |    8     | Venda o carro!
-          |    -     |
entre      |  8 e 14  | Econômico!
-          |    -     |
maior que  |    14    | Super econômico!
*/

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float km, l; 
	
	printf("Digite a distância em Km do seu carro e os litros consumidos no percurso: ");
	scanf("%f%f", &km, &l);
	
	km=km/l;
	
	if(km<8){
		puts("Venda o carro!");
	}
	else if (km<=14){
		puts ("Econômico!");
	}
	else{
		puts("Super econômico!");
	}

return 0;
}



