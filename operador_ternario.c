/*
	ALGORITMO B�SICO : OPERADOR TERN�RIO
	AUTOR : FELIPPE M.
	DESCRI��O : USO B�SICO DO OPERADOR TERN�RIO CONDICIONAL
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
	
	? SE A EXPRESS�O FOR VERDADEIRA.
	: SE A EXPRESS�O FOR FALSA.
	
	OU SEJA, SE N>=10, N++. OU, SE N<10, N--
	
	*/
	printf("%i",n);
}
