/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores


6. Fa�a um programa que receba do usu�rio um vetor com 10 posi��es. 
Em seguida dever� ser impresso o maior e o menor elemento do vetor.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[10], i, maior, menor;
	printf("Digite 10 n�meros inteiros : \n");
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
	printf("Menor n�mero : %d\n", menor);
	printf("Maior n�mero : %d\n", maior);
	
}
