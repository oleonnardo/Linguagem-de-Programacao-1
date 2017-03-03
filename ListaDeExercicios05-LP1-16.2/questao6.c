/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores


6. Faça um programa que receba do usuário um vetor com 10 posições. 
Em seguida deverá ser impresso o maior e o menor elemento do vetor.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[10], i, maior, menor;
	printf("Digite 10 números inteiros : \n");
	for(i=0; i<10; i++){
		printf(">>> ");
		scanf("%d", &v[i]);
	}
	
	maior = v[0];
	menor = maior;
	
	for(i=1; i<10; i++){
		if(v[i] > maior){
			maior = v[i];
		}else if(v[i] < menor){
			menor = v[i];
		}
	}
	putchar('\n');
	printf("Menor número : %d\n", menor);
	printf("Maior número : %d\n", maior);
	
}
