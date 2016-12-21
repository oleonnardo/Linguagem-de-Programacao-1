/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

11. Crie uma calculadora usando a instrução SWITCH, que pergunte qual das
operações básicas quer fazer (+, -, * e /), em seguida peça os dois números e
mostre o resultado da operação matemática entre eles.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
    int op;

    do{
        puts("************\n\n ESCOLHA O TIPO DE OPERAÇÃO: [0 para sair]");
        puts("1.ADIÇÃO\n2.SUBTRAÇÃO\n3.MULTIPLICAÇÃO\n4.DIVISÃO\n");
        scanf("%d", &op);

        if((op > 0) && (op < 5)){
            puts("Digite dois valores para operar: ");
            scanf("%f %f", &n1, &n2);
            switch(op){
                case 1: printf("\nAdição : \n%.1f + %.1f = %.1f\n\n", n1, n2, n1+n2);
                        break;
                case 2: printf("\nSubtração : \n%.1f - %.1f = %.1f\n\n", n1, n2, n1-n2);
                        break;
                case 3: printf("\nMultiplicação : \n%.1f * %.1f = %.1f\n\n", n1, n2, n1*n2);
                        break;
                case 4: if(n2 == 0){ printf("Impossível realizar divisão por 0. Tente novamente.\n\n"); }
                        else{ printf("\nDivisão : \n%.1f / %.1f = %.1f\n\n", n1, n2, n1/n2);break; }
            }
        } else if(op == 0) {
            printf("Programa finalizado.\n\n");
        }else{
            printf("Opção inválida\n\n");
        }
    }while(op != 0);
}
