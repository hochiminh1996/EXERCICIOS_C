// ALGORITMO B�SICO : N�MEROS PRIMOS
// AUTOR : FELIPPE M
// DESCRI��O : VERIFICAR SE UM N�MERO � PRIMO.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	/*
	RESSALVA : UM N�MERO PRIMO TEM APENAS DOIS DIVISORES : ELE MESMO E 1.
	*/
	setlocale(LC_ALL, "Portuguese");
	int num=0,i = 0,primo=0;
	
	printf("DIGITE UM VALOR : ");
	scanf("%i",&num);


	for(i=1;i<=num;i++){		
		if(num%i==0){//
			primo = primo + 1;// CALCULA A QUANTIDADE DE VEZES QUE O N�MERO DIGITADO � DIVIS�VEL POR I
			printf("[%i]",i);
		}
	}	
	printf("\n");
	
	if(primo == 2){
		printf("%i � primo pois tem apenas %i divisores",num,primo);
	}else{
		printf("%i n�o � primo pois tem %i divisores",num,primo);
	}		
}
