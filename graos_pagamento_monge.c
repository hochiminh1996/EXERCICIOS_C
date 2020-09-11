// ALGORITMO BÁSICO : MONGE E SEUS GRÃOS DE PAGAMENTO

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float grao=0;// FLOAT PORQUE O TIPO INT NÃO SUPORTARIA COMPORTAR OS VALORES DA VARIÁVEL GRAOS.

	int quadro_tabuleiro=0;

     

    for(grao=1;grao>0 && quadro_tabuleiro<64;grao+=grao){
    	/*
		grao começará com 1. A condição  será executada apenas 
		SE grao >0 e menor que o número de qudradados do tabuleiro(64)
    	
    	A soma de cada grão seguira o seguite padrão grao = grao + grao.
    	Ou seja, 1 = 1 + 1 = 2 | 2 = 2 + 2 = 4 | 4 = 4 + 4 = 8...
    	
    	
    	*/
		quadro_tabuleiro++;
		// irá somar 64 posições no tabuleiro.
		
		
    	printf("%i° quadro tem %.0f graos\n",quadro_tabuleiro,grao);
    	//IRÁ EXIBIR CADA POSIÇÃO DO TABULEIRO JUNTO COM A QUANTIDADE DE GRAOS DE CADA UM. Ou seja, grao = grao + grao
    }

	
	
}
