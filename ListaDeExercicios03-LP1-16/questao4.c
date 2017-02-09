/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repetição

4. Em Matemática, o número harmônico designado por H(n) define-se como sendo a
soma da série harmônica:
					H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).

*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float n, rs=0;
    do{
    	printf("Digite um inteiro positivo : ");
    	scanf("%f", &n);
    	if(n<=0){
    		puts("Número inválido\n");
		}
	}while(n<=0);
	
	while(n > 0){
		rs=rs+1/n;
		n--;
	}
	printf("Resultado da série harmônica é %f", rs);
}
