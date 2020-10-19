/*
	ALGORITMO B�SICO : STRCPY
	AUTOR : FELIPPE M.
	DESCRI��O : C�PIA DE UMA STRING PARA OUTRA VARI�VEL 
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>//STRLEN /STRCPY
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");		
	char nome [30], nome2[30];
	int i;
	
	
	printf("DIGITE UM NOME : ");
	fgets(nome,30,stdin);
/*
	VARI�VEL (NOME) ONDE SER� ARMAZENADA
	30 TAMANHO DA STRNG
	STDIN VALORES DE ENTRADA
*/
	
	strcpy(nome2,nome);// O VALOR FOI TRANSFERIDO PARA A VARI�VEL NOME2
/*
	STRCPY � UMA FUN��O QUE COPIA VALORES DE UMA STRING PARA OUTRA VARI�VEL.
	STRCPY(DESTINO, ORIGEM)
	
	*DESTINO : ONDE SER� ARMAZENADO
	*ORIGEM : A VARI�VEL QUE SER� COPIADA
*/	
	
	printf("NOME : %s ",nome2);
	//'\0' TERMINADOR DE STRING
	for(i=0;nome2[i]!='\0';i++){
		printf("%c[%i]\t ",nome[i],i);
		//MOSTRA TODOS CARACTERES JUNTO COM SUAS POSI��ES A PARTIR DO INDICE
	}
}
