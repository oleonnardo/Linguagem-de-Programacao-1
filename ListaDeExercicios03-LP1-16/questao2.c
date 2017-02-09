/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repetição

2. Faça um programa que calcule o fatorial de um número dado pelo usuário.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, resultado ;
    
    printf("Digite um número para calcular o fatorial : ");
    scanf("%d", &n);
    resultado = n;
	for(i = n-1; i >= 1; --i ){
		if(i-1 == 0){
			break;
		}
		resultado *= i;
	}
	printf("%d! é %d\n", n, resultado);
}
