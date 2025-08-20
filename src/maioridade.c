#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade e tecle Enter\n");
    scanf("%d",&idade);
    if (idade > 17){
        printf("Pela sua idade %d seu acesso foi autorizado\n",idade);
    }    
    else{
        printf("Pela sua idade %d seu acesso foi negado\n",idade);
    }
    return 0;
}