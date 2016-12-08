/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

11. (URI-1002) A formula para calcular a area de uma circunferencia e: area = PÌ * raio².
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
	
	puts("Informe o valor do raio para calcular a área : ");
	scanf("%f", &raio);
	area = pow(raio, 2)*PI;
	printf("A = %f\n", area);

}
