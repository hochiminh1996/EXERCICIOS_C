/*
	ALGORITMO B�SICO : ESTRUTURA DE DADOS
	AUTOR : FELIPPE M.
	DESCRI��O : Escreva um programa que, dado um n�mero de segundos, converta para dias,
	horas, minutos e segundos. Por exemplo, 7322 segundos correspondem a 0
	dias, 2 horas, 2 minutos e 2 segundos.
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");	
   	int tempo, horas, minutos, segundos,dias;
   
 
   
   	printf("Entre com o n�mero de segundos: ");
  	scanf("%i", &tempo);
   
    dias = (tempo/86400);//divis�o inteira do numero de segundos pela quantidade de segundos de um dia
   
    horas = (tempo/3600); //divis�o do segundos pela quantidade de segundos de uma hora
   
    minutos = (tempo - (3600 * horas))/60;
    // Convers�o das horas em segundos e subtraimos o valor dos segundos iniciais. Por fim, a divis�o por 60s (1m)
   
    segundos = (tempo - (3600 * horas) - (minutos * 60));
    /* 
		Convers�o das horas em segundos e subtraimos o valor dos segundos iniciais (tempo - (3600*horas)).
		Por fim, subtraimos os minutos anteriores, convertidos em segundos, com os resultados anteriores -minutos*60
   */
    printf("%id : %ih : %im :%is \n",dias,horas,minutos,segundos);
	
}
