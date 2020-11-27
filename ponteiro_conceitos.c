/*	
	ALGORITMO BÁSICO : PONTEIRO
	AUTOR : FELIPPE M.
	DESCRIÇÃO : CONCEITOS BÁSICOS DE PONTEIRO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	//Ponteiros, basicamente, têm como principal objetivo apontar para algum endereço de memória.
	setlocale(LC_ALL,"PORTUGUESE");
 	int x = 25;
 	int *y;//Definindo um ponteiro do tipo inteiro
 	
 	
 	printf("Endereço Y = %i\n",&y);//Endereço de Y
 	printf("Endereço X = %i\n",&x);//Endereço de X

 	y = &x;//Y recebe o endereço do X. Ou seja, qualquer coisa adicionada a Y terá efeito no X.
 	printf("\nValor de Y = %i\n",y);
 	
 	*y = 30;//O valor trinta será armazenado dentro do endereço de Y (que é o end. de X)
 	printf("Valor atual de x: %i\n", x);
	//Logo, o valor de X será 30, não 25. Pois, como vimos, o ponteiro Y contém o endereço de X.
	//OBS : Sempre usar * para atribuir valor a um endereço
 	
}

