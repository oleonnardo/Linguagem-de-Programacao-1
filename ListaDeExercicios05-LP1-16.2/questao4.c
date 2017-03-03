/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

4. Faça um programa que leia um vetor de 8 posições e, em seguida,
leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas 
posições X e Y.
*/

#include <stdio.h>
#include <locale.h>

void leitura(int x[]);
int somaPosicoes(int x[], int y, int z);

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[8], x, y, rs=0;
	
	leitura(v);
	putchar('\n');
	
	while(1){
		printf("x : "); 
		scanf("%d", &x);
		if(x>0 || x<9){
			break;
		}
		printf("Número inválido. [1-8]\n\n");
	}
	
	while(1){
		printf("Y : "); 
		scanf("%d", &y);
		if(y>0 || y<9){
			break;
		}
		printf("Número inválido. [1-8]\n\n");
	}
	
	rs = somaPosicoes(v, x, y);
	printf("Soma das posições %d e %d :\n %d + %d =  %d", x, y, v[x-1], v[y-1], rs);
}

void leitura(int x[]){
	int i;
	printf("Preenchendo o VETOR :\n");
	for(i=0; i<8; i++){
		printf("Digite um valor da posição %d: ", i+1);
		scanf("%d", &x[i]);
	}
}
int somaPosicoes(int x[], int y, int z){
	int s;
	s = x[y-1] + x[z-1];	
	return s;
}
