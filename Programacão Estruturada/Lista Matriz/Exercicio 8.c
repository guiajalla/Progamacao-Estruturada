#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*8. Fa�a um programa que leia uma matriz de 5 linhas e 4 colunas
     contendo as seguintes informa��es sobre alunos de uma disciplina,
     sendo todas as informa��es do tipo inteiro:

	Primeira coluna: n�mero de matricula (use um inteiro)
	Segunda coluna: m�dia das provas
	Terceira coluna: m�dia dos trabalhos
	Quarta coluna: nota final

    Elabore um programa que:
    a) Leia as tr�s primeiras informa��es de cada aluno
    b) Calcule a nota final como sendo a m�dia da segunda e terceira coluna.
    c) Imprima a matr�cula do aluno que obteve a maior nota final (assuma que s� existe uma maior nota).
    d) Imprima a m�dia aritm�tica das notas finais.*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int mat[5][4];
    int l, c, media, maior_n=0, maior_aluno=0, soma=0, cont=0;
	float m_final;
	
    for(l=0;l<5;l++)
    {
        printf("Informe a matr�cula, nota da m�dia das provas e a nota da m�dia dos trabalhos: ");
        for(c=0;c<3;c++)
        {
            scanf("%d", &mat[l][c]);
        }
        printf("\n");
    }
	// Media da provas
    for(l=0;l<5;l++)
    	for(c=0;c<4;c++)
        {
            mat[l][3]=(mat[l][1]+mat[l][2])/2;
        }
    // Verificar a maior
    for(l=0;l<5;l++)
        for(c=0;c<4;c++)
        {
            if(mat[l][3]>maior_n)
            {
                maior_n = mat[l][3];
                maior_aluno = mat[l][0];
            }
        }
	// Media Aritm�tica 
    for(l=0;l<5;l++)
            for(c=0;c<4;c++)
        {
            if(mat[l][3]>0)
            {
                soma= soma + mat[l][3];
                cont= cont+1;
            }
        }
    
    m_final= soma/cont;
    printf("\n\n");

    for(l=0;l<5;l++)
    {
        for(c=0;c<4;c++)
        {
            printf("%d\t", mat[l][c]);
        }
        printf("\n");
    }
    
    printf("\nMatr�cula do aluno com a maior nota: %i", maior_aluno);
    printf("\nM�dia aritim�tica das notas finais: %.2f", m_final);
    
    return 0;
}
