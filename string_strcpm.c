/*
	ALGORITMO B�SICO : TRATAMENTO DE STRING
	AUTOR : FELIPPE M.
	DESCRI��O : USO DA FUN��O DE COMPARA��O STRCPM
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char string_1[50];
	char string_2[50];
	int comparador;
	
	printf("DIGITE 1 NOME : ");
	fgets(string_1,50,stdin);//aceita espa�os
	
	printf("DIGITE 2 NOME : ");
	fgets(string_2,50,stdin);
	
	
	comparador = strcmp(string_1,string_2);//efetua compra��o entre duas strings
	printf("%i\n",comparador);
	/*
		A FUN��O STRCMP RETORNA ALGUNS VALORES :
		
		0  = VALORES S�O IGUAIS.
		<0 = A string_1 � MENOR QUE string_2
		>0 = A string_1 � MAIOR QUE string_2 
		1 = VALORES S�O DIFERENTES
	*/
	if(comparador !=0){
		printf("VALORES DIFERENTES");
	}else{
		printf("VALORES IGUAIS");
	}
	
	
}
