/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

06. (UFU-L01Q31) Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num;

	puts("Informe um número inteiro: ");
   	scanf("%d", &num);
	

	printf("Antecessor >>> %d\n", num - 1);
	printf("Sucessor >>> %d\n", num + 1);
}
