/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

1. Fa�a um progranma que possui um vetor denominado A que armazene 6 n�meros inteiros.
O programa deve executar os seguintes passos.
	- Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
	- Armazene em uma vari�vel inteira(simples) a soma entre os vetores das posi��es.
	- Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100;
	- Mostre na tela cada valor do vetor A, um em cada linha.
	
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    
    //DECLARA��O E ATRIBUI��O DOS VALORES
	int A[6] = {1, 0, 5, -2, -5, 7}, soma=0, i;
	
	//ARMAZENAR EM UMA VARI�VEL A SOMA DOS VALORES DAS POSI��ES 0, 1 E 5
	printf("Soma das posi��es 0, 1 e 5: \n");
	for(i=0; i<=5; i++){
		if((i==0) || (i==1) || (i==5)){
			soma+=A[i];
			if(i==5){
				printf("%d + %d + %d = %d\n", A[i-5], A[i-4], A[i], soma);
			}
		}
		
	}
	
	//ATRIBUIR 100 A POSI��O 4
	A[4] = 100; 
	
	//EXIBIR VETOR;
	printf("\nExibindo vetor : \n");
	for(i=0; i<6; i++){
		printf("Posi��o %d : %d\n", i, A[i]);
	}
}
