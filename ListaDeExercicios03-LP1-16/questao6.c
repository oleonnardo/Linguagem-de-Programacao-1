/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repetição

6. Faça um programa que some os números impares contidos em um intervalo definido
pelo usuário. O usuário define o valor inicial do intervalo e o valor final deste intervalo
e o programa deve somar todos os números ímpares contidos neste intervalo. Caso o
usuário digite um intervalo inválido (começando por um valor maior que o valor final)
deve ser escrito uma mensagem de erro na tela, “Intervalo de valores inválidos” e o
programa termina. Exemplo de tela de saída: Digite o valor inicial e valor final: 5 10
Soma dos ímpares neste intervalo: 21

*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int i, n1, n2, rs=0;
	
	printf("Digite o valor inicial e valor final : \n");
	scanf("%d %d", &n1, &n2);
	if(n1>n2){
		printf("Intervalo de valores inválidos.\n");
	}else{	
		for(i=n1; i<=n2; i++){
			if(i%2==1){
				rs+=i;
			}
		}
		printf("Soma dos ímpares neste intervalo : %d", rs);
	}
}
