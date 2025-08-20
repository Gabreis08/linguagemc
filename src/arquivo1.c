# include <stdio.h>
#include <stdlib.h>

int main(){
    //vamos declarar a variavel que irá representar o arquivo
    // em tempo de execução. Esta variavel deve ser declarada como um constante
    //pois o seu conteudo NUNCA poderá ser alterado.Uma vez alocado o nome e caminho do arquivo
    //estes não poderão mudar em tempo de execução para não perder a localização do arquivo e
    //sua posição em memória.
    
    FILE *arquivo;
    //vamos definir onde o arquivo está ou será criado. Para isso iremos
    //usar o comando fopen(f-file=arquivo|open=abrir) além disso iremos definir
    //o atributo de manipulação de arquivos, tais como: r -> read(leitura)
    // w -> write(escrita) | a -> append (adição de texto) | pipe
    arquivo = fopen("files/texto.txt","a");

    //Vamos escrever no arquivo
    fprintf(arquivo,"Sexta-Feira\n");

    //fechar o arquivo
    fclose(arquivo);

    return 0;
}