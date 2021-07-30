#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*8. Faça um programa que leia uma matriz de 5 linhas e 4 colunas
     contendo as seguintes informações sobre alunos de uma disciplina,
     sendo todas as informações do tipo inteiro:

	Primeira coluna: número de matricula (use um inteiro)
	Segunda coluna: média das provas
	Terceira coluna: média dos trabalhos
	Quarta coluna: nota final

    Elabore um programa que:
    a) Leia as três primeiras informações de cada aluno
    b) Calcule a nota final como sendo a média da segunda e terceira coluna.
    c) Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe uma maior nota).
    d) Imprima a média aritmética das notas finais.*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int mat[5][4];
    int l, c, media, maior_n=0, maior_aluno=0, soma=0, cont=0;
	float m_final;
	
    for(l=0;l<5;l++)
    {
        printf("Informe a matrícula, nota da média das provas e a nota da média dos trabalhos: ");
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
	// Media Aritmética 
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
    
    printf("\nMatrícula do aluno com a maior nota: %i", maior_aluno);
    printf("\nMédia aritimética das notas finais: %.2f", m_final);
    
    return 0;
}
