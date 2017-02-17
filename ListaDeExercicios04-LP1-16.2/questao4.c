/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Fun��es

4. Escreva uma fun��o que receba um ano e verifique se � bissexto. Utilize a regra:
Um ano bissexto � divis�vel por 4, mas n�o por 100, ou ent�o se � divis�vel por
400. A fun��o deve retornar 1 caso seja bissexto e 0 caso contr�rio.
*/

#include <stdio.h>
#include <locale.h>

int verifica(int x);
int leitura();

main(){
    setlocale(LC_ALL, "Portuguese");
	int ano;
	ano = leitura();
	(verifica(ano)) ? printf("%d � bissexto", ano) : printf("%d n�o � bissexto", ano);
}

int leitura(){
	int x;
	printf("Informe um ano para verificar se � bissexto : ");
	scanf("%d", &x);
	return x;
}
int verifica(int x){
	if(((x%400 == 0) || (x%4 == 0)) && (x%100 != 0)){
		return 1;
	}else{
		return 0;
	}
}

