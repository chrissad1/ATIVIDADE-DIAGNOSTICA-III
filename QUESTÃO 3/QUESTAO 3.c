#include<stdio.h>

int main(){
    
    int soma = 0, dados;

        printf("lance o dado\n ");

        while(  soma != 20 ){
            printf("informe o numero que esta apresentado no dado: ");
            scanf("%d",&dados);
            soma += dados;
            
            printf("a soma dos dados e %d \n", soma);

            if ( soma > 20){
                printf("seu numero ultrapassou 20, a soma foi de %d", soma);
                break;
                }else if( soma < 20 ){
                    printf("insira mais um numero destacado no dado \n");
                }

        }
    
    return 0;
}