/*	
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

04. (UFU-L01Q11) Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em 
km/h (quilometros por hora). A formula de convers�o e: K = M*3.6, sendo K a velocidade em km/h e 
M em m/s.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float k, m;
   	
	puts("Informe a velocidade em m/s (metros por segundo): ");
   	scanf("%f", &m);
   	k = m*3.6;
	
	printf("-------\nConvertendo para km/h de %f * 3.6 = %f km/h\n\n", m, k);
}
