/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

10. Fa�a um programa para ler a nota da prova de 15 alunos e 
armazene num vetor, calcula e imprima a m�dia geral.
*/

#include <stdio.h>
#include <locale.h>

float lerNotas(float n[], float s, int j);

main(){
    setlocale(LC_ALL, "Portuguese");
	float notas[15], soma=0;
	int i;
	
	printf("Digite a nota dos alunos :\n");
	soma = lerNotas(notas, soma, 0);
	putchar('\n');
	printf("M�dia das notas : %.2f\n", soma/15);
}

float lerNotas(float n[], float s, int j){
	
	while(1){
		printf("Aluno %d : ", j+1);
		scanf("%f", &n[j]);
		if((n[j]<0) || (n[j]>10)){
			printf("Nota inv�lida.\n");
			continue;
		}else{
			if(j==14){
				return s;
			}
			s+=n[j];
			j++;
		}
	}
}
