/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

12. Fa�a um programa que receba um n�mero com 4 d�gitos e, como sa�da dever�
inverter a ordem dos d�gitos. O usu�rio digitar� um n�mero no formato MCDU
(milhar, centena, dezena e unidade), que dever� ser impresso como UDCM.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int u, d, c, m, num;

    do{
        puts("Digite um �nteiro com 4 d�gitos : [0 para sair]");
        scanf("%d", &num);

        if(num != 0){
           if((num >= 1000) && (num <= 9999)){
           		u = num%10;
				d = (num%100 - u)/10;
				c = (num%1000 - d)/100;
				m = (num%10000 - c)/1000;
           		
           		printf("N�mero digitado [MCDU] 	  : %d\n", num);
           		printf("Invertendo posi��o [UDCM] : %d%d%d%d\n", u, d, c, m);
				
		   }else{
		   		printf("O n�mero deve conter 4 d�gitos");
		   }
        }else{
            printf("Programa finalizado.");
        }
        printf("\n\n");
    }while(num != 0);
}
