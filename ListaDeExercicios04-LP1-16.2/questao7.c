/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Fun��es

7. Escreva uma fun��o que retorna o maior entre tr�s valores:
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
	printf("O maior n�mero digitado � %.2f", max(n1, n2, n3));	
}

int leitura(){
	printf("Informe tr�s valores : ");
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

