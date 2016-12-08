/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 01: Entrada/Saída, variáveis e expressões

13. (URI-1015) Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, 
p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula,
segundo a fórmula de distância:
Entrada: contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: 
x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.
Saída: calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto 
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
