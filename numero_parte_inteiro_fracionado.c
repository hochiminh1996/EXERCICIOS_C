/*
	ALGORITMO BÁSICO : PARTE INTEIRA / PARTE REAL
	AUTOR : FELIPPE M
	DESCRIÇÃO : LOCALIZAR A PARTE INTEIRA E FRACIONADA DE UM VALOR REAL
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n;
	
	printf("DIGITE UM NÚMERO REAL : ");
	scanf("%f",&n);
	
	printf("PARTE INTEIRA : %i\n",(int) n);
	printf("PARTE FRACIONADA : %f\n", n - (int)n);
	
}

