/*
	Autor: Leonardo Araujo Silva
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int qtde, i=2, j, contador = 0, soma=0, parada=0;
	
	do{
		printf("Digite a quantidade de primos que deseja soma : [0 para sair] ");
		scanf("%d", &qtde);
		if(qtde<0){
			puts("Número inválido.\n");
		}else if(qtde == 1){
			printf("Resultado : 2\n\n");
		}else if(qtde != 0){	
			while(1){
		        for(j=1; j<=i; j++){
		            if(i%j == 0){
						contador++;
		            }
		        }
		        
		        if(contador<=2){
		            soma+=i;
					parada++;
		        }
				
				if(parada==qtde){
					break;
				}else{
					contador = 0;
		        	i++;
		        }
		    }
		    printf("Resultado da soma :  %d\n\n", soma);
		}else{
			puts("Programa finalizado.\n");
		}
    }while((qtde!= 0 ) || (qtde<0));
}
