/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Funções

5. Escreva uma função que recebe um número que represente um mês (1... 12) e
retorne o mês em extenso.
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
		printf("Digite o número do mês : ");
		scanf("%d", &x);
	}while((x<1) || (x<12));
	return x;
}
int exibe(int x){
	switch(x){
		case 1: printf("Janeiro"); break;
		case 2: printf("Fevereiro"); break;
		case 3: printf("Março"); break;
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
