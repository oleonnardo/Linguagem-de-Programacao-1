/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repetição

5. Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a fórmula a seguir:
					E = 1 +  1/1! + 1/2! + 1/3! + ... + 1/n!
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, y; 
	float e = 1, fatorial=1; 
	
	do{
		printf("Digite inteiro positivo : "); 
		scanf("%d", &n); 
		if(n <=0){
			puts("Número inválido.\n");
		}
	}while(n<=0);
	
	for(i=1; i<=n ; i++){ 
		fatorial*=i; 
		e += 1/fatorial; 
	} 
	
	printf("Resultado : %f", e); 
}
