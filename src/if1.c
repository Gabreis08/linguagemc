#include <stdio.h>
int main(){
    int pontuacao=85;
    char conceito;
    if (pontuacao>=90){
        conceito='A';
    }
    else if (pontuacao>=80){
        conceito='B';
    }
    else if (pontuacao>=70){
        conceito='C';
    }
    else if (pontuacao>=60){
        conceito='D';
    }
    else{
        conceito='F';
    }
    printf("Pontuação:%d->Conceito:%c\n",pontuacao,conceito);
    return 0;
}