/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Fun��es

1. Escreva uma fun��o que receba um n�mero e calcule o seu dobro.
*/

#include <stdio.h>
#include <locale.h>

int dobro(int n){
	return n*=2;
}

main(){
    setlocale(LC_ALL, "Portuguese");
    
	int n;
    printf("Digite um n�mero inteiro : ");
    scanf("%d", &n);
    
    printf("O dobro de %d � : %d", n, dobro(n));
    
}
