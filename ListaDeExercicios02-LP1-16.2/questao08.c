/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

8. Crie um programa que mostre o consumo de combust�vel de um carro no percurso
(em quil�metros) que o usu�rio digitou, de acordo com o tipo do carro que tamb�m
ser� informado pelo usu�rio. Sabe-se que o carro do tipo A faz 8 km com um litro
de combust�vel, o tipo B faz 9 km com um litro e o tipo C faz 12 km com um litro.

*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float percurso, total;
	char tipo;
	
	do{

		puts("Digite (em quil�metros) o percurso do carro at� o destino : [0 para sair]");
		scanf("%f", &percurso);
	
		if(percurso != 0){
			fflush(stdin);
			puts("Qual tipo de carro voc� usa : [A - B - C]");
			tipo = getch();
			
			switch (tipo){
				case 'A':
				case 'a':       
                	total = percurso * 0.125;
                	printf("O consumo foi de: %.2f litros", total); break;
                
				case 'B':
				case 'b':                         
                    total = percurso * 0.11111111;
            		printf("O consumo foi de: %.2f litros", total); break;
            	
				case 'C':	
                case 'c':  
					total = percurso * 0.08333333;               
                    printf("O consumo foi de: %.2f litros", total); break;
                    
				default: printf("Tipo de carro inv�lido.");
			}
			printf("\n\n");
		}else{
			printf("Programa finalizado.\n\n");
		}
	}while(percurso != 0);
}
