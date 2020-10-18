/*
	ALGORITMO BÁSICO : SWITCH
	AUTOR : FELIPPE M.
	DESCRIÇÃO : ESTRUTURA CONDICIONAL SWITCH
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	printf("DIGITE UM VALOR DE 1 A 7 : ");
	scanf("%i", &n);
	
	switch(n){
		case 1 :
			printf("DOMINGO");
		break;	
		
		case 2 :
			printf("SEGUNDA-FEIRA");
		break;	
		
		case 3 :
			printf("TERÇA-FEIRA");
		break;	
		
		case 4 :
			printf("QUARTA-FEIRA");
		break;	
		
		case 5 :
			printf("QUINTA-FEIRA");
		break;	
		
		case 6 :
			printf("SEXTA-FEIRA");
		break;	
		
		case 7 :
			printf("SÁBADO");
		break;	
		
		default : printf("DIGITO INCORRETO");
	}

}
