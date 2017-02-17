/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Funções

7. Escreva uma função que retorna o maior entre três valores:
float max(float x, float y, float z).
*/

#include <stdio.h>
#include <locale.h>

float n1, n2, n3;
float max(float x, float y, float z);
int leitura();

main(){
    setlocale(LC_ALL, "Portuguese"); 
	leitura();
	printf("O maior número digitado é %.2f", max(n1, n2, n3));	
}

int leitura(){
	printf("Informe três valores : ");
	scanf("%f%f%f", &n1, &n2, &n3);
}
float max(float x, float y, float z){
	if((x>y) && (x>z)){
		return x;
	}else{
		if((y>z) && (y>x)){
			return y;
		}else{
			return z;
		}
	}
}

