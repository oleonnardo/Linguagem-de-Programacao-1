/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

10. Fa�a um programa que leia um valor real e apresente a sua parte inteira e a sua
parte fracion�ria.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;

	puts("Informe um n�mero decimal: (x,xxx) ");
	scanf("%f", &num);
	printf("Parte Inteira : %d\n",(int) num);
	printf("Parte Decimal : %.3f\n", num - ((int)num));

}
