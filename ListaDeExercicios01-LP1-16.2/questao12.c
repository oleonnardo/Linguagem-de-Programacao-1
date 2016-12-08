/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

12. (URI-1014) Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida 
(em Km) e o total de combustível gasto (em litros).
Entrada: contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), e 
um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.
Saída: Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, 
seguido da mensagem "km/l".

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x_dtp, y_tcg;

	puts("Qual distância total percorrida (em Km): ");
	scanf("%f", &x_dtp);
	fflush(stdin);
	puts("Qual o total de combustível gasto (em L) : ");
	scanf("%f", &y_tcg);
	printf("O consumo médio do automóvel é %.3f km/l\n", x_dtp/y_tcg);
}
