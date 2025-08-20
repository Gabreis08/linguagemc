#include <stdio.h>
int main(){
    int opcao;
    printf("Selecione uma opção:\n");
    printf("1.Ver Saldo\n");
    printf("2.Fazer Saque\n");
    printf("3.Fazer Depósito\n");
    printf("4.Sair\n");
    printf("Digite sua opção:");
    scanf("%d",&opcao);
    if (opcao==1){
        printf("Você escolheu 'Ver Saldo'.\n");
    }
    else if (opcao==2){
        printf("Você escolheu 'Fazer Saque'.\n");
    }
    else if (opcao==3){
        printf("você escolheu 'Fazer Depósito'.\n");
    }
    else if (opcao==4){
        printf("Saindo do programa.Até Mais!\n");
    }
    else{
        printf("Opção inválida. Por favor, escolha um número entre 1 e 4.\n");
    }
    return 0;
}