/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado 
das componetes deste vetor, armazenando o resultado em outro vetor. 
Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
	
*/

#include <stdio.h>
#include <locale.h>
#define TAM 10


int menu();
void leitura(int x[TAM]);
void quadrado(int x[TAM], int r[TAM]);
void exibe(int x[TAM], int r[TAM]);

main(){
    setlocale(LC_ALL, "Portuguese");
   
	int v[TAM], vR[TAM], op;
	do{
		op=menu();
		switch(op){
			case 1:
				leitura(v);
				quadrado(v, vR);
				exibe(v, vR);
				break;
			default:
				printf("Opção inválida.\n");			
		}
		putchar('\n');
	}while(op);	
	printf("\nFim do Programa.");
}

int menu(){
	int o;
	printf(":          :: QUESTÃO 3 ::         :\n");
	printf(":  1. Ler um conjunto de nº reais. :\n");
	printf(":  0. Para sair.                   :\n");
	scanf("%d", &o);
	return o;
}
void leitura(int x[TAM]){  
	int i;
	for(i=0; i<TAM; i++){
		printf("Digite o valor da posição %d : ", i+1);
		scanf("%d", &x[i]);
	}
	putchar('\n');
}
void quadrado(int x[TAM], int r[TAM]){
	int i;
	for(i=0; i<TAM; i++){
		r[i] = x[i]*2;
	}
}
void exibe(int x[TAM], int r[TAM]){
	int i;
	for(i=0; i<TAM; i++){
		printf(" %d^2 = %d\n", x[i], r[i]);
		printf(" %d^2 = %d\n", x[i], r[i]);
	}
	putchar('\n');
}

