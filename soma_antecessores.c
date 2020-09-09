// ALGORITMO BÁSICO : SOMA DOS ANTECESSORES 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i=0,numero,soma=0;
	
	printf("DIGITE UM VALOR : ");
	scanf("%i",&numero);
	
	for(i=numero;i>0;i--){ 
		soma = soma + i;
		if(i>1){
			printf("%i + ",i);
		}else if(i==1){
			printf("%i = ",i);	
		}
	}	
	printf("%i",soma);

}