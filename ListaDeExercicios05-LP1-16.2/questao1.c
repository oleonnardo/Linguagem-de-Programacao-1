/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

1. Faça um progranma que possui um vetor denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos.
	- Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
	- Armazene em uma variável inteira(simples) a soma entre os vetores das posições.
	- Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
	- Mostre na tela cada valor do vetor A, um em cada linha.
	
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    
    //DECLARAÇÃO E ATRIBUIÇÃO DOS VALORES
	int A[6] = {1, 0, 5, -2, -5, 7}, soma=0, i;
	
	//ARMAZENAR EM UMA VARIÁVEL A SOMA DOS VALORES DAS POSIÇÕES 0, 1 E 5
	printf("Soma das posições 0, 1 e 5: \n");
	for(i=0; i<=5; i++){
		if((i==0) || (i==1) || (i==5)){
			soma+=A[i];
			if(i==5){
				printf("%d + %d + %d = %d\n", A[i-5], A[i-4], A[i], soma);
			}
		}
		
	}
	
	//ATRIBUIR 100 A POSIÇÃO 4
	A[4] = 100; 
	
	//EXIBIR VETOR;
	printf("\nExibindo vetor : \n");
	for(i=0; i<6; i++){
		printf("Posição %d : %d\n", i, A[i]);
	}
}
