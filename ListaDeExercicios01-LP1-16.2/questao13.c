/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Sa�da, vari�veis e express�es

13. (URI-1015) Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, 
p1(x1,y1) e p2(x2,y2) e calcule a dist�ncia entre eles, mostrando 4 casas decimais ap�s a v�rgula,
segundo a f�rmula de dist�ncia:
Entrada: cont�m duas linhas de dados. A primeira linha cont�m dois valores de ponto flutuante: 
x1 y1 e a segunda linha cont�m dois valores de ponto flutuante x2 y2.
Sa�da: calcule e imprima o valor da dist�ncia segundo a f�rmula fornecida, com 4 casas ap�s o ponto 
decimal.

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x1, x2, y1, y2, distancia;

    puts("Informe os dois valores correspondentes ao eixo X : [Valor1 Valor2]");
    scanf("%f %f", &x1, &x2);
    fflush(stdin);
    puts("Informe os dois valores correspondentes ao eixo Y : [Valor1 Valor2]");
    scanf("%f %f", &y1, &y2);
    distancia = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    printf("Distancia >>> %.4f", distancia);

}
