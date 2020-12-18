/*
	ALGORITMO BÁSICO : VETORES
	AUTOR : FELIPPE M		AUTOR : FELIPPE M
	DESCRIÇÃO : ORDENAÇÃO DOS ELEMENTOS DO VETOR PELO MÉTODO BOLHA
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	int n,i,j,x,vet[5] = {40,30,20,10,0};
	n = 5;//quantidade de elementos do vetor
	
	//EXIBINDO ELEMENTOS DO VETOR
	for(i=0;i<5;i++){
		printf("%i ",vet[i]);

	}
	printf("\n\n");
	
	//ORGANIZANDO OS ELEMENTOS DO VETOR
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(vet[j]>vet[j+1]){
				x = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = x;
			}
		}
	}
	
	//EXIBINDO O RESULTADO DA ORGANIZAÇÃO DO VETOR
	for(i=0;i<5;i++){
		printf("%i ",vet[i]);
	}
	
	
}
