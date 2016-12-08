/*	
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

03. (UFU-L01Q06) Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
A formula de conversao é: F = C.1.8+32.0, sendo F a temperatura em Fahrenheit e C a temperatura 
em Celsius.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float c, f;
   	
	puts("Informe a temperatura em graus Celsius ºC: ");
   	scanf("%f", &c);
   	f = c*1.8+32.0;
	
	printf("-------\nResultado de %f * 1.8 + 32.0 = %fºF\n\n", c, f);
}
