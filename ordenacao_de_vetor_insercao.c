/*
	ALGORITMO BÁSICO : VETORES
	AUTOR : FELIPPE M		AUTOR : FELIPPE M
	DESCRIÇÃO : ORDENAÇÃO DOS ELEMENTOS DE UM VETOR	POR INSERÇÃO
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

	//EXIBINDO O RESULTADO DA ORGANIZAÇÃO DO VETOR
	for(i=0;i<5;i++){
		printf("%i ",vet[i]);
	}
	
}
