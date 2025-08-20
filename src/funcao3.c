# include <stdio.h>
#include <stdlib.h>
#include "../lib/funcao3.h"

int main(){
    system("clear");
    cabecalho();
    int p = potencia(2,4);
    float juros = jurosimples(500.00, 6.0);
    printf("O resultado da potência é %d\n",p);
    printf("O resultado de juros é %.2f\n",juros);
    separador();
    return 0;
}