/*
	ALGORITMO BÁSICO : FUNÇÕES EM C
	AUTOR : FELIPPE M
	DESCRIÇÃO : CALCULAR O VOLUME
	
	3) Codifique o programa em linguagem C com uma função que receba como parâmetro o raio de
	uma esfera, calcule e mostre no programa principal qual o seu volume: v=4/3*R³.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14
float calcular_volume(float raio){	
	float volume = 0;
	
	volume = 4/3 * (3.14*pow(raio,3));
	// FUNÇÃO POW : ORIUNDA DA MATH.H
	
	return volume;
}

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float raio = 0;
	
	printf("DIGITE O RAIO : ");
	scanf("%f",&raio);
	
	
	printf("VOLUME : %.2f",calcular_volume(raio));
}
