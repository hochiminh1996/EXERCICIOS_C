/* 
	ALGORITMO BÁSICO : PONTEIRO
	AUTOR : FELIPPE M
	DESCRIÇÃO : CRIAÇÃO, ESCRITA E LEITURA DE ARQUIVOS, USANDO OS CONCEITOS DE PONTEIRO.
	
	***ADICIONADO ZERAR REGISTROS DENTRO DE ARQUIVO.TXT
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

FILE *pont_arq;//VARIÁVEL DO TIPO FILE : REPRESENTA OS ARQUIVOS. PONT_AR É UM PONTEIRO DE ARQUIVO.
// TRANSFORMEI-A EM UMA GLOBAL PARA FACILITAR O ACESSO EM N FUNÇÕES

int verificador = 0;
// IRÁ VERIFICAR SE O ARQUIVO JÁ FOI CRIADO, EVITANDO A REPETIÇÃO DA MENSAGEM : "ARQUIVO CRIADO COM SUCESSO";

/*
***TIPO DE ABERTURA DE ARQUIVOS***

r: Permissão de abertura somente para leitura. É necessário que o arquivo já esteja presente no disco.

w: Permissão de abertura para escrita (gravação). Este código cria o arquivo caso ele não exista, 
e caso o mesmo exista ele recria o arquivo novamente fazendo com que o conteúdo seja perdido. 
Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.

a: Permissão para abrir um arquivo texto para escrita(gravação), permite acrescentar novos dados ao final do arquivo. 
Caso não exista, ele será criado.
*/

//CABEÇALHO BÁSICO
void header(void){
	printf("------------------------------\n");
	printf("PONTEIRO : CRIAÇÃO DE ARQUIVOS\n");
	printf("------------------------------\n");
}

//IRÁ CRIAR O ARQUIVO INICIALMENTE
void criar_arquivo(void){
	
	pont_arq = fopen("arquivo.txt","a");//ABRINDO O ARQUIVO. SERÁ CRIADO O ARQUIVO (ARQUIVO.TXT)
	//a : abre o arquivo para gravação de informações. Se não existir, ele cria automaticamente.

	// 1) CRIADO O ARQUIVO O TIPO DE ABERTURA
	if(pont_arq!=NULL){
		printf("\n**ARQUIVO CRIADO COM SUCESSO**\n");
		verificador = 1; // ***ESTA VARIÁVEL É UMA GLOBAL : ATRIBUI 1 PARA EVITAR A REPETIÇÃO DA MENSAGEM ACIMA POSTERIORMENTE
	}else{
		printf("HOUVE ALGUM ERRO NA CRIAÇÃO.");
	
	}
	fclose(pont_arq);//ESTÁ FECHANDO O PONTEIRO DO TIPO ARQUIVO
	//*** A VARIÁVEL PONTEIRO = PONT_ARQ É UMA GLOBAL
}


// IRÁ GRAVAR A MENSAGEM EM UM ARQUIVO JÁ EXISTENTE
void registrar_em_arquivo(void){
	char msg[50];	
	
	printf("\nDIGITE UMA MENSAGEM : ");
	fflush(stdin);
	fgets(msg,50,stdin);
	
	system("cls");

	
	//2 ) REGISTRANDO INFORMAÇÕES NO ARQUIVO
	if(msg!='\0'){//IRÁ PEGAR ATÉ A ÚLTIMA INFORMAÇÃO DA STRING
		pont_arq = fopen("arquivo.txt","a");
		fprintf(pont_arq,"%s",msg);
		/*
			fprintf(variável_ponteiro","%s máscara de escrita", variável_com_string) : comando nativo para escrita em arquivo.
		*/
		fclose(pont_arq);// está fechando a variável ponteiro.	
		printf("***GRAVADO***\n");//APENAS PARA SINALIZAR QUE FOI GRAVADO DE FATO
	}
}

//MENU PRINCIPAL COM ALGUMAS FUNÇÕES, ALÉM DE TRAZER INFORMAÇÕES JÁ GRAVADAS 
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

		printf("ESCOLHA UMA OPÇÃO VÁLIDA : ");
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
						O LAÇO ESTÁ PEGANDO TUDO QUE ESTIVER DENTRO DA VARIÁVEL PONTEIRO E ATRIBUINDO VIA 
						FGETS A VARIÁVEL TEXTO_ARQUIVO.
						POSTERIORMENTE, ELE SÓ EXIBE O CONTEUDO DE TEXTO_ARQUIVO.
					
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

	if(verificador == 0){// SE A GLOBAL FOR 0, ELE CRIA UM ARQUIVO VIA FUNÇÃO CRIAR_ARQUIVO. CASO CONTRÁRIO, (1) O ARQUIVO JÁ FOI CRIADO ANTERIORMENTE
		criar_arquivo();
	}
	header();
	registrar_em_arquivo();
	menu();
			
}
