/*
	ALGORITMO B�SICO : VETORES
	AUTOR : FELIPPE M		AUTOR : FELIPPE M
	DESCRI��O : ORDENA��O DOS ELEMENTOS DE UM VETOR	POR INSER��O
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	int i,j,x,vet[5] = {40,30,10,50,20};
	
	
	//EXIBINDO ELEMENTOS DO VETOR
	for(i=0;i<5;i++){
		printf("%i ",vet[i]);

	}
	printf("\n\n");

	//ORGANIZANDO OS ELEMENTOS DO VETOR
	for(i=1;i<5;i++){

		x = vet[i];
		j = i - 1;
		
		while(j>=0 && vet[j]>x){
			vet[j+1] = vet[j];
			j--;	
		}
		vet[j+1] = x;
	}

	//EXIBINDO O RESULTADO DA ORGANIZA��O DO VETOR
	for(i=0;i<5;i++){
		printf("%i ",vet[i]);
	}
	
}
