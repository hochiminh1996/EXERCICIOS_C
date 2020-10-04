/*
	ALGORITMO B�SICO : AN�LISE B�SICA DE VARI�VEIS COMPOSTAS HETEROG�NEAS
	AUTOR : FELIPPE M.
	DESCRI��O : CRIA��O DE UM TIPO ESPECIFICO DE VARI�VEL COM CARACTER�STICAS �NICAS, AL�M DA MANIPULA��O B�SICA DE VETORES
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 4


//AQUI CRIAMOS UM TIPO ESPECIFICO DE VARI�VEL COMPOSTA HERETOG�NEA QUE SER� USADA POSTERIORMENTE DENTRO DE STUDENT
typedef struct{
	char rua[20];
	int numero;
	char cidade[20];
	long long cep;
}adress;



typedef struct{// AQUI CRIAMOS UM TIPO ESPEC�FICO DE VARI�VEIS COMPOSTAS HETEROG�NEAS
	char nome[20];
	int eng,math,phys;
	float nota;
	float media_final;
	
	adress endereco; // criado uma vari�vel cujo o tipo � outro struct
}student; // STUDANT � O NOME DO NOSSO TIPO DE DADO.



student data[N] = { // O VETOR DATA, DE 4 POSI��ES, RECEBE O TIPO STUDANT
	{"EVANDRO",82,72,55},// A POSI��O [0] ZERO RECEBE EVANDRO...
	{"THOMAS",77,82,79},// A POSI��O [1] ZERO RECEBE THOMAS...
	{"SABRINA",52,62,39},// A POSI��O [2] ZERO RECEBE SABRINA...
	{"MELINDA",61,82,88}// A POSI��O [3] ZERO RECEBE MELINDA...
	
	// OBS : N�O ATRIBUIMOS VALOR A VARI�VEL MEDIA_FINAL AQUI.
	
};

int funcao_media(){ // CRIA��O DE UMA FUN��O PARA EFETUAR A M�DIA
	int i = 0, j = 0,cont=0;
	float result,soma;

	for(i=0;i<N;i++){// 4 ALUNOS
		cont = 0;
		result = 0;
		soma = 0;
		
		printf("DIGITE A RUA : ");
		fflush(stdin);
		gets(data[i].endereco.rua);
		
		
		printf("DIGITE N�MERO : ");
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
			scanf("%f",&data[i].nota);//RECEBE UMA NOTA QUE SER� ARMAZENADA EM VETOR DATA[0] DENTRO DE NOTA 
			soma = soma + data[i].nota;// SOMA IR� ACUMULAR OS 4 VALORES DIGITADOS EM NOTA
			
		}
		result = soma / 4;// IR� EFETUAR A M�DIA A PARTIR DOS VALORES ACUMADOS EM SOMA.

		system("cls");//CLEAR
		data[i].media_final = result;//ATRIBUI A M�DIA DO ALUNO[i] - QUE EST� EM RESULT - NA VARI�VEL MEDIA_FINAL.
		printf("\nALUNO : %7s\nVETOR_MEDIA[%i] = %.2f\n\n",data[i].nome,i,data[i].media_final);


		/*
			EXIBE O NOME DO ALUNO[I], A M�DIA EM RESULT, A POSI��O DE CADA VALOR E O VALOR ARMAZENADO EM MEDIA_FINAL
			TEMOS DATA[I], DO TIPO STUDENT, QUE POSSUI A VARI�VEL ENDERE�O QUE; POR SUA VEZ, POSSUI UM TIPO ESPECIFICADO CHAMADO ADRESS.
		*/
		
		
	}


}
int main(){
	setlocale(LC_ALL,"PORTUGUESE"); // SETEADO A VARIA��O LATINA (PT)
	int i,indice;
	
	printf("VARI�VEIS COMPOSTAS HETEROG�NEAS\n\n");
		
	
	funcao_media();// CHAMA UMA FUNCAO
	printf(">>>RESULTADO FINAL<<<\n\n");
	for(i=0;i<N;i++){
	printf("Nome : %7s \nM�dia : %.2f\n",data[i].nome,data[i].media_final);
	//EXIBE AS MEDIAS ARMAZENADAS DE ACORDO COM AS POSI��ES EM DATA[I]
	
	printf("ENDERE�O : %s,n� %i,%s,%lld \n\n",data[i].endereco.rua,data[i].endereco.numero,data[i].endereco.cidade,data[i].endereco.cep);
	//EXIBE OS ENDERE�OS ARMAZENADAS DE ACORDO COM AS POSI��ES EM DATA[I]

	/*
	
	VALE RESSALTAR QUE CRIAMOS  UMA VARI�VEL COMPOSTA DENTRO DE OUTRA.
	POR EXEMPLO, TEMOS 
	
	*/
		
	}
	printf(">>>>>><<<<<<<");
	
	
	
}
