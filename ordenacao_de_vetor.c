/* 
	ALGORITMO BÁSICO : VETORES
	AUTOR : FELIPPE M
	DESCRIÇÃO : ORDENAÇÃO DOS ELEMENTOS DE UM VETOR (BUBBLESORT)
	EMPURRANDO OS MAIORES VALORES PARA "FRENTE".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordenacao_vetor(int num){
	int vetor[num],i,j,aux;
	//O TAMANHO DO VETOR SERÁ DE ACORDO COM O VALOR PASSADO EM NUM
	
	//1 ) PREENCHIMENTO DOS VALORES
	for(i=0;i<num;i++){
		printf("ÍNDICE [%i] : ",i);
		scanf("%i",&vetor[i]);//OS ELEMENTOS SERÃO ATRIBUIDOS A CADA ÍNDICE [O-NUM]
	}	
	
	//2 ) PROCESSAMENTO 
	for(i=0;i<num;i++){//LAÇO QUE PERCORRE OS ELEMENTOS DO VETOR
		for(j=i+1;j<num;j++){
		/*
			IRÁ VARRER TODOS ELEMENTOS DE 1 ATÉ NUM 
		*/	
			if(vetor[i]>vetor[j]){//SE O PRIMEIRO VALOR VETOR[I] FOR MAIOR QUE O SEGUNDO VETOR[J]
				aux = vetor[i];//O MAIOR VALOR, DENTRO DE VETOR[I], É ATRIBUIDO A UMA VARIÁVEL AUXILIAR.
				vetor[i] = vetor[j];//O MAIOR VALOR [I] IRÁ RECEBER O MENOR VALOR [J]
				vetor[j] = aux;//O VETOR QUE TINHA O MENOR VALOR IRÁ RECEBER O CONTEÚDO A MAIOR POSIÇÃO
				/*
					CRIANDO ASSIM UMA ORDEM DE VALORES. EX : 10,6,5,1
					10 > 6. O CONTEÚDO DE VETOR[0](10) SERÁ TRANSFERIDO PARA AUX=10.
						VETOR[0] IRÁ RECEBER O MENOR VALOR (6) E VETOR[1] O CONTEÚDO DE AUX.
						6 10...			
				*/
			}
			
		}
	}
	
	//3 ) SAÍDA
	printf("\n");
	for(i=0;i<num;i++){
		printf("%i ",vetor[i]);
	}

}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	printf("**************************************\n");
	printf("\tORDENAÇÃO DE VETORES\n");
	printf("**************************************\n\n");
	
	printf("QUAL É O TAMANHO DO VETOR : ");
	scanf("%i",&n);//O USUÁRIO ENTRA COM O TAMANHO DO VETOR
	
	ordenacao_vetor(n);//PASSAGEM DO VALOR POR PARÂMETRO
	
}
