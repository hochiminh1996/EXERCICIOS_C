/* 
	ALGORITMO B�SICO : PONTEIRO
	AUTOR : FELIPPE M
	DESCRI��O : CRIA��O, ESCRITA E LEITURA DE ARQUIVOS, USANDO OS CONCEITOS DE PONTEIRO.
	
	***ADICIONADO ZERAR REGISTROS DENTRO DE ARQUIVO.TXT
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

FILE *pont_arq;//VARI�VEL DO TIPO FILE : REPRESENTA OS ARQUIVOS. PONT_AR � UM PONTEIRO DE ARQUIVO.
// TRANSFORMEI-A EM UMA GLOBAL PARA FACILITAR O ACESSO EM N FUN��ES

int verificador = 0;
// IR� VERIFICAR SE O ARQUIVO J� FOI CRIADO, EVITANDO A REPETI��O DA MENSAGEM : "ARQUIVO CRIADO COM SUCESSO";

/*
***TIPO DE ABERTURA DE ARQUIVOS***

r: Permiss�o de abertura somente para leitura. � necess�rio que o arquivo j� esteja presente no disco.

w: Permiss�o de abertura para escrita (grava��o). Este c�digo cria o arquivo caso ele n�o exista, 
e caso o mesmo exista ele recria o arquivo novamente fazendo com que o conte�do seja perdido. 
Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.

a: Permiss�o para abrir um arquivo texto para escrita(grava��o), permite acrescentar novos dados ao final do arquivo. 
Caso n�o exista, ele ser� criado.
*/

//CABE�ALHO B�SICO
void header(void){
	printf("------------------------------\n");
	printf("PONTEIRO : CRIA��O DE ARQUIVOS\n");
	printf("------------------------------\n");
}

//IR� CRIAR O ARQUIVO INICIALMENTE
void criar_arquivo(void){
	
	pont_arq = fopen("arquivo.txt","a");//ABRINDO O ARQUIVO. SER� CRIADO O ARQUIVO (ARQUIVO.TXT)
	//a : abre o arquivo para grava��o de informa��es. Se n�o existir, ele cria automaticamente.

	// 1) CRIADO O ARQUIVO O TIPO DE ABERTURA
	if(pont_arq!=NULL){
		printf("\n**ARQUIVO CRIADO COM SUCESSO**\n");
		verificador = 1; // ***ESTA VARI�VEL � UMA GLOBAL : ATRIBUI 1 PARA EVITAR A REPETI��O DA MENSAGEM ACIMA POSTERIORMENTE
	}else{
		printf("HOUVE ALGUM ERRO NA CRIA��O.");
	
	}
	fclose(pont_arq);//EST� FECHANDO O PONTEIRO DO TIPO ARQUIVO
	//*** A VARI�VEL PONTEIRO = PONT_ARQ � UMA GLOBAL
}


// IR� GRAVAR A MENSAGEM EM UM ARQUIVO J� EXISTENTE
void registrar_em_arquivo(void){
	char msg[50];	
	
	printf("\nDIGITE UMA MENSAGEM : ");
	fflush(stdin);
	fgets(msg,50,stdin);
	
	system("cls");

	
	//2 ) REGISTRANDO INFORMA��ES NO ARQUIVO
	if(msg!='\0'){//IR� PEGAR AT� A �LTIMA INFORMA��O DA STRING
		pont_arq = fopen("arquivo.txt","a");
		fprintf(pont_arq,"%s",msg);
		/*
			fprintf(vari�vel_ponteiro","%s m�scara de escrita", vari�vel_com_string) : comando nativo para escrita em arquivo.
		*/
		fclose(pont_arq);// est� fechando a vari�vel ponteiro.	
		printf("***GRAVADO***\n");//APENAS PARA SINALIZAR QUE FOI GRAVADO DE FATO
	}
}

//MENU PRINCIPAL COM ALGUMAS FUN��ES, AL�M DE TRAZER INFORMA��ES J� GRAVADAS 
int menu(){
	int op = 0;
	char texto_arquivo[50];
	
	
	
	do{
		header();
		printf("[1] - LER ARQUIVO\n");
		printf("[2] - REGISTRAR\n");
		printf("[3] - LIMPAR TELA\n");
		printf("[4] - LIMPAR ARQUIVO\n");
		printf("[5] - SAIR\n\n");

		printf("ESCOLHA UMA OP��O V�LIDA : ");
		printf("\n---------------------------\n");
		fflush(stdin);
		scanf("%i",&op);
		fflush(stdin);
		
		switch(op){
			case 1 :
				system("cls");
				printf("------------------------------\n");
				printf("*****LEITURA DE ARQUIVO*****\n");				
				printf("------------------------------\n");

				pont_arq = fopen("arquivo.txt","r");// ABRINDO O ARQUIVO SOMENTE PARA LEITURA (R)
	
				while(fgets(texto_arquivo,50,pont_arq)){
					printf("%s",texto_arquivo);
					/*
						O LA�O EST� PEGANDO TUDO QUE ESTIVER DENTRO DA VARI�VEL PONTEIRO E ATRIBUINDO VIA 
						FGETS A VARI�VEL TEXTO_ARQUIVO.
						POSTERIORMENTE, ELE S� EXIBE O CONTEUDO DE TEXTO_ARQUIVO.
					
					*/
				}
				fclose(pont_arq);	
			break;
				
			case 2 : 
				system("cls");
				header();
				registrar_em_arquivo();

			break;
			
			case 3 :
				system("cls");
				menu();		
			break;
			
			case 4 : 
				system("cls");
				pont_arq = fopen("arquivo.txt","w");
				fclose(pont_arq);

				printf("O ARQUIVO FOI ZERADO...");
				getche();
				menu();
				
				
			break;
			case 5 :
				exit(0);
				
			break;
			default : 
				system("cls");
				menu();
		}
	}while(op!=5);
		
}
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char texto_arquivo[50];
	int op=0;

	if(verificador == 0){// SE A GLOBAL FOR 0, ELE CRIA UM ARQUIVO VIA FUN��O CRIAR_ARQUIVO. CASO CONTR�RIO, (1) O ARQUIVO J� FOI CRIADO ANTERIORMENTE
		criar_arquivo();
	}
	header();
	registrar_em_arquivo();
	menu();
			
}
