// ALGORITMO BÁSICO : SINTAXE DO SWITCH EM C

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int valor;
	
	printf("DIGITE UM VALOR : ");
	scanf("%i",&valor);
	
	//printf("%i",valor);
	
	switch(valor){
		case 0 : printf("DIGITOU 0");
		break;
		case 1 : printf("DIGITOU 1");
		break;
		case 2 : printf("DIGITOU 2");
		break;
		case 3 : printf("DIGITOU 3");
		break;
		case 4 : printf("DIGITOU 4");
		break;
		case 5 : printf("DIGITOU 5");
		break;
		case 6 : printf("DIGITOU 6");
		break;
		case 7 : printf("DIGITOU 7");
		break;
		case 8 : printf("DIGITOU 8");
		break;
		case 9 : printf("DIGITOU 9");
		break;
		default : printf("VALOR FORA DO ESCOPO");
		// DEFAULT SERÁ ATIVADO CASO NÃO HAJA NENHUMA OPÇÃO SATISFATÓRIA OU AUSÊNCIA DE BREAK
	}
	
}