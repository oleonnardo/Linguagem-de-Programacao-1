/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

2. Usando o operador ternário, faça um programa que verifica o sexo de um usuário.
Será digitado m ou M para masculino e f ou F para feminino.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	
	puts("Digite a inicial do seu sexo: [M ou F]");
	scanf("%c", &sexo);
	//sexo = toupper(sexo); 
	
	((sexo == 'F')||(sexo == 'f')) ? printf ("Sexo Feminino.\n\n") : 
		((sexo == 'M')||(sexo == 'm')) ? printf ("Sexo Masculino.\n\n") : 
			printf ("Caractere inválido!\n\n");
}
