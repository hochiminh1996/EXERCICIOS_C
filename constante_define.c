/*
	ALGORITMO B�SICO : CONSTANTE
	AUTOR : FELIPPE M.
	DESCRI��O : USO DE UMA CONSTANTE (ICMS)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ICMS 0.18 // USO DE UM CONSTANTE


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float prod;
	const float frete = 10.50;
	
	printf("DIGITE O PRE�O DO PRODUTO : ");
	scanf("%f",&prod);
	
	printf("\nPRE�O : %.2f\nFRETE %.2f\nIMPOSTO : %.2f\n\nPRE�O TOTAL : %.2f ",prod,frete,prod*ICMS,prod*ICMS+prod+frete);
}
