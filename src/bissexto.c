#include <stdio.h>

int main(){
    int ano;

    printf("Digite um ano e tecle Enter\n");
    scanf("%d",&ano);

    if (ano % 4 == 0){
       printf("Este ano %d é bissexto\n",ano);
    }
    else{
        printf("Este ano %d não é bissexto\n",ano);
    }
    return 0;
}