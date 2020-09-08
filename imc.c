// ALGORITMO BÁSICO : CALCULAR O IMC

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float altura, peso,multiplicacao_altura,imc;
	char nome[30],opcao,letra;
	
	do {
		altura = peso = multiplicacao_altura = imc = 0;
		printf("--------IMC--------\n");
		printf("DIGITE SEU NOME : ");
		scanf("%s",&nome);
		
		printf("DIGITE SEU PESOS (Kg) : ");
		scanf("%f",&peso);
		
		printf("DIGITE SUA ALTURA (1,75) : ");
		scanf("%f",&altura);
		
		if(altura>100){
			altura = altura  / 100;
			multiplicacao_altura = altura * altura;
			imc = peso / multiplicacao_altura;
		}else {
		
			multiplicacao_altura = altura * altura;
			imc = peso / multiplicacao_altura;
		}
		
		
		if(imc<=17){
			printf("\nRESULTADO\n");
			printf("NOME   : %s\n",nome);
			printf("PESO   : %.2f Kg\n",peso);
			printf("ALTURA : %.2f M\n",altura);
			printf("IMC    : %.2f M\n",imc);
			printf("SAÚDE  : MUITO ABAIXO DO PESO [<17]\n");	
		}else 
			if((imc>17) && (imc<=18.5)){
				printf("\nRESULTADO\n");
				printf("NOME   : %s\n",nome);
				printf("PESO   : %.2f Kg\n",peso);
				printf("ALTURA : %.2f M\n",altura);
				printf("IMC    : %.2f M\n",imc);
				printf("SAÚDE  : ABAIXO DO PESO [>17<=18.5] \n");		
			}else
				if((imc>18.5) && (imc<=25)){
					printf("\nRESULTADO\n");
					printf("NOME   : %s\n",nome);
					printf("PESO   : %.2f Kg\n",peso);
					printf("ALTURA : %.2f M\n",altura);
					printf("IMC    : %.2f M\n",imc);
					printf("SAÚDE  : NORMAL [>18.5<=25]\n");	
				}else 
					if((imc>25) && (imc<=30)){
						printf("\nRESULTADO\n");
						printf("NOME   : %s\n",nome);
						printf("PESO   : %.2f Kg\n",peso);
						printf("ALTURA : %.2f M\n",altura);
						printf("IMC    : %.2f M\n",imc);
						printf("SAÚDE  : SOBREPESO [>25<=30]\n");
					}else 
						if((imc>30) && (imc<=35)){
							printf("\nRESULTADO\n");
							printf("NOME   : %s\n",nome);
							printf("PESO   : %.2f Kg\n",peso);
							printf("ALTURA : %.2f M\n",altura);
							printf("IMC    : %.2f M\n",imc);
							printf("SAÚDE  : OBESIDADE [>30<=35]\n");
						}else 
							if((imc>35) && (imc<=40)){
								printf("\nRESULTADO\n");
								printf("NOME   : %s\n",nome);
								printf("PESO   : %.2f Kg\n",peso);
								printf("ALTURA : %.2f M\n",altura);
								printf("IMC    : %.2f M\n",imc);
								printf("SAÚDE  : OBESIDADE SEVERA [>35<=40]\n");
							}else 
								if(imc>40){
									printf("\nRESULTADO\n");
									printf("NOME   : %s\n",nome);
									printf("PESO   : %.2f Kg\n",peso);
									printf("ALTURA : %.2f M\n",altura);
									printf("IMC    : %.2f M\n",imc);
									printf("SAÚDE  : OBESIDADE MÓRBIDA [>40]\n");	
								}
		
		printf("\nDESEJA CONTINUAR [s/n]?");
		scanf("%s",&opcao);
		system("cls");
		letra = toupper(opcao);
		
	
	}while(letra!='N');
}
