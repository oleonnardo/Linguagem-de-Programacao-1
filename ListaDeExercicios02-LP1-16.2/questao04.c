/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

4. Crie um algoritmo que, ao usu�rio entrar com a idade, informe se o mesmo � maior
de idade, menor de idade ou se tem mais de 65 anos.

*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	do{
		puts("Digite sua idade: [0 para sair]");
		scanf("%d", &idade);
		
		if(idade != 0){
			
			(idade < 18) ? printf("Menor de idade\n\n") : 
				(idade <= 65) ? printf("Maior de idade\n\n") : printf("Idoso [Mais de 65 anos].\n\n");
		
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(idade != 0);
}
