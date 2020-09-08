//algoritmo básico : mês switch

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int mes;
	
	printf("-----CALENDÁRIO-----\n");
	printf("DIGITE O MÊS EM ALGARISMOS:");
	scanf("%i",&mes);
	
	
	switch(mes){
		case 1 : printf("1-JANEIRO");			
		break;	
		
		case 2 : printf("2-FEVEREIRO");			
		break;	
		
		case 3 : printf("3-MARÇO");			
		break;	
		
		case 4 : printf("4-ABRIL");			
		break;	
		
		case 5 : printf("5-MAIO");			
		break;	
		
		case 6 : printf("6-JUNHO");			
		break;	
		
		case 7 : printf("7-JULHO");			
		break;	
		
		case 8 : printf("8-AGOSTO");			
		break;
		
		case 9 : printf("9-SETEMBRO");			
		break;
		
		case 10 : printf("10-OUTUBRO");			
		break;
		
		case 11 : printf("11-NEVEMBRO");			
		break;
		
		case 12 : printf("12-DEZEMBRO");			
		break;
		
		default : printf("MÊS INCORRETO");						
	}

}