/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

06. (UFU-L01Q31) Leia um n�mero inteiro e imprima o seu antecessor e o seu sucessor.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num;

	puts("Informe um n�mero inteiro: ");
   	scanf("%d", &num);
	

	printf("Antecessor >>> %d\n", num - 1);
	printf("Sucessor >>> %d\n", num + 1);
}
