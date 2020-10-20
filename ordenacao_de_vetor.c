#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	ALGORITMO B�SICO : VETORES
	AUTOR : FELIPPE M
	DESCRI��O : ORDENA��O DOS ELEMENTOS DE UM VETOR
*/

void ordenacao_vetor(int num){
	int vetor[num],i,j,aux;
	//O TAMANHO DO VETOR SER� DE ACORDO COM O VALOR PASSADO EM NUM
	
	//1 ) PREENCHIMENTO DOS VALORES
	for(i=0;i<num;i++){
		printf("�NDICE [%i] : ",i);
		scanf("%i",&vetor[i]);//OS ELEMENTOS SER�O ATRIBUIDOS A CADA �NDICE [O-NUM]
	}	
	
	//2 ) PROCESSAMENTO 
	for(i=0;i<num;i++){//LA�O QUE PERCORRE OS ELEMENTOS DO VETOR
		for(j=i+1;j<num;j++){
		/*
			IR� VARRER TODOS ELEMENTOS DE 1 AT� NUM 
		*/	
			if(vetor[i]>vetor[j]){//SE O PRIMEIRO VALOR VETOR[I] FOR MAIOR QUE O SEGUNDO VETOR[J]
				aux = vetor[i];//O MAIOR VALOR, DENTRO DE VETOR[I], � ATRIBUIDO A UMA VARI�VEL AUXILIAR.
				vetor[i] = vetor[j];//O MAIOR VALOR [I] IR� RECEBER O MENOR VALOR [J]
				vetor[j] = aux;//O VETOR QUE TINHA O MENOR VALOR IR� RECEBER O CONTE�DO A MAIOR POSI��O
				/*
					CRIANDO ASSIM UMA ORDEM DE VALORES. EX : 10,6,5,1
					10 > 6. O CONTE�DO DE VETOR[0](10) SER� TRANSFERIDO PARA AUX=10.
						VETOR[0] IR� RECEBER O MENOR VALOR (6) E VETOR[1] O CONTE�DO DE AUX.
						6 10...			
				*/
			}
			
		}
	}
	
	//3 ) SA�DA
	printf("\n");
	for(i=0;i<num;i++){
		printf("%i ",vetor[i]);
	}

}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	printf("**************************************\n");
	printf("\tORDENA��O DE VETORES\n");
	printf("**************************************\n\n");
	
	printf("QUAL � O TAMANHO DO VETOR : ");
	scanf("%i",&n);//O USU�RIO ENTRA COM O TAMANHO DO VETOR
	
	ordenacao_vetor(n);//PASSAGEM DO VALOR POR PAR�METRO
	
}
