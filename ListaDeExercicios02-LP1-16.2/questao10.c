/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

10. (UFU-L02Q02) Leia um número fornecido pelo usuário. Se esse número for positivo,
calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem
dizendo que o número é inválido.

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
				printf("Número inválido!!");
			}else{
				rs = sqrt(n);
				printf("Raiz quadrada de %.1f é : %.1f", n, rs);
			}
			printf("\n\n");
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(n != 0);
}
