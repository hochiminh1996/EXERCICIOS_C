// ALGORITMO BÁSICO : CALCULAR FATORIAL

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i, num, fatorial;
	char opcao;
	
	
	do {
		i = num = fatorial = 0;
		
		printf("----FATORIAL----\n");
		printf("DIGITE UM VALOR : ");
		scanf("%i",&num);
		fatorial = num;
		
		printf("\n");
		
		for(i=num-1;i>0;i--){
			fatorial = fatorial * i;
			printf("%i x %i = %i \n",num,i,fatorial);
		}
		
		printf("\n");
		printf("DESEJA CONTINUAR ?");
		scanf("%s",&opcao);
		system("cls");
		
	}while(opcao!='n');
	
}