/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

09. Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma de A e B atribuindo o 
seu resultado na vari�vel X. No final, imprima o valor de X.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, x;

	puts("Informe 2 valores inteiros: [Valor1 (espa�o) Valor2] ");
   	scanf("%d %d", &n1, &n2);
   	
	/*puts("Entre com um valor inteiro: ");
   	scanf("%d", &n1);
   	fflush(stdin);
	puts("Informe um segundo valor inteiro: ");
   	scanf("%d", &n2);*/
   	
   	x = n1 + n2;
	printf("\nResultado de X = %d\n", x);
}
