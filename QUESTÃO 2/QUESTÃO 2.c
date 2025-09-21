#include<stdio.h>

int main(){
    
    int n, i, soma = 0;

        printf("Digite um numero e veja qual e o resultado da soma dos quadrados ate esse valor N");
        scanf("%d",&n);
    
            for( i = 1 ; i <= n ; i++ ){
                
                    soma += i * i;

            }
        printf("O valor obtido da soma dos quadrados dos naturais e %d", soma);

    return 0;

}