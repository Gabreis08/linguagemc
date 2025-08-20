#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("Digite um numero\n");
    scanf("%d\n",&n);
    for (i = n ; i >= 0 ; i--){
        printf("%d\n",i);
    }
    return 0;
}