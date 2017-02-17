/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

Lista 04: Funções

6. Escreva uma função que receba uma letra como parâmetro e retorne 1 caso seja
uma vogal e 0 caso seja consoante.
*/

#include <stdio.h>
#include <locale.h>

int verificaChar(char x);
int classificaChar(char x);
char leitura();

main(){
    setlocale(LC_ALL, "Portuguese"); 
	char letra;
	letra = leitura();
	(classificaChar(letra)) ? printf("%c é uma vogal", letra) : printf("%c é uma consoante", letra);
}

char leitura(){
	char a;
	printf("Digite uma letra : ");
	scanf("%c", &a);
	return a;
}
int classificaChar(char x){
	switch(x){
		case 'a': case 'A': 
		case 'e': case 'E': 
		case 'i': case 'I': 
		case 'o': case 'O':
		case 'u': case 'U': return 1;
		default: return 0;
	}
}
