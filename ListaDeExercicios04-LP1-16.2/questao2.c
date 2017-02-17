/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Funções

2. Escreva uma função que receba um número inteiro positivo e verifique se é par.
A função deve retornar 1 caso seja par e 0 caso contrário.
*/

#include <stdio.h>
#include <locale.h>

int verifica(int n);

main(){
    setlocale(LC_ALL, "Portuguese");
	int n;
    printf("Digite um número inteiro : ");
    scanf("%d", &n);
	(verifica(n)) ? printf("%d é par.", n) : printf("%d é impar.", n);
}

int verifica(int n){
	if(n%2 == 0) { return 1; }
	else{ return 0; }
}
