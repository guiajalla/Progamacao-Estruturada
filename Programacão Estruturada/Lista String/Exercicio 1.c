#include<stdio.h>
#include<conio.h>

/*1. Fa�a um programa que ent�o leia uma string e a imprima.*/


int main(void)
{
  char nome[61];
  
  printf("Digite seu nome: ");
  gets(nome);
  
  printf("O nome armazenado foi: %s", nome);
  
  getch();
  return 0;
}
