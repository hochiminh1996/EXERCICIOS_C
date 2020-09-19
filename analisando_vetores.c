//VETORES : EXERCICIO BÁSICO

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int num[4],i=0,indice=0,cont=0,j=0,pares[4]={},impares[4]={},vetor_espelho[4] = {}, maior_valor,menor_valor,posicao=0,posicao_menor=0;
	float soma;
	
	
	
	printf("\nV E T O R \n\n");
	for(i=0;i<4;i++){
		printf("%i - DIGITE UM VALOR : ",i);
		scanf("%i",&num[i]);		
	}

	
	printf("\n R E S U L T A D O \n\n");
	
	maior_valor = num[0]; //resetando. 
	menor_valor = num[0]; //resetando. Sem isto não conseguimos obter o menor_valor
	

	//CALCULA OS VALORES PARES/IMPARES. ALÉM DISSO, OBTÉM O MAIOR O MENOR VALOR DIGITADO E SOMA TODOS ELEMENTOS
	for(i=0;i<4;i++){
		if(num[i]%2==0){
			pares[i] = num[i];
		}else if(num[i]%2==1){
			impares[i] = num[i];			
		}
		
		if(num[i]>maior_valor){
			maior_valor = num[i];
			posicao = i;
		}else if(num[i]<menor_valor){
			menor_valor = num[i];
			posicao_menor = i;
		}
		soma+=num[i];		
	}
	
			
	
		
	//ORDEM INVERSA	
	printf("ORDEM INVERSA : ");
	for(i=3;i>=0;i--){
		printf("%i ",num[i]);
	}
		
	//EXIBE OS PARES
	printf("\nPARES : ");
	for(i=3;i>=0;i--){
		if(pares[i]!=0){
			printf("%i ",pares[i]);
		}
	
	}
	
	//EXIBE OS IMPARES
	printf("\nIMPARES : ");
	for(i=3;i>=0;i--){
		if(impares[i]!=0){
			printf("%i ",impares[i]);
		}
	}
	
	
	//ELEMENTOS IDENTICOS
	for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (num[i] == num[j]) {
                cont++;
            }else{
            	
			}
        }
    }	
	
	
	printf("\nMédia : %.2f",soma/4);
	printf("\nMaior Valor : %i [ %i ]",maior_valor,posicao);
	printf("\nMenor Valor : %i [ %i ]",menor_valor,posicao_menor);
	printf("\nValores iguais : %i ",cont);
}
