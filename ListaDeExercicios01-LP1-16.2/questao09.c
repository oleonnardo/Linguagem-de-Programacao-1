/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

09. Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o 
seu resultado na variável X. No final, imprima o valor de X.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, x;

	puts("Informe 2 valores inteiros: [Valor1 (espaço) Valor2] ");
   	scanf("%d %d", &n1, &n2);
   	
	/*puts("Entre com um valor inteiro: ");
   	scanf("%d", &n1);
   	fflush(stdin);
	puts("Informe um segundo valor inteiro: ");
   	scanf("%d", &n2);*/
   	
   	x = n1 + n2;
	printf("\nResultado de X = %d\n", x);
}
