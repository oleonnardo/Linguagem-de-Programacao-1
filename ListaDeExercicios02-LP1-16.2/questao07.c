/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

07. Fa�a um programa que receba tr�s n�meros inteiros nas vari�veis n1, n2 e n3. 
O programa dever� ordenar os n�meros (do menor para o maior). A sa�da dever� obedecer a seguinte 
ordem de vari�veis: n1, n2 e n3.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, aux;
	
	do{
	 	puts("Digite tr�s n�meros: [0 para sair] ");
	 	scanf("%d %d %d", &n1, &n2, &n3);
	  
		if((n1 != 0) && (n2 != 0) && (n3 != 0)){
			/*if (n1 > n2) { 
		    	aux = n1;
		     	n1  = n2; 
		      	n2  = aux;
		    }
		
		   	if (n2 <= n3){
		      	printf("n1: %d\nn2: %d\nn3: %d\n\n", n1, n2, n3);
		    }else {
		      	if (n1 <= n3){
			  		printf("n1: %d\nn2: %d\nn3: %d\n\n", n1, n3, n2);
				}else{
			  		printf("n1: %d\nn2: %d\nn3: %d\n\n", n3, n1, n2);
				}
		    }*/
		    
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while((n1 != 0) && (n2 != 0) && (n3 != 0));
}
