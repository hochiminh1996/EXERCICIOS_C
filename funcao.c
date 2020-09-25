/*
	ALGORITMO BÁSICO : FUNÇÕES EM C
	AUTOR : FELIPPE M
	DESCRIÇÃO : TRANSFORMAR HORAS / MINUTOS / SEGUNDOS EM APENAS SEGUNDOS TOTAIS.
	
	2) Codifique o programa em linguagem C com uma função que receba três números inteiros
	como parâmetros, representado horas, minutos e segundos, e os converta em segundos.
	Exemplo: 2h:40min:10s correspondem a 9610 segundos.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int conversor(int horas,int minutos,int segundos){
	// RECEPÇÃO DE TRÊS PARÂMETROS : HORA, MINUTOS, SEGUNDOS;
	// int conversao = 0; 
	
	//conversao = (horas * 60 * 60) + (minutos * 60 ) + segundos;

	return horas * 60 * 60 + minutos * 60 + segundos;
	// EFETUA A OPERAÇÃO SEM A NECESSIDADE DE UMA VARIÁVEL AUXILIAR
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int horas = 0, minutos = 0, segundos = 0;
	
	printf("DIGITE AS HORAS: ");
	scanf("%i",&horas);

	printf("DIGITE OS MINUTOS: ");
	scanf("%i",&minutos);

	printf("DIGITE OS SEGUNDOS: ");
	scanf("%i",&segundos);

	
	printf("HORAS : %i \nMINUTOS : %i \nSEGUNDOS : %i \nCONVERSÃO : %is",horas,minutos,segundos,conversor(horas,minutos,segundos));
	//horas, minutos e segundos são passadas para a funçõa conversor através de parâmetros.
}
