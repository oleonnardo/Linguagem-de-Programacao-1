/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 03: Comandos de repeti��o

6. Fa�a um programa que some os n�meros impares contidos em um intervalo definido
pelo usu�rio. O usu�rio define o valor inicial do intervalo e o valor final deste intervalo
e o programa deve somar todos os n�meros �mpares contidos neste intervalo. Caso o
usu�rio digite um intervalo inv�lido (come�ando por um valor maior que o valor final)
deve ser escrito uma mensagem de erro na tela, �Intervalo de valores inv�lidos� e o
programa termina. Exemplo de tela de sa�da: Digite o valor inicial e valor final: 5 10
Soma dos �mpares neste intervalo: 21

*/

#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int i, n1, n2, rs=0;
	
	printf("Digite o valor inicial e valor final : \n");
	scanf("%d %d", &n1, &n2);
	if(n1>n2){
		printf("Intervalo de valores inv�lidos.\n");
	}else{	
		for(i=n1; i<=n2; i++){
			if(i%2==1){
				rs+=i;
			}
		}
		printf("Soma dos �mpares neste intervalo : %d", rs);
	}
}
