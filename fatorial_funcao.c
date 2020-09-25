/*
	ALGORITMO BÁSICO : FUNÇÕES EM C
	AUTOR : FELIPPE M
	DESCRIÇÃO : FATORIAL
	
	6) Codifique o programa em linguagem C com uma função que receba um valor inteiro e
	positivo, calcule e mostre o seu fatorial.	

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int fatorial(int n){
	int i,j=0,fat;
	
	fat = n;
	for(i=n-1;i>1;i--){
		fat = fat * i;
	}
	return fat;
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n,r;
	
	printf("DIGITE UM VALOR : ");
	scanf("%i",&n);
	printf("\n");
	
	printf("FATORIAL (%i): %i",n,fatorial(n));

}
