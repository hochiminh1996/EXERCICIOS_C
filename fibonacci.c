/*
	ALGORITMO B�SICO : FIBONACCI 
	AUTOR : FELIPPE M.
	DESCRI��O : SEQU�NCIA DOS TERMOS DE FIB DE ACORDO COM O VALOR APRESENTADO. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n=0,i=0,a=1,b=0,c=a;
	 
	
	printf("\nDIGITE UM VALOR : ");
	scanf("%i",&n);
	
	printf("\nOS %i TERMOS DA SEQU�NCIA DE FIBONACCI S�O: \n\n0 ",n);
	for(i=1;i<n;i++){
		
		c = a + b;
		a = b;
		b = c;
		printf("%i ",b);
	}
	printf("\n");
}
