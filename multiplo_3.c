// ALGORITMO BÁSICO : MÚLTIPLOS DE 3. 0-100

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i=0,numero;
	
	printf("DIGITE UM VALOR : ");
	scanf("%i",&numero);
	
	while(i<=numero){
		printf("%i ",i);
		i = i + 3; 
	}
}