/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repetição

3. Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída
cada um dos algarismos que compõem o número.

*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int n, u, d, c;
    
    do{
    	printf("Digite um número entre 100 e 999 :");
    	scanf("%d", &n);
    	if((n<100) || (n>999)){
    		puts("Número inválido\n");
		}
	}while((n<100) || (n>999));
   
	u = n % 10;  //recupera a unidade
	d = n % 100;
	d -= u;
	d /= 10; //recupera a dezena
	c = n % 1000; 
	c = (c - d) - u;
	c /= 100; //recupera a centena
	
	printf("Centena : %d\nDezena : %d\nUnidade : %d\n", c, d, u);   
   	
}
