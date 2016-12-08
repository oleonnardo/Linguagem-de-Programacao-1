/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

10. Faça um programa que leia um valor real e apresente a sua parte inteira e a sua
parte fracionária.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;

	puts("Informe um número decimal: (x,xxx) ");
	scanf("%f", &num);
	printf("Parte Inteira : %d\n",(int) num);
	printf("Parte Decimal : %.3f\n", num - ((int)num));

}
