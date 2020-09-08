// ALGORITMO BÁSICO : emulando * e uso de comparativo de char

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // PARA BUSCAR FUNÇÃO GETCH
#include <string.h> // BUSCAR A FUNÇÃO QUE EFETUA A COMPARAÇÃO ENTRE STRING : STRCMP
#include <ctype.h> //TOUPPER TOLOWER
#include <locale.h>// TEMPO
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char senha[5] = "1310",password[5],op;
	int i;
	printf("DIGITE A SENHA :");
	for (i=0;i<4;i++) {//irá executar de 0 a 3 
	    password[i]=getch();// o vetor password irá armazentar todos caracteres de acordo com suas posições password[o] = "1" / password[1] = "3" / 
	    printf("*");
	}
	
	//printf(" %s",senha);
	//printf(" %s\n",password);
	//printf("%i\n",strcmp(senha,password));
	
	
	if(strcmp(senha,password)==0){ // 0 = ambas são iguais // 1 = ambas são diferentes
		printf("\n");
		printf("=======MENU========\n\n");
		printf("a = SALDO\n");
		printf("b = DEPÓSITO\n");
		printf("c = PAGAMENTO\n");
		printf("d = TRANSFERÊNCIA\n");
		printf("e = SAIR\n\n");
		printf("DIGITE UMA OPÇÃO :");
		scanf(" %c",&op); 
		switch(tolower(op)){
			case 'a' : printf("OPERAÇÃO : SALDO...");
			break;
			case 'b' : printf("OPERAÇÃO : DEPÓSITO...");
			break;
			case 'c' : printf("OPERAÇÃO : PAGAMENTO...");
			break;
			case 'd' : printf("OPERAÇÃO : TRANSFERÊNCIA...");
			break;
			case 'e' : printf("OPERAÇÃO : ENCERRAR OPERAÇÕES...");
			break;
	   	 default :
 			printf("Opção inválida");	
		}
		getch();	
	}else {
		printf("\nSENHA INCORRETA");
	}
	
}
