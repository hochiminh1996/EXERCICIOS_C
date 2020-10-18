/*
	ALGORITMO B�SICO : TURMA
	AUTOR : FELIPPE M.
	DESCRI��O : ALGORITMO B�SICO DE M�DIA / ALUNO
*/

#include <stdio.h>// lib de comandos de i/o
#include <stdlib.h>//lib padr�o
#include <locale.h>//idioma
#include <conio.h>//getch() = pause
#define N 4

typedef struct{
	char nome[30];
	float media,frequencia;
	
}aluno;

aluno turma[N];


int aluno_media(int n){
	float nota = 0, soma = 0, media=0,frequencia;
	int cont=1,cont2=1,i,j;
	
	for(i=0;i<n;i++){
		soma = 0;
		media = 0;
		cont = 1;
	
		fflush(stdin);//limpa os caracteres digitados anteriormente
		printf("DIGITE O NOME DO ALUNO %i : ",cont2);
		fgets(turma[i].nome,100,stdin);//PEGA UM NOME COM ESPA�OS E DEFINI A QUANTIDADE DE CARACTERES 
		//fgets(armazenamento, tamanho, entrada)
		fflush(stdin);//limpa os caracteres digitados anteriormente
		
		printf("FREQU�NCIA DO ALUNO : ");
		scanf("%f",&turma[i].frequencia);
		
		
		for(j=0;j<4;j++){
			
			printf("NOTA %i : ",cont); // cont serve apenas para enumerar as notas
			scanf("%f",&nota);
			soma = soma + nota;
			media = soma / 4;
			
			cont++;
		}
		
		system("clear || cls");
		turma[i].media = media; // NOTA ATRIBUIDA AO CONTE�DO DAS VARI�VEIS HETEROG�NEAS
		
		cont2++;
		//printf("\nM�DIA : %.2f\n\n",media);
	
	}
	
	printf("\nRESULTADO GERAL\n");
	
	for(i=0,cont = 1;i<n;i++){//INICIA TAMB�M O VALOR DA VARI�VEL CONT, QUE SERVE APENAS PARA ENUMERAR
		if(turma[i].media>=6 && turma[i].frequencia>=75){
			printf("\n***ALUNO APROVADO***\n");
			printf("N�%i\tNOME : %s\tM�dia : %.2f\t Frequ�ncia : %f\n",cont,turma[i].nome,turma[i].media,turma[i].frequencia);
		}else{
			printf("\n***ALUNO REPROVADO***\n");
			printf("N�%i\tNOME : %s\tM�dia : %.2f\t Frequ�ncia : %f\n",cont,turma[i].nome,turma[i].media,turma[i].frequencia);
			if(turma[i].media<6 && turma[i].frequencia<75){
				printf("REPROVADO POR NOTA E FREQU�NCIA\n");
			}else
			if(turma[i].media<6){
				printf("REPROVADO POR NOTA\n");
			}else{
				printf("REPROVADO POR FREQU�NCIA\n");
			}
		}
		cont++;	
 	}
 	getch();
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	printf("COL�GIO PEDRO II\n\n");
	printf("QUANTIDADE DE ALUNOS : ");
	scanf("%i",&n);
	
	printf("\n");
	
	aluno_media(n);
}
