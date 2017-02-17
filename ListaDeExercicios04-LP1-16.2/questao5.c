/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Fun��es

5. Escreva uma fun��o que recebe um n�mero que represente um m�s (1... 12) e
retorne o m�s em extenso.
*/

#include <stdio.h>
#include <locale.h>

int exibe(int x);
int leitura();

main(){
    setlocale(LC_ALL, "Portuguese");
    int mes;
    mes = leitura();
    exibe(mes);
}

int leitura(){
	int x;
	do{
		printf("Digite o n�mero do m�s : ");
		scanf("%d", &x);
	}while((x<1) || (x<12));
	return x;
}
int exibe(int x){
	switch(x){
		case 1: printf("Janeiro"); break;
		case 2: printf("Fevereiro"); break;
		case 3: printf("Mar�o"); break;
		case 4: printf("Abril"); break;
		case 5: printf("Maio"); break;
		case 6: printf("Junho"); break;
		case 7: printf("Julho"); break;
		case 8: printf("Agosto"); break;
		case 9: printf("Setembro"); break;
		case 10: printf("Outubro"); break;
		case 11: printf("Novembro"); break;
		case 12: printf("Dezembro"); break;
	}
}
