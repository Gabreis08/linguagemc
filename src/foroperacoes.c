#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i, inicial, final;
    printf("Digite um número inicial\n");
    scanf("%d",&inicial);
    printf("Digite um valor final\n");
    scanf("%d",&final);
    for ( i = inicial; i <= final; i++){
        printf("%d\n",i);
    }
    return 0;
}