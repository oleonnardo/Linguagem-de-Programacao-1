/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 05: Vetores

9. Crie um programa que l� 6 valores inteiros pares e, 
em seguida, mostre na tela os valores lidos na ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

void leitura(int j, int x[]);
void imprimeVetor(int x[]);
main(){
    setlocale(LC_ALL, "Portuguese");
	
	int v[6], iv[6], i, j=0;
	
	printf("Digite 6 n�meros inteiros pares : \n");
	leitura(0, v);
	
	// INVERTE VALORES DO VETOR iv
	for(i=5; i>=0; --i){
		iv[i] = v[j];
		j++;
	}
	
	printf("\nVetor Original :\n>>> ");
	imprimeVetor(v);
	printf("\nVetor Inverso :\n>>> ");
	imprimeVetor(iv);	
}

void leitura(int j, int x[]){
	while(1){
		printf(">>> ");
		scanf("%d", &x[j]);
		if(x[j]%2!=0){
			printf("%d n�o � um n�mero par\n\n", x[j]);
			continue;
		}else{
			if(j==6){
				break;
			}
			j++;
		}
	}
}
void imprimeVetor(int x[]){
	int i;
	for(i=0; i<6; i++){
		printf("%d ", x[i]);
	}
}
