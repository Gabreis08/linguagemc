#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite um numero\n");
    scanf("%d\n",&n);
    int i;
    for ( i = 0; i <= n; i++){
        printf("%d\n",i);
    }
    return 0;
}