#include <stdio.h>
#include <stdlib.h>

int main(){
    //Chamar o comando system("clear") para limpar a tela do terminal
    system("clear");
    //Criar a variavel do tipo char para guardar a operaçao matematica
    //Que podera ser: + - * ou /
    char ch;
    //Criar variavel para guardar dois numeros para as operaçoes
    //matematicas
    int a, b;
    printf("Digite uma operação matemática: + , - , * , /\n");
    //Vamos capturar o sinal digitado pelo usuario e alocar na variavel
    //ch. Usaremos o comando getchar, que vem da biblioteca stdlib
    //caso voce queira usar o scanf, poderia ser feito da seguinte forma:
    //scanf("%c",&ch);
    ch = getchar();
    printf("Digite dois números inteiros dando espaço entre eles: \n");
    scanf("%d%d",&a,&b);
    switch (ch){
    case '+':{
        int c = a + b;
        printf("O resultado da soma é %d\n",c);
    }
    break;
    case '-':{
        int d = a - b;
        printf("O resultado da subtraçâo é %d\n",d);
    }
    break;
    case '*':{
        int e = a * b;
        printf("O resultado da multiplicaçâo é %d\n",e);
    }
    break;
    case '/':{
        int f = a / b;
        printf("O resultado da divisâo é %d\n",f);
    }
    break;
    default:
    printf("Operação inválida\n");
    }
    return 0;
}