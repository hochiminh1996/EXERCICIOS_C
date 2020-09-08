// ALGORITMO BÁSICO : TABUADA USANDO FOR

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i,tab;
	
	printf("QUAL TABUADA VOCÊ DESEJA?");
	scanf("%i",&tab);
	for(i<=0;i<=10;i++){
		printf("%i x %i = %i\n",tab,i,tab*i);	
	}
}