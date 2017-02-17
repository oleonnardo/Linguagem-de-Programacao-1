/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Funções

1. Escreva uma função que receba um número e calcule o seu dobro.
*/

#include <stdio.h>
#include <locale.h>

int dobro(int n){
	return n*=2;
}

main(){
    setlocale(LC_ALL, "Portuguese");
    
	int n;
    printf("Digite um número inteiro : ");
    scanf("%d", &n);
    
    printf("O dobro de %d é : %d", n, dobro(n));
    
}
