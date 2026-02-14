#include <stdio.h>

int main(){
   
    char estado_a[15], codcarta_a[5], nomecidade_a[20], estado_b[15], codcarta_b[5], nomecidade_b[20];//%s
    int populacao_a, populacao_b;//%d
    float areakm_a, pib_a, areakm_b, pib_b;//%f
    int nptirusmo_a, nptirusmo_b;//%d
    
    printf("Digite os dados da Carta 1: \n");
    printf("Estado: ");
    scanf("%s", estado_a);
    printf("Código da Carta: ");
    scanf("%s", codcarta_a);
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade_a);
    printf("Quantidade da População: ");
    scanf("%d", &populacao_a);
    printf("Área em Km²: ");
    scanf("%f", &areakm_a);
    printf("PIB da ciadade: ");
    scanf("%f", &pib_a);
    printf("Quantidade de pontos Turisticos: ");
    scanf("%d", &nptirusmo_a);
    printf("\n");


    printf("Digite os dados da Carta 2: \n");
    printf("Estado: ");
    scanf("%s", estado_b);
    printf("Código da Carta: ");
    scanf("%s", codcarta_b);
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade_b);
    printf("Quantidade da População: ");
    scanf("%d", &populacao_b);
    printf("Área em Km²: ");
    scanf("%f", &areakm_b);
    printf("PIB da ciadade: ");
    scanf("%f", &pib_b);
    printf("Quantidade de pontos Turisticos: ");
    scanf("%d", &nptirusmo_b);
    printf("\n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado_a);
    printf("Codigo: %s \n", codcarta_a);
    printf("Nome da Cidade: %s \n", nomecidade_a);
    printf("População: %d \n", populacao_a);
    printf("Área: %f Km²\n", areakm_a);
    printf("PIB: %f bilhões de reais \n", pib_a);
    printf("Número de Pontos Turísticos: %d \n", nptirusmo_a);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado_b);
    printf("Codigo: %s \n", codcarta_b);
    printf("Nome da Cidade: %s \n", nomecidade_b);
    printf("População: %d \n", populacao_b);
    printf("Área: %f Km²\n", areakm_b);
    printf("PIB: %f bilhões de reais \n", pib_b);    
    printf("Número de Pontos Turísticos: %d \n", nptirusmo_b);


    return 0;


}
