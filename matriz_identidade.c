/*
	ALGORITMO BÁSICO : MATRIZ IDENTIDADE (4X4) 
	AUTOR : FELIPPE M.
	DESCRIÇÃO : IDENTIDADE (4X4)
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int A[4][4];
	int i=0,j=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				A[i][j] = 1;
			}else{
				A[i][j] =0;
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i ",A[i][j]);
		}
		printf("\n");
	}
}
