/*
	ALGORITMO B�SICO : TRATAMENTO DE STRING
	AUTOR : FELIPPE M.
	DESCRI��O : USO DA FUN��O STRCAT
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[30];
	
	strcpy(nome,"FELIPPE"); // ATRIBUI UM VALOR A VARI�VEL NOME
	strcat(nome," MARQUES");//CONCATENA 'MARQUES' AO VALOR DA VARI�VEL NOME	
	printf("NOME : %s",nome);
	
}
