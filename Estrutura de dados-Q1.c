#include<stdio.h>
#include<stdlib.h>
typedef struct funcionario
{
    char nome[50];
    float salario;
    int identificador;
    char cargo[30];
}Funcionario;

void preenche(int qnt_funcionario, Funcionario *v_funcionario)
{
    int i;
    for(i=0; i<qnt_funcionario; i++)
    {
        printf("Informe seu nome: \n");
        scanf(" %[^\n]s", v_funcionario[i].nome);
        printf("Informe seu salario: \n");
        scanf(" %f", &v_funcionario[i].salario);
        printf("Informe seu identificador: \n");
        scanf(" %d", &v_funcionario[i].identificador);
        printf("Informe seu cargo: \n");
        scanf(" %[^\n]s", v_funcionario[i].cargo);
        printf("\n");
    }    
}

void imprime(int qnt_funcionario, Funcionario *v_funcionario)
{
    int j;
    for(j=0; j<qnt_funcionario; j++);
    {
        printf("%s\n", v_funcionario[j].nome);
        printf("%f\n", v_funcionario[j].salario);
        printf("%d\n", v_funcionario[j].identificador);
        printf("%s\n", v_funcionario[j].cargo);
        printf("\n");
    }
}

void altera(int qnt_funcionario, Funcionario *v_funcionario)
{
    int a;
    for(a=0; a<qnt_funcionario; a++)
    {
        printf("Informe os novos valores:\n");
         scanf(" %f", &v_funcionario[a].salario);
    }
    for(a=0; a<qnt_funcionario; a++)
    {
       printf("%.2f\n", v_funcionario[a].salario);
    }
}

void compara(int quant_funcionario, Funcionario *v_funcionario)
{
    int i;
    for(i=0; i<quant_funcionario; i++)
    {
        if(v_funcionario[0].salario>v_funcionario[i].salario)
        {
            printf("\nCargo do funcionario:\t%s\n", v_funcionario[0].cargo);
            printf("Maior salario do funcionario:\t%f\n", v_funcionario[0].salario);
            printf("\nCargo do funcionario:\t%s\n", v_funcionario[i].cargo);
            printf("Menor salario do funcionario:\t%f\n", v_funcionario[i].salario);    
        }
        else 
            if(v_funcionario[0].salario<v_funcionario[i].salario)
            {
                printf("\nCargo do funcionario:\t%s\n", v_funcionario[i].cargo);
                printf("Maior salario do funcionario:\t%f\n", v_funcionario[i].salario);
                printf("\nCargo do funcionario:\t%s\n", v_funcionario[0].cargo);
                printf("Menor salario do funcionario:\t%f\n", v_funcionario[0].salario);
            }
    }  
}

int main(void)
{
    int qnt_funcionarios;
    printf("Informe a quantidade de funcionarios:\n");
    scanf(" %d", &qnt_funcionarios);
    Funcionario*v_fucionarios=(Funcionario*) malloc(qnt_funcionarios*sizeof(Funcionario));
    if(v_fucionarios==NULL)
    {
        printf("Erro!");
        exit(1);
    }
    preenche(qnt_funcionarios,v_fucionarios);
    imprime(qnt_funcionarios,v_fucionarios);
    altera(qnt_funcionarios,v_fucionarios);
    compara(qnt_funcionarios,v_fucionarios); 
    free(v_fucionarios);
    return 0;
}
