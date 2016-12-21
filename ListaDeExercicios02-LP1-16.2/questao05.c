/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

5. Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa
e diga se a data é válida ou não. (Ignorar anos bissexto).

*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#define ANO 2016

int main() {
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano , dtValida = 0;
	char op;
	do{
		puts("Digite qualquer tecla continuar ou 0 para sair :");
		op = getch();
		
		if(op != '0'){
			fflush(stdin);
			puts("Informe a dia mês e ano do seu aniversário: [dd mm YYYY ]");
			scanf("%d %d %d", &dia, &mes, &ano);
		
			if((dia > 0) && (dia <= 31)) {
				if((mes > 0) && (mes <= 12)){
					if((ano > 0) && (ano <= ANO)){
						if(((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) && (dia <= 31)){
							dtValida = 1;
						}else  if(((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) && (dia <= 30)){
							dtValida = 1;
						}else if((mes == 2) && (dia <= 28)){
							dtValida = 1;
						}else{
							printf("O mês %d não possui %d dias.\n\n", mes, dia);
						}
					}else{
						printf("Ano Inválido\n\n");
					}
				}else{
					printf("Mês Inválido\n\n");
				}
			}else{
				printf("Data Inválida\n\n");	
			}	
			
			if(dtValida == 1){
				printf("Data de seu aniversário : %d-%d-%d\n\n", dia, mes, ano);
			}	
		
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(op != '0');
}
