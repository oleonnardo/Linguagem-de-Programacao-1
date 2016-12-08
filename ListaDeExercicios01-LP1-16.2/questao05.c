/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

05. (UFU-L01Q30) Leia um valor em real e a cotação do dólar.
Em seguida, imprima o valor correspondente em dólares.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float num, cdd, rs;

	puts("Informe o valor (em reais): ");
   	scanf("%f", &num);
	fflush(stdin);
	puts("Qual o valor da cotação do dólar: ");
	scanf("%f", &cdd);

	if(cdd == 0){
		printf("Impossível realizar divisão por 0.\n\n");
	}else{
		rs = num/cdd;
	  	printf("\nSeus reais valem %.2f dólares.\n\n", rs);
	}
}
