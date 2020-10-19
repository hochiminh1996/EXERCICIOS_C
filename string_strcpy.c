/*
	ALGORITMO BÁSICO : STRCPY
	AUTOR : FELIPPE M.
	DESCRIÇÃO : CÓPIA DE UMA STRING PARA OUTRA VARIÁVEL 
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>//STRLEN /STRCPY
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");		
	char nome [30], nome2[30] = "LUCAS";
	int i;
	
	
	printf("DIGITE UM NOME : ");
	fgets(nome,30,stdin);
/*
	VARIÁVEL (NOME) ONDE SERÁ ARMAZENADA
	30 TAMANHO DA STRNG
	STDIN VALORES DE ENTRADA
*/
	printf("\nORIGINAL  (NOME2)  : %s \n",nome2);

	strcpy(nome2,nome);// O VALOR FOI TRANSFERIDO PARA A VARIÁVEL NOME2
/*
	STRCPY É UMA FUNÇÃO QUE COPIA VALORES DE UMA STRING PARA OUTRA VARIÁVEL.
	STRCPY(DESTINO, ORIGEM)
	
	*DESTINO : ONDE SERÁ ARMAZENADO
	*ORIGEM : A VARIÁVEL QUE SERÁ COPIADA
*/	
	printf("MODIFICADO (NOME2) : %s\n",nome2);
	
	//'\0' TERMINADOR DE STRING
	for(i=0;nome2[i]!='\0';i++){
		printf("%c[%i]\t ",nome[i],i);
		//MOSTRA TODOS CARACTERES JUNTO COM SUAS POSIÇÕES A PARTIR DO INDICE
	}
}
