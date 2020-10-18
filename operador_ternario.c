/*
	ALGORITMO BÁSICO : OPERADOR TERNÁRIO
	AUTOR : FELIPPE M.
	DESCRIÇÃO : USO BÁSICO DO OPERADOR TERNÁRIO CONDICIONAL
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	printf("DIGITE UM VALOR : ");
	scanf("%i",&n);
	
	n >=10 ? n++ : n--;
	/*
	
	? SE A EXPRESSÃO FOR VERDADEIRA.
	: SE A EXPRESSÃO FOR FALSA.
	
	OU SEJA, SE N>=10, N++. OU, SE N<10, N--
	
	*/
	printf("%i",n);
}
