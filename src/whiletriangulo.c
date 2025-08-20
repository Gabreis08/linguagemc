#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int linha = 1;
    int coluna = 1;
    while (linha <= 20){
        while(coluna <= linha){
            printf("@  ");
            coluna++;
        }
        coluna = 1;//resetar a variavel coluna
        printf("\n");
        linha++;
    }
    return 0;
}