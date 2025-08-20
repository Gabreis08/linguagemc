#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/att.h"

struct funcionario{
    char nome [100];
    float salario;
    float convenio;
    float premio;
    float salarioliquido;
};

int main(){
    system("clear");
    struct funcionario fun;
    printf("Digite o nome do funcionário: \n");
    fgets(fun.nome,sizeof(fun.nome),stdin);

    printf("Digite o salario do funcionário: \n");
    scanf("%f",&fun.salario);

    printf("Digite o desconto de convênio do funcionário: \n");
    scanf("%f",&fun.convenio);

    printf("Digite o prêmio do funcionário: \n");
    scanf("%f",&fun.premio);

    printf("O desconto de convênio é %.2f\n",jurosimples(fun.salario,fun.convenio));
    printf("O valor do prêmio é %.2f\n",jurosimples(fun.salario,fun.premio) - jurosimples(fun.salario,fun.convenio));
    fun.salarioliquido = fun.salario + jurosimples(fun.salario,fun.premio) - jurosimples(fun.salario,fun.convenio);
    printf("O salário liquído é %.2f\n",fun.salarioliquido);
    //vamos criar uma composição com textos literais e variaveis para guardar
    //em no arquivo de texto
    char dados_funcionario[100];

    char nome[30] = {"\nNome: "};
    strcat(nome,fun.nome);
    strcat(dados_funcionario,nome);

    //Criamos o vetor salario para armazenar o texto salario com R$
    //e juntar(concatenar) com o valor do salario
    char salario[20]=("\nSalário: R$ ");
    //Foi criado o vetor c_salario para guardar o valor do salario convertido
    //em char. Somente assim, será concatenado com o texto salário R$
    char c_salario[10];

    //Estamos usando o comando sprintf para converter o valor digitado do salario
    //que vem no formato float,para o formato char. Assim podemos juntar com o vetor
    //salario,criando,então a estrutura: salario R$ 00000.00
    sprintf(c_salario,"%.2f",fun.salario);

    //junção(concatenação)entre os vetores salario(salario R$)com c_salario
    //(o valor digitado do salario)
    strcat(salario,c_salario);

    //depois de juntar os vetores relacionados ao salario, agora iremos adicionar
    //ao vetor dwe dados_funcionario para, então, gravar no arquivo de texto
    strcat(dados_funcionario,salario);  


     
    char salario_liquido[20]=("\nLiquído: R$ ");

    char c_salario_liquido[10];

    sprintf(c_salario_liquido,"%.2f",fun.salarioliquido);

    strcat(salario_liquido,c_salario_liquido);

    strcat(dados_funcionario,salario_liquido);


    char *resposta = criar("files/funcionario.txt",dados_funcionario);
    printf("%s\n",resposta);

    return 0;

}

