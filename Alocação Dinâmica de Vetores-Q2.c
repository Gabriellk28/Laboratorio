#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i, j, quant_questoes, acertos, nota, porcentagem_aprovados;
    char *gabarito;
    printf("Informe a quantidade de questões da prova:");
    scanf(" %d", &quant_questoes);
    gabarito=(char*)malloc(quant_questoes*sizeof(char));
    if(gabarito==NULL){
        printf("Erro: Memoria Insuficiente!\n");
        exit(1);
    }
    printf("\n");
    printf("Informe o gabarito da prova:\n");
    for(i=0; i<quant_questoes; i++){
        scanf(" %c", gabarito+i);
    }
    printf("\n");
    printf("Gabarito:\n");
    for(i=0; i<quant_questoes; i++){
        printf("Questão %d - %c\n", i+1, gabarito[i]);
    }
    char *respostas;
    respostas=(char*)malloc(quant_questoes*sizeof(char));
    printf("\n");
    printf("Gabarito dos alunos:\n");
    for(i=0; i<10; i++){
        printf("Informe o gabarito do aluno %d:\n", i+1);
        for(j=0; j<quant_questoes; j++){
            scanf(" %c", respostas+j);
            if(gabarito[j]==respostas[j]){
                acertos=acertos+1;
            }
        }
        nota=(acertos*100)/quant_questoes;
        if(nota>=60){
            porcentagem_aprovados=porcentagem_aprovados+1;
        }
        printf("Acertos: %d\n", acertos);
        printf("Nota do aluno %d: %d\n", i+1, nota);
        printf("\n");
        acertos=0;
    }
    printf("\n");
    printf("Porcentagem de aprovação: %d%%\n", (porcentagem_aprovados*100)/10);
    free(gabarito);
    return 0;
}
