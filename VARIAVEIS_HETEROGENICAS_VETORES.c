/* 
	ALGORITMO BÁSICO : ANÁLISE BÁSICA DE VARIÁVEIS COMPOSTAS HETEROGÊNEAS
	AUTOR : FELIPPE M
	DESCRIÇÃO : CRIAÇÃO DE UM TIPO ESPECÍFICO DE VARIÁVEIS COM CARACTERÍSTICAS ÚNICAS
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct{//AQUI DEFINIMOS UM TIPO ESPECÍFICO DE VARIÁVEL.  
	char nome[40];
	int idade;
}cadastro;
// CADASTRO É O NOSSO TIPO DE DADO. TEMOS INT, CHAR,FLOAT, DOUBLE; NESTE CENÁRIO TEMPOS UM TIPO ESPECÍFICO QUE QUEREMOS USAR 



 cadastro cad_cliente[2];
/*
	criamos um vetor chamado cad_cliente, ele terá as propriedades (tipo de dado) que especificamos em cadastro
*/


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i=0;

	printf("--------------------------------------\n");
	printf("--------VARIÁVEIS HETEROGÊNEAS--------\n");
	printf("--------------------------------------\n\n");

	for(i=0;i<2;i++){
		printf("DIGITE SEU NOME : ");
		fflush(stdin);//LIMPEZA DE BUFFER

		gets(cad_cliente[i].nome);//irá armazenar o valor no vetor cad_cliente, que possui dentro de si um tipo char[40], que é nome.
		
		printf("DIGITE SUA IDADE : ");
		fflush(stdin);//LIMPEZA DE BUFFER
		scanf("%i",&cad_cliente[i].idade);
		printf("\n");

	}
	
	//EXIBIÇÃO
	for(i=0;i<2;i++){
		printf("--------------------------------------\n");
		printf("INDICE: %i \n",i);
		printf("NOME  : %s \n",cad_cliente[i].nome);
		printf("IDADE : %i anos",cad_cliente[i].idade);
		printf("\n\n");
	}
	
}
