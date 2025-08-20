# include <stdio.h>
# include <stdlib.h>
/*
void: significa vazio e é usado para funções que NÃO retornam valores
elas possuem saída pré derfinida
*/

void mensagem(){
    printf("Olá,seja bem vindo\n"); 
}

int soma(int x, int y){
    return x+y;
}

int main(){
mensagem();
printf("A soma de 5 e 7 é igual a %d\n", soma(5,7));
    return 0;
}