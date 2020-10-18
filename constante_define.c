/*
	ALGORITMO BÁSICO : CONSTANTE
	AUTOR : FELIPPE M.
	DESCRIÇÃO : USO DE UMA CONSTANTE (ICMS)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ICMS 0.18 // USO DE UM CONSTANTE


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float prod;
	
	printf("DIGITE O PREÇO DO PRODUTO : ");
	scanf("%f",&prod);
	
	printf("\nPREÇO : %.2f\nIMPOSTO : %.2f\n\nPREÇO TOTAL : %.2f ",prod,prod*ICMS,prod*ICMS+prod);
}
