/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

08. (UFU-L01Q33) Leia o tamanho do lado de um quadrado e imprima como resultado a sua �rea.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float lado;

	puts("Informe o tamanho de lado do quadrado: ");
   	scanf("%f", &lado);
   	
	printf("\nResultado da �rea do quadrado: %.2fm�\n", lado*lado);
}
