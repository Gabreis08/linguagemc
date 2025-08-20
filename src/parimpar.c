#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número e tecle Enter\n");
    scanf("%d",&numero);
    if (numero % 2 == 0){
        printf("O número %d é PAR\n",numero);
    }
    else{
        printf("O número %d é IMPAR\n",numero);
    }
    return 0;
}