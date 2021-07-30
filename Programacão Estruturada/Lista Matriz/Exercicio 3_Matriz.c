#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/*3- Leia uma matriz 4x4, imprima a matriz e retorne a localização (linha e a coluno) do maior valor.*/

int main(){
	setlocale (LC_ALL, "Portuguese");
int mat[4][4];
int l, c, maior, m_linha, m_coluna;
maior = m_linha = m_coluna = mat[l][c];
for (l=0;l<4;l++)
	for (c=0;c<4;c++)
	{
		printf("Digite um valor para a posição [%i][%i]: ", l+1, c+1);
		scanf("%d", &mat[l][c]);
	}
	
	for (l=0;l<4;l++)
		for(c=0;c<4;c++)
		{
			if (mat[l][c]>maior)
			{
				maior=mat[l][c];
				m_linha=l;
				m_coluna=c;
			}
		}
		
	printf("\nMaior valor na matriz: %d", maior);
	printf("\nE está localizado na linha: %i", m_linha+1);
	printf("\nE na coluna: %i", m_coluna+1);
return 0;
}



