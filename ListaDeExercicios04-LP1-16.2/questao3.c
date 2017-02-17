/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Funções

3. Escreva uma função que receba um número inteiro positivo e retorne o seu
fatorial.
*/

#include <stdio.h>
#include <locale.h>

int fatora(int x, int y);
int laco(int n);
int valor();

main(){
	int n;
    setlocale(LC_ALL, "Portuguese");
    n = valor();
  	printf("%d! é %d", n, laco(n));
}


int fatora(int x, int y){
	return x*y;
}
int laco(int n){
	int resultado, i;
	resultado = n;
	for(i = n-1; i >= 1; --i ){
		if(i-1 == 0){
			break;
		}
		resultado = fatora(resultado, i);
	}
	return resultado;	
}
int valor(){
	int n;
	printf("Digite um número para calcular o fatorial : ");
    scanf("%d", &n);
    return n;
}

