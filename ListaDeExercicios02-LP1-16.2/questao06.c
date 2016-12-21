/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

6. Desenvolva um algoritmo que o usuário entra com o valor do salário, e o algoritmo
deverá imprimir o desconto do INSS, seguindo os valores abaixo:
	Menor ou igual a R$1600,00 = Isento
	Maior que R$1600,00 e menor ou igual a R$3.000,00 = 20%
	Maior que R$3.000,00 e menor ou igual a R$5.000,00 = 25%
	Maior que R$5.000,00 = 30%

*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float salario, desconto;
	char op;
	do{
		puts("Digite qualquer tecla continuar ou 0 para sair :");
		op = getch();
		
		if(op != '0'){
			fflush(stdin);
			puts("Informe o valor do seu salário : [R$]");
			scanf("%f", &salario);
		
			if(1600 >= salario){
				printf("Isento.");
			}else if(3000 >= salario){
				desconto = salario * 20 / 100;
				printf("\nValor de desconto : R$%.2f", desconto);
				printf("\nSalário líquido : R$%.2f", salario - desconto);
			}else if(5000 >= salario){
				desconto = salario * 25 / 100;
				printf("\nValor de desconto : R$%.2f", desconto);
				printf("\nSalário líquido : R$%.2f", salario - desconto);
			}else{
				desconto = salario * 30 / 100;
				printf("\nValor de desconto : R$%.2f", desconto);
				printf("\nSalário líquido : R$%-.2f", salario - desconto);
			}
			printf("\n\n");
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(op != '0');
}
