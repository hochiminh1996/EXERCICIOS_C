/*
	ALGORITMO BÁSICO : SIZEOF
	AUTOR : FELIPPE M.
	DESCRIÇÃO : VALIDAÇÃO DO TAMANHO DE BYTE DOS TIPOS DE DADOS
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL,"PORTUGUESE");		
  float n;
  int m;
  char msg;
  
  printf(" --- TIPO ---|--- BYTES ---\n");
  printf(" char .......: %d bytes\n", sizeof(char));
  printf(" short.......: %d bytes\n", sizeof(short));
  printf(" int.........: %d bytes\n", sizeof(int));
  printf(" long........: %d bytes\n", sizeof(long));
  printf(" float ......: %d bytes\n", sizeof(float));
  printf(" double......: %d bytes\n", sizeof(double));
  printf(" long double.: %d bytes\n", sizeof(long double));
  
  printf("\nO tamanho de n é : %i\n",sizeof n);
  
}
