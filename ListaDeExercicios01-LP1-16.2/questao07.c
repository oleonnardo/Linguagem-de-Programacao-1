/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

07. (UFU-L01Q32) Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor 
de seu dobro.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, rs;

	puts("Informe um número inteiro: ");
   	scanf("%d", &num);
	rs = (num*3+1)+(num*2-1);
	printf("Resultado para: (%d*3+1)+(%d*2-1) = %d\n", num, num, rs);
}
