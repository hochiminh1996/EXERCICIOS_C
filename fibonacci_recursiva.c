/*
	ALGORITMO B�SICO : FIBONACCI 
	AUTOR : FELIPPE M.
	DESCRI��O : FIBONACCI USANDO A FUN��O RECURSIVA. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int fib(int n){
   if(n==1 || n==2)
		return 1;
   else{
		return fib(n-1) + fib(n-2);		
   }
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n,i;
	printf("\nFIBONACCI USANDO A FUN��O RECURSIVA\n\n");
	printf("TERMOS : ");
	scanf("%i",&n);
	
	printf("\n");
	
	for(i=0; i<n; i++){
       printf("%i ", fib(i+1));
       // 0 + 1 = 1
       // retorno 1 
       //
 	} 		

}
