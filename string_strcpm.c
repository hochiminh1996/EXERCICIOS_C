/*
	ALGORITMO BÁSICO : TRATAMENTO DE STRING
	AUTOR : FELIPPE M.
	DESCRIÇÃO : USO DA FUNÇÃO DE COMPARAÇÃO STRCPM
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
	fgets(string_1,50,stdin);//aceita espaços
	
	printf("DIGITE 2 NOME : ");
	fgets(string_2,50,stdin);
	
	
	comparador = strcmp(string_1,string_2);//efetua compração entre duas strings
	printf("%i\n",comparador);
	/*
		A FUNÇÃO STRCMP RETORNA ALGUNS VALORES :
		
		0  = VALORES SÃO IGUAIS.
		<0 = A string_1 É MENOR QUE string_2
		>0 = A string_1 É MAIOR QUE string_2 
		1 = VALORES SÃO DIFERENTES
	*/
	if(comparador !=0){
		printf("VALORES DIFERENTES");
	}else{
		printf("VALORES IGUAIS");
	}
	
	
}
