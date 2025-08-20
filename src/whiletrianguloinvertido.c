#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int linha = 20;
    int coluna = 1;
    while (linha >= 1){
        while(coluna <= linha){
            printf("@  ");
            coluna++;
        }
        coluna = 1;//resetar a variavel coluna
        printf("\n");
        linha--;
    }
    return 0;
}