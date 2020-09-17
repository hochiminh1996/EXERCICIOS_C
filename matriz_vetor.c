// ALGORITMO BÁSICO : INTRODUÇÃO À MATRIZ E VETORES

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define LINHA 2//CONSTANTE 2X2
#define COLUNA 2//CONSTANTE 2X2
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float alunos[LINHA][COLUNA];	// linha - Coluna
	int i;	// controla as linhas
	int j;	// controla as colunas
	
	
	printf("\nM A T R I Z \n\n");

	// leitura dos dados
	for(i=0; i<LINHA; i++)		// controla as linhas
	{
		for(j=0; j<COLUNA; j++)		// controlando as colunas
		{
			printf("Digite a nota (%i|%i) : ",i,j);
			scanf("%f", &alunos[i][j]);	
		}	
		
	}
	
	printf("\nR E S U L T A D O \n\n");
	
	for(i=0; i<LINHA; i++)		// controla as linhas
	{
		for(j=0; j<COLUNA; j++)		// controlando as colunas
		{
			printf("Linha : %i | Coluna : % i | VALOR :  %.0f\n", i,j,alunos[i][j]);	
		}	
		
	}
}
