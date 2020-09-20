// ALGORITMO BÁSICO : NÚMEROS PRIMOS
// AUTOR : FELIPPE M
// DESCRIÇÃO : VERIFICAR SE UM NÚMERO É PRIMO.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	/*
	RESSALVA : UM NÚMERO PRIMO TEM APENAS DOIS DIVISORES : ELE MESMO E 1.
	*/
	setlocale(LC_ALL, "Portuguese");
	int num=0,i = 0,primo=0;
	
	printf("DIGITE UM VALOR : ");
	scanf("%i",&num);


	for(i=1;i<=num;i++){		
		if(num%i==0){//
			primo = primo + 1;// CALCULA A QUANTIDADE DE VEZES QUE O NÚMERO DIGITADO É DIVISÍVEL POR I
			printf("[%i]",i);
		}
	}	
	printf("\n");
	
	if(primo == 2){
		printf("%i é primo pois tem apenas %i divisores",num,primo);
	}else{
		printf("%i não é primo pois tem %i divisores",num,primo);
	}		
}
