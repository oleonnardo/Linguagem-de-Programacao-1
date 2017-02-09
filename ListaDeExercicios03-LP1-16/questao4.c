/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repeti��o

4. Em Matem�tica, o n�mero harm�nico designado por H(n) define-se como sendo a
soma da s�rie harm�nica:
					H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Fa�a um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).

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
    		puts("N�mero inv�lido\n");
		}
	}while(n<=0);
	
	while(n > 0){
		rs=rs+1/n;
		n--;
	}
	printf("Resultado da s�rie harm�nica � %f", rs);
}
