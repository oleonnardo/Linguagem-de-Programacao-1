/*
UNIVERSIDADE ESTADUAL DA PARAÍBA
Curso: Ciência da Computação
Disciplina: Linguagem de Programação 1
Professor: Danilo Abreu Santos

Leonardo Araujo
Ricardo Gabriel

Mini-Teste Prático II
	
*/

#include <stdio.h>
#include <locale.h>

int m, n;

void lerMatrix(int v[m][n]);
void mostraMatrix(int v[m][n]);
void exibirMatrix(int vert, int hor, int v[m][n]);

main(){
	int hor=0, vert=0, x, y, t = 1;
	
	while(1){
		printf("M N\n>>> "); 
		scanf("%d %d", &m, &n); //LER DIMENSÕES DA MATRIX
		
		if(m==0 && n==0){ 
			//PARAR PROGRAMA
			break;
		}else if((1 > m) || (m > 1000) ||  (1 > n) || (n > 1000)){
			// SE AS DIMENSÕES ULTRAPASSAREM OS LIMITES
			printf("Margem da matrix fora dos limites.\n\n");
			continue;
		}else{
			//DECLARAÇÃO E LEITURA DA MATRIX
			int matrix[m][n], i, j;
			printf("\nLeitura da Matrix : ");
			lerMatrix(matrix);
			
			printf("\nX Y\n");
			while(1){
				printf(">>> ");
				scanf("%d %d", &x, &y);
				if(x==0 && y==0){
					break;
				}
				/*
				AQUI VAI CONTAR O TOTAL DE PIXELS QUE O USUARIO MEXER NA TELA
				SEJA NA HORIZONTAL OU VERTICAL */
				hor += x;
				vert += y;
			}
			// CASO O SOMATÓRIO SEJA NEGATIVO TROCAR O SINAL PARA POSITIVO OU VICE-VERSA. 
			// APENAS PRA FACILITAR NA TROCA DE ORDEM DAS COLUNAS
			vert = -vert;

			printf("\nTeste %d\n", t++);
			//printf("Matrix Original :\n"); mostraMatrix(matrix); printf("Matrix Alterada :\n"); 
			exibirMatrix(vert, hor, matrix);	
		}
		printf("\n - - - - - - \n\n");
	}
}

void lerMatrix(int v[m][n]){
	int i, j;
	putchar('\n');
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf(">>> ");
			scanf("%d", &v[i][j]);
		}
	}
}
void exibirMatrix(int vert, int hor, int v[m][n]){
	int i, j, inverte_pos_i, inverte_pos_j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			inverte_pos_i = (m + (i-vert) %m) % m;
			inverte_pos_j = (n + (j-hor) %n) % n;
			printf("\t%d ", v[inverte_pos_i][inverte_pos_j]);
		}
		putchar('\n');
	}
	putchar('\n');
}

void mostraMatrix(int v[m][n]){ //USADO APENAS PRA LER A MATRIX ORIGINAL TESTE
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("\t%d ", v[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
}
