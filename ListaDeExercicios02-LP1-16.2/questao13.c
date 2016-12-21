/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

13. Crie um algoritmo que descubra se um número é múltiplo de 10, de 5 e de 2.

*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num;

    do{
        puts("Digite um ínteiro : [0 para sair]");
        scanf("%d", &num);

        if(num != 0){
		   if((num%10 == 0) && (num%5 == 0) && (num%2 == 0)){
           		printf("O número %d é múltiplo de 10, 5 e 2.", num);				
		   }else{
		   		printf("O número %d não satisfaz a condição em ser múltiplo de 10, 5 e 2.", num);
		   }
        }else{
            printf("Programa finalizado.");
        }
        printf("\n\n");
    }while(num != 0);
}
