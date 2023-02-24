#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int total_pessoas, i;
    printf("Informe a quantidade de pessoas:\n");
    scanf(" %d", &total_pessoas);
    char *sexo, *opiniao;
    int total_M, total_F, total_M_NG, total_F_G,total_gostaram, total_nao_gostaram;
    sexo=(char*)malloc(total_pessoas*sizeof(char));
    if(sexo == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        exit(1);
    }
    opiniao=(char*)malloc(10*sizeof(char));
    if(opiniao == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        exit(1); 
    }   
    for(i=0; i<total_pessoas; i++){
        printf("Informe seu sexo(M/F):\n");
        scanf(" %c", sexo);
        if(*sexo=='M'){
            total_M=total_M+1;
            printf("Informe sua opinião(Gostei/Não gostei):\n");
            scanf(" %[^\n]s", opiniao);
            if(strcasestr(opiniao, "não gostei")){
                    total_M_NG=total_M_NG+1;
                }
        }
        else
            if(*sexo=='F'){
                total_F=total_F+1;
                printf("Informe sua opinião(Gostei/Não gostei):\n");
                scanf(" %[^\n]s", opiniao);
                if(strcasestr(opiniao, "gostei")){
                    total_F_G=total_F_G+1;
                }
            }
    }
    total_gostaram=(total_F_G*100)/total_pessoas;
    total_nao_gostaram=(total_M_NG*100)/total_pessoas;
    printf("\n");
    printf("Total de pessoas: %d\n", total_pessoas);
    printf("Total de pessoas do sexo masculino: %d\n", total_M);
    printf("Total de pessoas do sexo feminino: %d\n", total_F);
    printf("Porcentagem de pessoas do sexo feminino que responderam que gostaram do produto: %d%%\n", total_gostaram);
    printf("Porcentagem de pessoas do sexo masculino que responderam que não gostaram do prod: %d%%\n", total_nao_gostaram);
    free(sexo);
    free(opiniao);
    return 0;
}