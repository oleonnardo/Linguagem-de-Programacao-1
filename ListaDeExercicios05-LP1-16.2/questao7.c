/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
Imprima o vetor, o maior elemento e a posição que ele se encontra.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[10], i, maior, ps;
	printf("Digite 10 números inteiros :\n");
	for(i=0; i<10; i++){
		printf(">>> ");
		scanf("%d", &v[i]);
	}
	
	maior = v[0];
	for(i=1; i<10; i++){
		if(v[i] > maior){
			maior = v[i];
			ps = i;
		}
	}
	putchar('\n');
	printf("Imprimindo o vetor : \n>>> ");
	for(i=0; i<10; i++){
		printf("%d ", v[i]);
	}
	putchar('\n');
	printf("\nMaior elemento : %d", maior);
	printf("\nPosiçao do elemento : %d\n", ps);
}
