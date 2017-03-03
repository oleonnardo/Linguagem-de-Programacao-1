/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores


5. Leia um vetor de 10 posi��es. 
Contar e escrever quantos valores pares ele possui.
*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[10], i, cont=0;
	for(i=0; i<10; i++){
		printf("Digite o n� da posi��o %d : ",i+1);
		scanf("%d", &v[i]);
		if(v[i]%2==0){
			cont++;	
		}
	}
	
	putchar('\n');
	switch(cont){
		case 0:
			printf("Voc� n�o digitou nenhum n�mero par.\n\n");
			break;
		case 1:
			printf("Voc� digitou apenas um n�mero par : \n");
			break;
		case 10:
			printf("Voc� digitou apenas n�meros pares : \n");
			break;
		default:
			printf("Voc� digitou %d pares : \n", cont);
	}
	for(i=0; i<10; i++){
		if(v[i]%2==0){
			printf("%d ",v[i]);		
		}
	}
	
}
