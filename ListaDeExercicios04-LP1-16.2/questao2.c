/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Fun��es

2. Escreva uma fun��o que receba um n�mero inteiro positivo e verifique se � par.
A fun��o deve retornar 1 caso seja par e 0 caso contr�rio.
*/

#include <stdio.h>
#include <locale.h>

int verifica(int n);

main(){
    setlocale(LC_ALL, "Portuguese");
	int n;
    printf("Digite um n�mero inteiro : ");
    scanf("%d", &n);
	(verifica(n)) ? printf("%d � par.", n) : printf("%d � impar.", n);
}

int verifica(int n){
	if(n%2 == 0) { return 1; }
	else{ return 0; }
}
