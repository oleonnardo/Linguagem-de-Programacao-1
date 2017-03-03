/*
UNIVERSIDADE ESTADUAL DA PARA�BA
Curso: Ci�ncia da Computa��o
Disciplina: Linguagem de Programa��o 1
Professor: Danilo Abreu Santos
Aluno: Leonardo Araujo Silva

http://www.urionlinejudge.com.br/repository/UOJ_1973.html
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int sitios, ea;
void lerSitio();
void lerCarneiros(int c[sitios], int i);
int visitarSitio(int c[sitios], int i);
void mostra(int c[sitios]);

main(){
    setlocale(LC_ALL, "Portuguese");
	lerSitio(); 
	
	// DECLARAR ARRAY COM A CONTAGEM DOS CANEIROS POR ESTRELA I/SITIOS
	int carneiros[sitios], rs;
	
	lerCarneiros(carneiros, 0);
	//mostra(carneiros);
	putchar('\n');
	visitarSitio(carneiros, 0);
	//mostra(carneiros);
	rs = soma(carneiros);
	printf("\n%d %d", ea, rs);
}

void lerSitio(){
	printf("N�mero de Estrelas : ");
	scanf("%d", &sitios);
	
	if((sitios<1) || (sitios>pow(10,6))){
		printf("N�mero inv�lido.\n\n");
		lerSitio();
	}
}

void lerCarneiros(int c[], int i){
	while(1){
		printf("N�mero inicial de carneiros em Estrela %d : ", i+1);
		scanf("%d", &c[i]);
		if((c[i]<1) || (c[i]>pow(10,6))){
			printf("N�mero inv�lido.\n\n");
			continue;
		}else{
			if(i==sitios-1){
				break;
			}
			i++;
		}
	}
}
int visitarSitio(int c[sitios], int i){
	// RECURSIVIDADE DA FUN��O
	// ea -> SITIOS/ESTRELAS ATACADOS
	// rt -> CONTA QUANTOS SITIOS/ESTRELAS O IRM�O LOUCO RETORNA PRA ROUBAR OUTROS CARNEIROS
	// c -> VETOR COM TOTAL DE CANEIROS POR SITIO/ESTRELA i-1
	// i -> RECUPERAR O VALOR DO I
	// ca -> RESPONS�VEL POR ARMAZENAR O VALOR DE CARNEIROS ANTES DE ROUBAR UM
	
	int ca, rt=0;
	ca = c[i];
	
	if(c[i] > 0){
		c[i]-=1;
		ea++;
	}
	
	if(ca%2==0){
		if(i-1>0){ // VERIFICA SE O �NDICE � VALIDO
			if(c[i-1] > 0){ // VERIFICA SE TEM CARNEIROS NA ESTRELA/SITIO i-1 SE N�O ELE PULA -2
				rt++; // SOMA DE ESTRELAS/SITIOS REPETIDOS **
				visitarSitio(c, i-1);
			}else{
				visitarSitio(c, i-2);
			}
		}
	}else{
		if(i+1<sitios){ // VERIFICA SE O �NDICE � VALIDO
			if(c[i+1] > 0){ // VERIFICA SE TEM CARNEIROS NA ESTRELA/SITIO i+1 SE N�O ELE PULA +2
				visitarSitio(c, i+1);
			}else{
				visitarSitio(c, i+2);
			}
		}
	}
	ea-=rt; // RETIRA O NUMEROS DE ESTRELAS/SITIO REPETIDOS **
}
int soma(int x[sitios]){
	int i, rs=0;
	for(i=0; i<sitios; i++){
		rs+=x[i];
	}
	return rs;
}
void mostra(int c[]){
	int i;
	for(i=0; i<sitios; i++){
		printf("%d  ", c[i]);
	}
}
