/*
	ALGORITMO BÁSICO : TRATAMENTO DE STRING
	AUTOR : FELIPPE M.
	DESCRIÇÃO : USO DA FUNÇÃO STRCAT
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[30];
	
	strcpy(nome,"FELIPPE"); // ATRIBUI UM VALOR A VARIÁVEL NOME
	strcat(nome," MARQUES");//CONCATENA 'MARQUES' AO VALOR DA VARIÁVEL NOME	
	printf("NOME : %s",nome);
	
}
