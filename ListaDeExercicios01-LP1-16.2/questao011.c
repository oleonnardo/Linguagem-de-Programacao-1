/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

11. (URI-1002) A formula para calcular a area de uma circunferencia e: area = P� * raio�.
Considerando para este problema que PI = 3.14159. Efetue o calculo da area,
elevando o valor de Raio ao quadrado e multiplicando por PI.
Entrada: A entrada contem um valor de ponto flutuante (dupla precisao), no caso,
a variavel raio.
Saida: Apresentar a mensagem "A=" seguido pelo valor da variavel area.

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#define PI 3.14159

main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, area;
	
	puts("Informe o valor do raio para calcular a �rea : ");
	scanf("%f", &raio);
	area = pow(raio, 2)*PI;
	printf("A = %f\n", area);

}
