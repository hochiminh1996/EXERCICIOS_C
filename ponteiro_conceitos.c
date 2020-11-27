/*	
	ALGORITMO B�SICO : PONTEIRO
	AUTOR : FELIPPE M.
	DESCRI��O : CONCEITOS B�SICOS DE PONTEIRO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	//Ponteiros, basicamente, t�m como principal objetivo apontar para algum endere�o de mem�ria.
	setlocale(LC_ALL,"PORTUGUESE");
 	int x = 25;
 	int *y;//Definindo um ponteiro do tipo inteiro
 	
 	
 	printf("Endere�o Y = %i\n",&y);//Endere�o de Y
 	printf("Endere�o X = %i\n",&x);//Endere�o de X

 	y = &x;//Y recebe o endere�o do X. Ou seja, qualquer coisa adicionada a Y ter� efeito no X.
 	printf("\nValor de Y = %i\n",y);
 	
 	*y = 30;//O valor trinta ser� armazenado dentro do endere�o de Y (que � o end. de X)
 	printf("Valor atual de x: %i\n", x);
	//Logo, o valor de X ser� 30, n�o 25. Pois, como vimos, o ponteiro Y cont�m o endere�o de X.
	//OBS : Sempre usar * para atribuir valor a um endere�o
 	
}

