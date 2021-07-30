#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*2- Faça um programa que preenche uma matriz 4x4 com o produto do valor
da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.*/

int main(){
int mat[4][4];
int l, c;

for (l=1;l<5;l++)
{
	for (c=1;c<5;c++)
	{
		mat[l][c]=l*c;
		printf("%d\t", mat[l][c]);
	} printf("\n");
}
return 0;
}



