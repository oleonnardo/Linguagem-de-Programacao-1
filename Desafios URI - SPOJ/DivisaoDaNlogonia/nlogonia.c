#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int i, k, n, m, x, y;
    do{
        puts("Indique o número de consultas que serão realizadas [0 para sair]: ");
        scanf("%d", &k);

        if(k != 0){
            for(i = 1; i <= k; i++){
                printf("\n **Teste %d**\n", i);
                puts("Indique as coordernadas do ponto divisor: ");
                scanf("%d %d", &n, &m); //d1 d2
                fflush(stdin);
                puts("Indique as coordernadas de uma residência: ");
                scanf("%d %d", &x, &y); // x y

                if(n == x || m == y){
                    printf("DIVISA\n");
                } else {
                    if(x > n){
                        if(y > m){
                            printf("NE\n");
                        }else{
                            printf("SE\n");
                        }
                    }else{
                        if(y > m){
                            printf("NO\n");
                        }else{
                            printf("SO\n");
                        }
                    }
                }

            }// fim do FOR
            printf("Testes finalizados.\n");
        } //fim do primeiro IF
    } while (k != 0);

    printf("\nAplicação finalizada.\n");
}