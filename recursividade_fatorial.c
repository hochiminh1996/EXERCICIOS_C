/*
	ALGORITMO B�SICO : RECURSIVIDADE 
	AUTOR : FELIPPE M.
	DESCRI��O : APLICA��O DO CONCEITO DE RECURSIVIDADE EM UM FATORIAL  
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int fatorial(int num){
	int fat = 0;
	if(num == 1){
		return 1;
	}else{
		fat = num * fatorial(num-1);
		return fat;
	}
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	printf("RECURSIVIDADE\n\nDIGITE UM VALOR : ");
	scanf("%i",&n);
	
	printf("O FATORIAL DE %i!=%i\n",n,fatorial(n));
}
