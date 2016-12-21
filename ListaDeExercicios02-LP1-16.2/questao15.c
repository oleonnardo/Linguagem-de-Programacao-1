/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 02: Estruturas Condicionais

15. (UFU-L02Q13) Faça um algoritmo que calcule a média ponderada das notas de 3
provas. A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final,
mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos. (cada prova a pontuação
vai de 0 a 100).
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;

    do{
        puts("Digite as três notas do aluno : [0 para finalizar o programa]");
        scanf("%f %f %f", &n1, &n2, &n3);

        if((n1 != 0) && (n2 != 0) && (n3 != 0)){
        	media = (n1+n2+n3)/3;
		if(media >= 60 ){
			printf("Aluno Aprovado\nMédia atingida : %f", media);
		}else{
			printf("Aluno reprovado\nMédia atingida : %f", media);
		}	
        }else{
            printf("Programa finalizado.");
        }
        printf("\n\n");
    }while((n1 != 0) && (n2 != 0) && (n3 != 0));
}
