/*
	ALGORITMO B�SICO : PONTEIRO
	AUTOR : FELIPPE M.
	DESCRI��O : VERIFICANDO O ENDERE�O DE MEM�RIA, VIA PONTEIRO
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
	PONTEIRO S�O VARI�VEIS ESPECIAIS QUE ARMAZENAM O ENDERE�O DE MEM�RIA DE OUTRAS VARI�VEIS.
	TODO ENDERE�O DE MEM�RIA � UM HEXADECIMAL. SE UTILIZA %x PARA RECUPERAR ESTE VALOR.
*/

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	int num = 27;
	
	int *ponteiro;//declara��o de uma vari�vel ponteiro 
	
	ponteiro = &num; //est� recebendo o endere�o(&) de mem�ria da vari�vel num
	
	printf("\nPONTEIRO\n");
	printf("\nVALOR DE [NUM]:%i\n",num);	
	printf("ENDERE�O DE [NUM]:%x\n",&num);// X = Ir� trazer o resultado em hexadecimal **TODO ENDERE�O DE MEM�RIA � UM HEXADECIMAL
	printf("CONTE�DO DA VARI�VEL PONTEIRO:%x",&num);
}
