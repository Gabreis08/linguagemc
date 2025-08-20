#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/criararquivo.h"

//vamos criar uma estrutura(struct) que representa o cliente
//,com seus respectivos dados.

struct cliente{
    char nome[100];
    char email[100];
    int idade;
};

int main(){
    system("clear");
    printf("Digite o nome do cliente\n");
    //Vamos definir uma variavel do tipo struct de cliente
    //assim podemos acessar as propriedades da estrutura cliente
    struct cliente cli;
    //scanf("%s",cli.nome);
    printf("%s\n",cli.nome);
    fgets(cli.nome,sizeof(cli.nome),stdin);

    printf("Digite o email do cliente: \n");
    fgets(cli.email,sizeof(cli.email),stdin);

    printf("Digite a idade do cliente: \n");
    scanf("%d",&cli.idade);

    printf("%s - %s - %d\n",cli.nome,cli.email,cli.idade);
    //realizar a concatenação(junção de elementos distintos)para
    //gravar os dados de uma só vez
    char* dados_cliente;
    strcat(dados_cliente, cli.nome);

    char *resultado = criar("files/cadastro.txt",dados_cliente);
    printf("%s\n",resultado);

    return 0;
}