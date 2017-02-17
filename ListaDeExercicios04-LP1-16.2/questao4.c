/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Funções

4. Escreva uma função que receba um ano e verifique se é bissexto. Utilize a regra:
Um ano bissexto é divisível por 4, mas não por 100, ou então se é divisível por
400. A função deve retornar 1 caso seja bissexto e 0 caso contrário.
*/

#include <stdio.h>
#include <locale.h>

int verifica(int x);
int leitura();

main(){
    setlocale(LC_ALL, "Portuguese");
	int ano;
	ano = leitura();
	(verifica(ano)) ? printf("%d é bissexto", ano) : printf("%d não é bissexto", ano);
}

int leitura(){
	int x;
	printf("Informe um ano para verificar se é bissexto : ");
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

