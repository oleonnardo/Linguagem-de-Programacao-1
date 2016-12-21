/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

3. Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que
pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não.

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
			//	printf("Você pode ser um doador de sangue :)\n\n") : printf("Infelismente, você não pode doar sangue :( \n\n");
		
			if((idade >= 18) && (idade <= 67)){
				printf("Você pode ser um doador de sangue :)\n\n");
			}else{
				printf("Infelismente, você não pode doar sangue :( \n\n");
			}
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(idade != 0);
}
