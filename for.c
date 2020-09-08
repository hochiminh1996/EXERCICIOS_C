// ALGORITMO BÁSICO : LAÇO DE REPETIÇÃO FOR EM C

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	
	// QUANDO SE SABE O NÚMERO DE VALORES QUE SERÁ PERCORRIDO.
	for(i<=0;i<=10;i++){
		printf("%i\n",i);	
		
		// i <= 0 INICIALIZAÇÃO
		// i <=10 CONDIÇÃO
		// i++ incrementador (atualização)	
	}
}