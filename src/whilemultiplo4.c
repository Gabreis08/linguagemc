#include <stdio.h>
# include <stdlib.h>

int main(){
    //Limpar a tela com system(clear)
    system("clear");
    int x = 1;
    while (x <= 100){
        if (x % 4 == 0){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}