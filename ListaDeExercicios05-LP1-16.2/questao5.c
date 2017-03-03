/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores


5. Leia um vetor de 10 posições. 
Contar e escrever quantos valores pares ele possui.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[10], i, cont=0;
	for(i=0; i<10; i++){
		printf("Digite o nº da posição %d : ",i+1);
		scanf("%d", &v[i]);
		if(v[i]%2==0){
			cont++;	
		}
	}
	
	putchar('\n');
	switch(cont){
		case 0:
			printf("Você não digitou nenhum número par.\n\n");
			break;
		case 1:
			printf("Você digitou apenas um número par : \n");
			break;
		case 10:
			printf("Você digitou apenas números pares : \n");
			break;
		default:
			printf("Você digitou %d pares : \n", cont);
	}
	for(i=0; i<10; i++){
		if(v[i]%2==0){
			printf("%d ",v[i]);		
		}
	}
	
}
