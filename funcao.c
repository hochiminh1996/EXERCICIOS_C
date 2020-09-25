/*
	ALGORITMO B�SICO : FUN��ES EM C
	AUTOR : FELIPPE M
	DESCRI��O : TRANSFORMAR HORAS / MINUTOS / SEGUNDOS EM APENAS SEGUNDOS TOTAIS.
	
	2) Codifique o programa em linguagem C com uma fun��o que receba tr�s n�meros inteiros
	como par�metros, representado horas, minutos e segundos, e os converta em segundos.
	Exemplo: 2h:40min:10s correspondem a 9610 segundos.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int conversor(int horas,int minutos,int segundos){
	// RECEP��O DE TR�S PAR�METROS : HORA, MINUTOS, SEGUNDOS;
	// int conversao = 0; 
	
	//conversao = (horas * 60 * 60) + (minutos * 60 ) + segundos;

	return horas * 60 * 60 + minutos * 60 + segundos;
	// EFETUA A OPERA��O SEM A NECESSIDADE DE UMA VARI�VEL AUXILIAR
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

	
	printf("HORAS : %i \nMINUTOS : %i \nSEGUNDOS : %i \nCONVERS�O : %is",horas,minutos,segundos,conversor(horas,minutos,segundos));
	//horas, minutos e segundos s�o passadas para a fun��a conversor atrav�s de par�metros.
}
