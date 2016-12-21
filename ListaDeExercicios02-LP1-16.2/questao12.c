/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

12. Faça um programa que receba um número com 4 dígitos e, como saída deverá
inverter a ordem dos dígitos. O usuário digitará um número no formato MCDU
(milhar, centena, dezena e unidade), que deverá ser impresso como UDCM.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int u, d, c, m, num;

    do{
        puts("Digite um ínteiro com 4 dígitos : [0 para sair]");
        scanf("%d", &num);

        if(num != 0){
           if((num >= 1000) && (num <= 9999)){
           		u = num%10;
				d = (num%100 - u)/10;
				c = (num%1000 - d)/100;
				m = (num%10000 - c)/1000;
           		
           		printf("Número digitado [MCDU] 	  : %d\n", num);
           		printf("Invertendo posição [UDCM] : %d%d%d%d\n", u, d, c, m);
				
		   }else{
		   		printf("O número deve conter 4 dígitos");
		   }
        }else{
            printf("Programa finalizado.");
        }
        printf("\n\n");
    }while(num != 0);
}
