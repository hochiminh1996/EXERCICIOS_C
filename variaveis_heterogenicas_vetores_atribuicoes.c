/*
	ALGORITMO BÁSICO : ANÁLISE BÁSICA DE VARIÁVEIS COMPOSTAS HETEROGÊNEAS
	AUTOR : FELIPPE M.
	DESCRIÇÃO : CRIAÇÃO DE UM TIPO ESPECIFICO DE VARIÁVEL COM CARACTERÍSTICAS ÚNICAS, ALÉM DA MANIPULAÇÃO BÁSICA DE VETORES
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 4


//AQUI CRIAMOS UM TIPO ESPECIFICO DE VARIÁVEL COMPOSTA HERETOGÊNEA QUE SERÁ USADA POSTERIORMENTE DENTRO DE STUDENT
typedef struct{
	char rua[20];
	int numero;
	char cidade[20];
	long long cep;
}adress;



typedef struct{// AQUI CRIAMOS UM TIPO ESPECÍFICO DE VARIÁVEIS COMPOSTAS HETEROGÊNEAS
	char nome[20];
	int eng,math,phys;
	float nota;
	float media_final;
	
	adress endereco; // criado uma variável cujo o tipo é outro struct
}student; // STUDANT É O NOME DO NOSSO TIPO DE DADO.



student data[N] = { // O VETOR DATA, DE 4 POSIÇÕES, RECEBE O TIPO STUDANT
	{"EVANDRO",82,72,55},// A POSIÇÃO [0] ZERO RECEBE EVANDRO...
	{"THOMAS",77,82,79},// A POSIÇÃO [1] ZERO RECEBE THOMAS...
	{"SABRINA",52,62,39},// A POSIÇÃO [2] ZERO RECEBE SABRINA...
	{"MELINDA",61,82,88}// A POSIÇÃO [3] ZERO RECEBE MELINDA...
	
	// OBS : NÃO ATRIBUIMOS VALOR A VARIÁVEL MEDIA_FINAL AQUI.
	
};

int funcao_media(){ // CRIAÇÃO DE UMA FUNÇÃO PARA EFETUAR A MÉDIA
	int i = 0, j = 0,cont=0;
	float result,soma;

	for(i=0;i<N;i++){// 4 ALUNOS
		cont = 0;
		result = 0;
		soma = 0;
		
		printf("DIGITE A RUA : ");
		fflush(stdin);
		gets(data[i].endereco.rua);
		
		
		printf("DIGITE NÚMERO : ");
		fflush(stdin);
		scanf("%i",&data[i].endereco.numero);
		
		
		printf("DIGITE A CIDADE : ");
		fflush(stdin);
		gets(data[i].endereco.cidade);
		
		
		printf("DIGITE O CEP : ");
		fflush(stdin);
		scanf("%lld",&data[i].endereco.cep);
		
		for(j =0 ; j<N;j++){//4 ALUNOS, SENDO QUE CADA ALUNO POSSUI 4 NOTAS

			cont++;// CONTADOR SIMPLES PARA ENUMERAR NOTAS
			printf("DIGITE A %i NOTA de %7s : ",cont,data[i].nome);//IMPRIME O CONTADOR, NOME DO ALUNO
			scanf("%f",&data[i].nota);//RECEBE UMA NOTA QUE SERÁ ARMAZENADA EM VETOR DATA[0] DENTRO DE NOTA 
			soma = soma + data[i].nota;// SOMA IRÁ ACUMULAR OS 4 VALORES DIGITADOS EM NOTA
			
		}
		result = soma / 4;// IRÁ EFETUAR A MÉDIA A PARTIR DOS VALORES ACUMADOS EM SOMA.

		system("cls");//CLEAR
		data[i].media_final = result;//ATRIBUI A MÉDIA DO ALUNO[i] - QUE ESTÁ EM RESULT - NA VARIÁVEL MEDIA_FINAL.
		printf("\nALUNO : %7s\nVETOR_MEDIA[%i] = %.2f\n\n",data[i].nome,i,data[i].media_final);


		/*
			EXIBE O NOME DO ALUNO[I], A MÉDIA EM RESULT, A POSIÇÃO DE CADA VALOR E O VALOR ARMAZENADO EM MEDIA_FINAL
			TEMOS DATA[I], DO TIPO STUDENT, QUE POSSUI A VARIÁVEL ENDEREÇO QUE; POR SUA VEZ, POSSUI UM TIPO ESPECIFICADO CHAMADO ADRESS.
		*/
		
		
	}


}
int main(){
	setlocale(LC_ALL,"PORTUGUESE"); // SETEADO A VARIAÇÃO LATINA (PT)
	int i,indice;
	
	printf("VARIÁVEIS COMPOSTAS HETEROGÊNEAS\n\n");
		
	
	funcao_media();// CHAMA UMA FUNCAO
	printf(">>>RESULTADO FINAL<<<\n\n");
	for(i=0;i<N;i++){
	printf("Nome : %7s \nMédia : %.2f\n",data[i].nome,data[i].media_final);
	//EXIBE AS MEDIAS ARMAZENADAS DE ACORDO COM AS POSIÇÕES EM DATA[I]
	
	printf("ENDEREÇO : %s,nº %i,%s,%lld \n\n",data[i].endereco.rua,data[i].endereco.numero,data[i].endereco.cidade,data[i].endereco.cep);
	//EXIBE OS ENDEREÇOS ARMAZENADAS DE ACORDO COM AS POSIÇÕES EM DATA[I]

	/*
	
	VALE RESSALTAR QUE CRIAMOS  UMA VARIÁVEL COMPOSTA DENTRO DE OUTRA.
	POR EXEMPLO, TEMOS 
	
	*/
		
	}
	printf(">>>>>><<<<<<<");
	
	
	
}
