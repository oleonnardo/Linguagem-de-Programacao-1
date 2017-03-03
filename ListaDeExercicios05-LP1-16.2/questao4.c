/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

4. Fa�a um programa que leia um vetor de 8 posi��es e, em seguida,
leia tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. 
Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas 
posi��es X e Y.
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
		printf("N�mero inv�lido. [1-8]\n\n");
	}
	
	while(1){
		printf("Y : "); 
		scanf("%d", &y);
		if(y>0 || y<9){
			break;
		}
		printf("N�mero inv�lido. [1-8]\n\n");
	}
	
	rs = somaPosicoes(v, x, y);
	printf("Soma das posi��es %d e %d :\n %d + %d =  %d", x, y, v[x-1], v[y-1], rs);
}

void leitura(int x[]){
	int i;
	printf("Preenchendo o VETOR :\n");
	for(i=0; i<8; i++){
		printf("Digite um valor da posi��o %d: ", i+1);
		scanf("%d", &x[i]);
	}
}
int somaPosicoes(int x[], int y, int z){
	int s;
	s = x[y-1] + x[z-1];	
	return s;
}
