/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

14. (UFU-L02Q10) Faça um programa que receba a altura e o sexo de uma pessoa e
calcule e mostre seu peso ideal, utilizando as seguintes formulas (onde h
corresponde à altura):
	Homens: (72,7 * h) – 58
	Mulheres: (62,1 * h) - 44,7.

*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	double altura, rs;
	char sexo;

    do{
        puts("Informe a sua altura (em metros): [0 para sair]");
        scanf("%f", &altura);

        if(altura != 0){
        	fflush(stdin);
        	
			puts("Qual o seu sexo ? - M ou F");
		   	sexo = getch();
		   
		   	if((sexo == 'F') || (sexo == 'f')){
				rs = ((62.1*altura) - 44.7);   		
			} else if((sexo == 'M') || (sexo == 'm')){
      			rs = ((72.7*altura) - 58);  
    		}
			
			printf("O seu peso ideal é : %f\n", rs); 
        }else{
            printf("Programa finalizado.");
        }
        printf("\n\n");
    }while(altura != 0);
}
