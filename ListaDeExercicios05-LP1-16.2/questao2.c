/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

2. Crie um programa que l� 6 valores inteiros e, em seguida, mostre na tela 
os valores lidos.
	
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
   
	int v[6], i;
			
	for(i=0; i<6; i++){
		printf("%d. Digite um n�mero inteiro : ", i+1);
		scanf("%d", &v[i]);
	}
	putchar('\n');
	
	for(i=0; i<6; i++){
		printf("Posi��o %d : %d\n", i, v[i]);
	}
}
