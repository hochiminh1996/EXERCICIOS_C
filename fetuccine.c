// ALGORITO : SEQUÃŠNCIA DE FETUCCINE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
    int cont=0,i, a1, a2, n,vetor[50];
 	setlocale(LC_ALL,"PORTUGUESE");
 	
    printf("Digite o 1 termo: ");
    scanf("%d", &a1);
 
    printf("Digite o 2 termo: ");
    scanf("%d", &a2);
 
    printf("\n");
    printf("1º %d", a1);
    printf("\n");
    printf("2º %d", a2);
    printf("\n");
 
    for(i = 3; i <= 50; i++ )
    {
    	//cont++;
        if(i%2 == 0) 
        {
            n = a2 - a1;
        } 
        else 
        {
            n = a2 + a1;
        }
    	printf("%d ", n);
        
		vetor[i] = n;
        a1 = a2;
        a2 = n;

    }
	printf("\n\n");
	//inverso
    for(i=50;i>=3;i--){
		printf("%i ",vetor[i]);
	}
        

  
}

