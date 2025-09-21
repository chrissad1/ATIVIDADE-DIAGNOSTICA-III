#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int aleatorio, n;

        aleatorio = rand() % 50 + 1;

        do{
            printf("Insira numero de ( de 1  a  50): ");
            scanf("%d",&n);

            if( n > aleatorio ){
                printf("Tente um numero menor\n");
            }else if( n < aleatorio){
                printf("Tente um numero maior\n");
            }

        }while( n != aleatorio );

        printf("Muito bem! O numero %d estava certo, voce acertou!",aleatorio);
    
    return 0;
}