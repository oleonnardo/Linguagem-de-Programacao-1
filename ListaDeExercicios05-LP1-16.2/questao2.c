/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela 
os valores lidos.
	
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
   
	int v[6], i;
			
	for(i=0; i<6; i++){
		printf("%d. Digite um número inteiro : ", i+1);
		scanf("%d", &v[i]);
	}
	putchar('\n');
	
	for(i=0; i<6; i++){
		printf("Posição %d : %d\n", i, v[i]);
	}
}
