#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i, num;
    printf("Digite um número para a tabuada\n");
    scanf("%d",&num);
    for ( i = 1; i <= 10; i++){
        printf("%d X %d = %d\n",num,i,(num*i));
    }
    return 0;
}