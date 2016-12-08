/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

05. (UFU-L01Q30) Leia um valor em real e a cota��o do d�lar.
Em seguida, imprima o valor correspondente em d�lares.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float num, cdd, rs;

	puts("Informe o valor (em reais): ");
   	scanf("%f", &num);
	fflush(stdin);
	puts("Qual o valor da cota��o do d�lar: ");
	scanf("%f", &cdd);

	if(cdd == 0){
		printf("Imposs�vel realizar divis�o por 0.\n\n");
	}else{
		rs = num/cdd;
	  	printf("\nSeus reais valem %.2f d�lares.\n\n", rs);
	}
}
