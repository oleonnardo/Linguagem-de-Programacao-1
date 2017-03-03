/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

8. Crie um programa que lê 6 valores inteiros e, 
em seguida, mostre na tela os valores lidos na ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

void imprimeVetor(int x[]);

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[6], iv[6], i, j;
	
	printf("Digite 6 números inteiros : \n");
	for(i=0; i<6; i++){
		printf(">>> ");
		scanf("%d", &v[i]);
	}
	
	j=0;
	for(i=5; i>=0; --i){
		iv[i] = v[j];
		j++;
	}
	
	printf("\nVetor Original :\n>>> ");
	imprimeVetor(v);
	printf("\nVetor Inverso :\n>>> ");
	imprimeVetor(iv);	
}

void imprimeVetor(int x[]){
	int i;
	for(i=0; i<6; i++){
		printf("%d ", x[i]);
	}
}
