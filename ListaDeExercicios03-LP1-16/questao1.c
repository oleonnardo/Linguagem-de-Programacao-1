/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repeti��o

1. Fa�a a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int i = 1, cont = 0, soma=0;
    
    while(1){
    	if(i%2==0){
			soma+=i;
			cont++;
			if(cont == 50){
				break;
			}
		}
		i++;
	}
	
	printf("A soma dos 50 primeiros pares � %d\n", soma);
}
