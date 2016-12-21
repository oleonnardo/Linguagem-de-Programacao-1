/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

9. Crie um programa que ao entrar com o valor de X, imprima o valor de Y. Sabendo que:

y = { 1, se x <= 1 }
	{ 2, se 1 < x <= 2 }
	{ x^2, se 2 < x <= 3 }
	{ x^3, se x > 3 }

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define ANO 2016

int main() {
	setlocale(LC_ALL, "Portuguese");
	int x, y;	
	
	do{
		puts("Digite um valor inteiro : [0 para sair]");
		scanf("%d", &x);
	
		if(x != 0){
			y = (x <= 1) ? 1 : 
					( x <= 2) ?  2 :
						(x <= 3) ? pow(x, 2) : pow(x, 3);
						
			printf("Valor de y : %d\n\n", y);
	
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(x != 0);
}
