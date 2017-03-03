#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define CARACTERES 15

char jogador1[CARACTERES], jogador2[CARACTERES];
int tabela[3][3];
int menu();
void preencher_tabela();
void exibe_tabela();
void jogada(char w[CARACTERES], char z);
int verificarJogo();
void exibeResultado(int x, int y);
void creditos();
void salvaRecorde(char x[], int y);
void lerRecorde(char url[]);
void lerJogador();

main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao, rs, rodada=1;
	char z1='X', z2='O';
	do{
		opcao=menu();
		switch(opcao){
			case 0:{
				putchar('\n');
				creditos();
				break;
			}
			case 1:{
				putchar('\n');
				lerJogador();
				preencher_tabela();
				exibe_tabela();
				do{
					if(rodada){
						jogada(jogador1, z1);
						rodada=0;
					}else{
						jogada(jogador2, z2);
						rodada=1;
					}
					exibe_tabela();
					rs = verificarJogo();
				}while((rs<1) || (rs>2));
				putchar('\n');
				exibeResultado(rodada, rs);
				break;
			}	
			case 2:{
				putchar('\n');
			    printf("*****************************************************\n");
			    printf("*                    PARTIDAS                       *\n\n");
			    lerRecorde("partidas.txt");
			    printf("\n*****************************************************\n");
				getch();
				break;
			}	
			case 3:{
				putchar('\n');
			    printf("*****************************************************\n");
			    printf("*                      AJUDA                        *\n\n");
				lerRecorde("ajuda.txt");
			    printf("\n*****************************************************\n");
				getch();
				break;
			}	
			case 4:{
				putchar('\n');
				creditos();
				putchar('\n');
				break;
			}
			default: {
				printf("\nOpção inválida.\n");
				break;
			}
		}
		
		printf("\n\n");
	}while(opcao);
}

int menu(){
	int op;
    printf("*******************************************************\n");
    printf("*                   JOGO DA VELHA                     *\n");
    printf("*******************************************************\n");
    printf("*                                                     *\n");
    printf("*     1 - Novo Jogo                                   *\n"); 
    printf("*     2 - Partidas                                    *\n");
    printf("*     3 - Ajuda                                       *\n");
    printf("*     4 - Créditos                                    *\n");
    printf("*     0 - Sair                                        *\n");
    printf("*                                                     *\n");
    printf("\n*****************************************************\n");
    printf("Digite sua opcao: ");
	scanf("%d", &op);
	return op;
}
void lerJogador(){
	int i, tam=1;
	while(tam){
		printf("Jogador 1 : ");
		scanf("%s", &jogador1);
		tam = strlen(jogador1);
		if((tam>CARACTERES ) || (tam<3)){
			printf("- Erro na leitura do usuário.\n*Mínimo 2 caracteres || Máximo 15 caracteres*\n\n");
			continue;	
		}else{
			tam=0;
		}
	}
	tam++;
	while(tam){
		printf("Jogador 2 : ");
		scanf("%s", &jogador2);
		tam = strlen(jogador2);
		if((tam>CARACTERES ) || (tam<3)){
			printf("- Erro na leitura do usuário.\n*Mínimo 2 caracteres || Máximo 15 caracteres*\n\n");
			continue;	
		}else{
			tam=0;
		}
	}
	printf("\nDesenhando tabela...\n");
}
void jogada(char w[CARACTERES], char z){
	int x, y;
	putchar('\n');
	printf("Entre com as coordenadas %s [1-3]X[1-3]: ", w);
	scanf("%d %d", &x, &y);
	x--;y--; //DIMINUIR UMA UNIDADE PARA A TABELA RECONHECER
	if(tabela[x][y] != ' '){
		printf("++ Posição inválida. Tente novamente. ++\n");
		jogada(w, z);
	}else{
		tabela[x][y] = z; 
	}
	putchar('\n');
}
void preencher_tabela(){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			tabela[i][j] = ' ';
		}
	}
}
void exibe_tabela(){
	int i;
	putchar('\n');
	for(i=0; i<3; i++){
		printf(" %c | %c | %c ", tabela[i][0], tabela[i][1], tabela[i][2]);
		if(i!=2){
			printf("\n---|---|---\n");
		}
	}
	putchar('\n');
}
int verificarJogo(){
	int i, j, cont=0;
		
	for(i=0; i<3; i++){
		if((tabela[i][0] == 'O') ||(tabela[i][0] == 'X')){
			if((tabela[i][0] == tabela[i][1]) && (tabela[i][1] == tabela[i][2])){ // VERIFICAR LINHAS
				return 1;
			}
		}
		if((tabela[0][i] == 'O') ||(tabela[0][i] == 'X')){
			if((tabela[0][i] == tabela[1][i]) && (tabela[1][i] == tabela[2][i])){ // VERIFICAR COLUNAS
				return 1;
			}
		}
	}
	
	if((tabela[0][0] == 'O') ||(tabela[0][0] == 'X')){
		if((tabela[0][0] == tabela[1][1]) && (tabela[1][1] == tabela[2][2])){ // VERIFICA DIAGONAIS - ESQ P/ DIR
			return 1;
		}
	}
	if((tabela[0][2] == 'O') ||(tabela[0][2] == 'X')){
		if((tabela[0][2] == tabela[1][1]) && (tabela[1][1] == tabela[2][0])){ // VERIFICA DIAGONAIS - DIR P/ ESQ
			return 1;
		}
	}
	for(i=0; i<3; i++){//VERIFICAR SE A TABELA DO JOGO ESTÁ PREENCHIDA PARA SABER SE HOUVE EMPATE
		for(j=0; j<3; j++){
			if(tabela[i][j] != ' '){ 
				cont++;
				if(cont==9){ return 2; }
			}
		}
	}
	return 0;
}
void salvaRecorde(char x[], int y){
	char url[]="partidas.txt";
	FILE *arq;
	arq = fopen(url, "a+");// ABRE UM ARQUIVO PRA ESCRITA
	if(arq == NULL){ //VERIFICA SE HOUVE ERROS NA ABERTURA DO ARQUIVO
			printf("Erro, não foi possível abrir o arquivo.\n");
	}else{
		switch(y){
			case 1:
				fprintf(arq, "- %s vs %s : %s venceu!\n", jogador1, jogador2, x); //ESCREVE NO ARQUIVO, CASO UM VENÇA
				break;
			case 2:
				fprintf(arq, "- %s vs %s : %s!\n", jogador1, jogador2, x); //ESCREVE NO ARQUIVO, CASO UM VENÇA
				break;
		}
	}
	fclose(arq);
}
void lerRecorde(char url[]){
	char ch;
	FILE *arq;
	arq = fopen(url, "r+"); // ABRE UM ARQUIVO PRA LEITURA
	if(arq == NULL){
	    printf("Erro, não foi possível abrir o arquivo.\n");
	}else{
	    while((ch=fgetc(arq))!= EOF ){ //LER O ARQUIVO ATÉ LOCALIZAR SEU FIM . EOF É DEVOLVIDO SE OCORRER UM ERRO
			putchar(ch);
		}
	}	
	putchar('\n');	
	fclose(arq);
}
void exibeResultado(int x, int y){
	switch(y){
		case 1:{
			if(!x){
				printf("******** PARABÉNS %s, VOCÊ VENCEU!!! ********", jogador1);
				salvaRecorde(jogador1, 1);
			}else{
				printf("******** PARABÉNS %s, VOCÊ VENCEU!!! ********", jogador2);
				salvaRecorde(jogador2, 1);
			}
			printf("\n\nJogo Finalizado!!\n\n");
			break;
		} 
		case 2:{
			printf("\nJOGO EMPATADO!!\n");
			printf("******** PARABÉNS AOS JOGADORES!! ********");
			salvaRecorde("jogo empatado", 2);
			putchar('\n');
			break;
		}
			
	}
}
void creditos(){
    printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*   Universidade Estadual da Paraiba - UEPB         *\n");
    printf("*   Ciência da Computação - 2º.Periodo              *\n");
    printf("*   Leonardo Araújo Silva                           *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");
    getch();
}
