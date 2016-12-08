/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

08. (UFU-L01Q33) Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float lado;

	puts("Informe o tamanho de lado do quadrado: ");
   	scanf("%f", &lado);
   	
	printf("\nResultado da área do quadrado: %.2fm²\n", lado*lado);
}
