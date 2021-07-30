#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*1- Declare uma matrix 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

int main(){
int mat[5][5];
int l, c, aux=5;

for (l=0;l<aux;l++)
	for (c=0;c<aux;c++)
		if(l==c )
		{
			mat[l][c]=1;
		}	
		else
		{
			mat[l][c]=0;
		}
for (l=0;l<aux;l++)
{

	for (c=0;c<aux;c++)
	{
		printf("%d\t", mat[l][c]);
	}
	printf("\n");
}

return 0;
}



