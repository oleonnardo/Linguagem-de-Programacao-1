/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

10. (UFU-L02Q02) Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo,
calcule a raiz quadrada do n�mero. Se o n�mero for negativo, mostre uma mensagem
dizendo que o n�mero � inv�lido.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n, rs;
	
	do{
		puts("Digite um valor inteiro : [0 para sair]");
		scanf("%f", &n);
	
		if(n != 0){
			if(n < 0){
				printf("N�mero inv�lido!!");
			}else{
				rs = sqrt(n);
				printf("Raiz quadrada de %.1f � : %.1f", n, rs);
			}
			printf("\n\n");
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(n != 0);
}
