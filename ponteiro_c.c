/*
	ALGORITMO BÁSICO : PONTEIRO
	AUTOR : FELIPPE M.
	DESCRIÇÃO : VERIFICANDO O ENDEREÇO DE MEMÓRIA, VIA PONTEIRO
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
	PONTEIRO SÃO VARIÁVEIS ESPECIAIS QUE ARMAZENAM O ENDEREÇO DE MEMÓRIA DE OUTRAS VARIÁVEIS.
	TODO ENDEREÇO DE MEMÓRIA É UM HEXADECIMAL. SE UTILIZA %x PARA RECUPERAR ESTE VALOR.
*/

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	int num = 27;
	
	int *ponteiro;//declaração de uma variável ponteiro 
	
	ponteiro = &num; //está recebendo o endereço(&) de memória da variável num
	
	printf("\nPONTEIRO\n");
	printf("\nVALOR DE [NUM]:%i\n",num);	
	printf("ENDEREÇO DE [NUM]:%x\n",&num);// X = Irá trazer o resultado em hexadecimal **TODO ENDEREÇO DE MEMÓRIA É UM HEXADECIMAL
	printf("CONTEÚDO DA VARIÁVEL PONTEIRO:%x",&num);
}
