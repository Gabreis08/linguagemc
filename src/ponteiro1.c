#include <stdio.h>
#include <stdlib.h>
int main(){
    int valor = 10;
    int *pvalor = &valor;
    printf("O valor de %d\n",valor);
    printf("O valor de %p\n",pvalor);
    return 0;
}