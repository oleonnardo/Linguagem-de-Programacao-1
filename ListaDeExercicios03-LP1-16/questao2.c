/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repeti��o

2. Fa�a um programa que calcule o fatorial de um n�mero dado pelo usu�rio.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, resultado ;
    
    printf("Digite um n�mero para calcular o fatorial : ");
    scanf("%d", &n);
    resultado = n;
	for(i = n-1; i >= 1; --i ){
		if(i-1 == 0){
			break;
		}
		resultado *= i;
	}
	printf("%d! � %d\n", n, resultado);
}
