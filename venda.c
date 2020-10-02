/* 
	ALGORITMO B�SICO : PROJETO MICKEY E DONALD (VERS�O TESTE)
	AUTOR : FELIPPE M
	DESCRI��O : M.VENDA
*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

#define N 5
typedef struct{
	int cod_produto;
	char nome_produto[40];
	float custo_produto;
}cadastro;

cadastro lista[N] = {
	{0,"HAMB�RGUER",40.20},
	{1,"COCA COLA",25.30},
	{2,"BATATA FRITA",4.34},
	{3,"CERVEJA",3.20},
	{4,"CAF�",14.20}
};

void topo(){
	printf("----------------------------------------------------------");
	printf("\n|C�DIGO_DO_PRODUTO | NOME_DO_PRODUTO  | CUSTO_DO_PRODUTO |\n");
	printf("----------------------------------------------------------");
	printf("\n");
}
void exibicao(){
	int i;	
	printf("\n");
	for(i=0;i<N;i++){
		printf("%i%30s  %17.2f \n\n",lista[i].cod_produto,lista[i].nome_produto,lista[i].custo_produto);
	}
	printf("----------------------------------------------------------\n");
}

int calculo_produto(){
	int i=0,indice=0,unit=0;
	char opcao,letra;	
	float total=0;
	
	printf("\n");
		
	do{
		indice = 0;
		printf("SELECIONE O C�DIGO DO PRODUTO:");
		scanf("%i",&indice);	
		if((indice >= 0) && (indice<=4)){
			printf("QUANTAS UNIDADES?");
			scanf("%i",&unit);
				
			if(unit == 0){
				unit = 1;
			}		
		
			total = lista[indice].custo_produto * unit;
			system("cls");
			printf("**********NOTA FISCAL**********\n");
			printf("\nRAZ�O SOCIAL : MICKEY E DONALD");
			printf("\nNOME DO PRODUTO : %s\nPRE�O UNIT�RIO : R$ %.2f\nQUANTIDADE ADQUIRIDA : %i UNIDADES \n\nVALOR TOTAL : R$ %.2f\n\n",
			lista[indice].nome_produto,lista[indice].custo_produto,unit,total);
			system("pause");
			system("cls");
			topo();	
			exibicao();

		}else{
			printf("\n***OP��O INV�LIDA***\n");
			system("pause");
			system("cls");
			topo();	
			exibicao();
		}
		printf("\nDESEJA CONTINUAR ? [S/N]");
		fflush(stdin);
		scanf("%s",&opcao);	
		letra = toupper(opcao);
		
	}while(letra !='N');
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");		
	
	topo();
	exibicao();
	calculo_produto();
	
}

