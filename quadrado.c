// ALGORITMO BÁSICO : QUADRADO DOS NÚMEROS ENTRE 15 E 200

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i=0,numero;
	
	for(i=15;i<=200;i++){
		printf("Quadrado de %i = %i\n",i,i*i);
	}
}