/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

12. (URI-1014) Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida 
(em Km) e o total de combust�vel gasto (em litros).
Entrada: cont�m dois valores: um valor inteiro X representando a dist�ncia total percorrida (em Km), e 
um valor real Y representando o total de combust�vel gasto, com um d�gito ap�s o ponto decimal.
Sa�da: Apresente o valor que representa o consumo m�dio do autom�vel com 3 casas ap�s a v�rgula, 
seguido da mensagem "km/l".

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x_dtp, y_tcg;

	puts("Qual dist�ncia total percorrida (em Km): ");
	scanf("%f", &x_dtp);
	fflush(stdin);
	puts("Qual o total de combust�vel gasto (em L) : ");
	scanf("%f", &y_tcg);
	printf("O consumo m�dio do autom�vel � %.3f km/l\n", x_dtp/y_tcg);
}
