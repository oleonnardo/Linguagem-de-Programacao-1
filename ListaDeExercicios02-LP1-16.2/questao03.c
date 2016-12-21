/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

3. Para doar sangue � necess�rio ter entre 18 e 67 anos. Fa�a um programa que
pergunte a idade de uma pessoa e diga se ela pode doar sangue ou n�o.

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
			//((idade >= 18) && (idade <= 67)) ? 
			//	printf("Voc� pode ser um doador de sangue :)\n\n") : printf("Infelismente, voc� n�o pode doar sangue :( \n\n");
		
			if((idade >= 18) && (idade <= 67)){
				printf("Voc� pode ser um doador de sangue :)\n\n");
			}else{
				printf("Infelismente, voc� n�o pode doar sangue :( \n\n");
			}
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(idade != 0);
}
