/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

1. Escreva um programa em C que recebe um inteiro e diga se � par ou �mpar.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1;
	
	do{
	 	puts("Digite um valor inteiro: [0 para sair] ");
	 	scanf("%d", &n1);
	  
		if(n1 != 0){
		  	if (n1%2 == 0) { 
		    	printf("N�mero Par.\n\n");
		    }else{
		    	printf("N�mero Impar.\n\n");
			}
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(n1 != 0);
}
