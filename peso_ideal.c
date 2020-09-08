// ALGORITMO BÁSICO : PESO IDEAL M/F

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");

	char sexo;
	float altura,peso_ideal;
	
	
	printf(" M - Masculino \n F - Feminino\n");
	printf("Digite o sexo :");
	scanf("%c",&sexo);
	
	switch(toupper(sexo)){
		case 'M' :
			
			printf("Digite a sua altura no modelo (1,78) : ");
			scanf("%f",&altura);
			if(altura>=100){ // CASO ALTURA SEJA EM CENTIMETROS
				altura = altura / 100;
				peso_ideal = (72.7*altura) - 58;
				printf("\n===RESULTADO===\n");
				printf("Sexo : Masculino \n");
				printf("Altura : %.2f \n",altura);
				printf("Peso ideal : %.2f Kg",peso_ideal);
			}else {
			
			// CASO ALTURA SEJA EM METROS
			peso_ideal = (72.7*altura) - 58;					
			printf("\n===RESULTADO===\n");
			printf("Sexo : Masculino \n");
			printf("Altura : %.2f \n",altura);
			printf("Peso ideal : %.2f Kg",peso_ideal);
			}
		break;
		
		case 'F' :
			printf("Digite a sua altura no modelo (1,78) : ");
			scanf("%f",&altura);
			if(altura>=100){ // CASO ALTURA SEJA EM CENTIMETROS
				altura = altura / 100;
				peso_ideal = (62.1*altura) - 44.7;
				printf("\n===RESULTADO===\n");
				printf("Sexo : Feminino \n");
				printf("Altura : %.2f \n",altura);
				printf("Peso ideal : %.2f Kg",peso_ideal);
			}else {		
			
			// CASO ALTURA SEJA EM METROS
			peso_ideal = (62.1*altura) - 44.7;
			printf("\n===RESULTADO===\n");
			printf("Sexo : Feminino \n");
			printf("Altura : %.2f \n",altura);
			printf("Peso ideal : %.2f Kg",peso_ideal);
			}
		break;
		default : printf("OPÇÃO INCORRETA...");
		
	}
}