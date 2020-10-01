/* 
	ALGORITMO B�SICO : AN�LISE B�SICA DE VARI�VEIS COMPOSTAS HETEROG�NEAS
	AUTOR : FELIPPE M
	DESCRI��O : CRIA��O DE UM TIPO ESPEC�FICO DE VARI�VEIS COM CARACTER�STICAS �NICAS
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct{//AQUI DEFINIMOS UM TIPO ESPEC�FICO DE VARI�VEL.  
	char nome[40];
	int idade;
}cadastro;
// CADASTRO � O NOSSO TIPO DE DADO. TEMOS INT, CHAR,FLOAT, DOUBLE; NESTE CEN�RIO TEMPOS UM TIPO ESPEC�FICO QUE QUEREMOS USAR 



 cadastro cad_cliente[2];
/*
	criamos um vetor chamado cad_cliente, ele ter� as propriedades (tipo de dado) que especificamos em cadastro
*/


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i=0;

	printf("--------------------------------------\n");
	printf("--------VARI�VEIS HETEROG�NEAS--------\n");
	printf("--------------------------------------\n\n");

	for(i=0;i<2;i++){
		printf("DIGITE SEU NOME : ");
		fflush(stdin);//LIMPEZA DE BUFFER

		gets(cad_cliente[i].nome);//ir� armazenar o valor no vetor cad_cliente, que possui dentro de si um tipo char[40], que � nome.
		
		printf("DIGITE SUA IDADE : ");
		fflush(stdin);//LIMPEZA DE BUFFER
		scanf("%i",&cad_cliente[i].idade);
		printf("\n");

	}
	
	//EXIBI��O
	for(i=0;i<2;i++){
		printf("--------------------------------------\n");
		printf("INDICE: %i \n",i);
		printf("NOME  : %s \n",cad_cliente[i].nome);
		printf("IDADE : %i anos",cad_cliente[i].idade);
		printf("\n\n");
	}
	
}
