/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

11. Crie uma calculadora usando a instru��o SWITCH, que pergunte qual das
opera��es b�sicas quer fazer (+, -, * e /), em seguida pe�a os dois n�meros e
mostre o resultado da opera��o matem�tica entre eles.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
    int op;

    do{
        puts("************\n\n ESCOLHA O TIPO DE OPERA��O: [0 para sair]");
        puts("1.ADI��O\n2.SUBTRA��O\n3.MULTIPLICA��O\n4.DIVIS�O\n");
        scanf("%d", &op);

        if((op > 0) && (op < 5)){
            puts("Digite dois valores para operar: ");
            scanf("%f %f", &n1, &n2);
            switch(op){
                case 1: printf("\nAdi��o : \n%.1f + %.1f = %.1f\n\n", n1, n2, n1+n2);
                        break;
                case 2: printf("\nSubtra��o : \n%.1f - %.1f = %.1f\n\n", n1, n2, n1-n2);
                        break;
                case 3: printf("\nMultiplica��o : \n%.1f * %.1f = %.1f\n\n", n1, n2, n1*n2);
                        break;
                case 4: if(n2 == 0){ printf("Imposs�vel realizar divis�o por 0. Tente novamente.\n\n"); }
                        else{ printf("\nDivis�o : \n%.1f / %.1f = %.1f\n\n", n1, n2, n1/n2);break; }
            }
        } else if(op == 0) {
            printf("Programa finalizado.\n\n");
        }else{
            printf("Op��o inv�lida\n\n");
        }
    }while(op != 0);
}
