//algoritmo básico : tabuada

#include <stdio.h>
#include <stdlib.h>

main ()
{
	
	int i,tab;
	printf("DIGITE A TABUADA : ");
	scanf("%i",&tab);
	
	do{	
		printf("%i x %i = %i \n",tab,i,tab*i);
		i++;
	}while(i<=10);
	
}