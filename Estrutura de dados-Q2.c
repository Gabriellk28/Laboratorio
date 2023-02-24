#include<stdio.h>
#include<stdlib.h>
typedef struct pessoa
{
    char nome[50];
    int documento;
    int idade;
}Pessoa;

void preenche(int qnt_pessoas,Pessoa *v_pessoa)
{
    int i;
    for(i=0; i<qnt_pessoas; i++)
    {
        printf("Informe o nome: \n");
        scanf(" %[^\n]s", v_pessoa[i].nome);
        printf("Informe o numero do documento: \n");
        scanf(" %d", &v_pessoa[i].documento);
        printf("Informe a idade: \n");
        scanf(" %d", &v_pessoa[i].idade);
        printf("\n");
    }    
}
void imprime(int qnt_pessoas, Pessoa *v_pessoa)
{
    int j;
    for(j=0; j<qnt_pessoas; j++);
    {
        printf("%s\n", v_pessoa[j].nome);
        printf("%d\n", v_pessoa[j].documento);
        printf("%d\n", v_pessoa[j].idade);
        printf("\n");
    }
}
void altera(int qnt_pessoas, Pessoa *v_pessoa)
{
    int a;
    for(a=0; a<qnt_pessoas; a++)
    {
        printf("Informe a nova idade:\n");
        scanf(" %d", &v_pessoa[a].idade);
    }
    for(a=0; a<qnt_pessoas; a++)
    {
       printf("%.d\n", v_pessoa[a].idade);
    }
}
void compara(int qnt_pessoas, Pessoa *v_pessoa)
{
    int i;
    for(i=0; i<qnt_pessoas; i++)
    {
        if(v_pessoa[0].idade>v_pessoa[i].idade)
        {
            printf("Maior idade: %s\n", v_pessoa[0].nome); 
        }
        else if(v_pessoa[0].idade<v_pessoa[i].idade)
        {
            printf("Menor idade: %s\n", v_pessoa[i].nome);  
        }
    }  
}
int main(void)
{
    int qnt_pessoas;
    printf("Informe a quantidade de pessoa:\n");
    scanf(" %d", &qnt_pessoas);
    Pessoa *v_pessoa=(Pessoa*) malloc(sizeof(Pessoa));
    if(v_pessoa==NULL)
    {
        printf("Erro!");
        exit(1);
    }
    preenche(qnt_pessoas, v_pessoa);
    imprime(qnt_pessoas, v_pessoa);
    altera(qnt_pessoas, v_pessoa);
    free(v_pessoa);
    return 0;
}
