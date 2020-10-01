/*
	ALGORITMO BÁSICO : CARACTERES EM ASCII
	AUTOR : FELIPPE M
	DESCRIÇÃO : REPRESENTAR UM CARACTERE A PARTIR DO SEU VALOR EM ASCII, ALÉM DO SUCESSO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	printf("DIGITE UM INTEIRO : ");
	scanf("%i",&n);
	

	printf("O Nº DIGITADO É = %i, QUE EQUIVALE AO CARACTERE  = %c\n",n, (char) n);
	printf("O CARACTERE SEGUINTE DE %c = %i",(char)n+1,(char) n+1);
    
}

