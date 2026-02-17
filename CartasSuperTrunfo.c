#include <stdio.h>
#include <string.h>


int main(){
   
    char estado1[50], codigo1[50], cidade1[100], estado2[50], codigo2[50], cidade2[100];//%s
    float populacao1, area1, pib1, dp1, pibpc1, populacao2, area2, pib2, dp2, pibpc2, calcpibpc1, calcpibpc2;//$f
    int pontur1,pontur2;//%d
    
   printf("***Digite os valores das cartas do Super Trunfo***\n");
    
    
    printf("Carta 1 - Estado: \n");
    //scanf("%[^\n]%*c", estado1);
    fgets(estado1, 50, stdin);// texto com espaço
    estado1[strcspn(estado1, "\n")]='\0';//tira espaço entre linhas
    printf("Carta 2 - Estado: \n");
    //scanf("%[^\n]%*c", estado2);
    fgets(estado2, 50, stdin);// texto com espaço
    estado2[strcspn(estado2, "\n")]='\0';//tira espaço entre linhas
    printf("Carta 1 - Código da Carta: \n");
    //scanf("%[^\n]%*c", codigo1);
    fgets(codigo1, 50, stdin);// texto com espaço
    codigo1[strcspn(codigo1, "\n")]='\0';//tira espaço entre linhas
    printf("Carta 2 - Código da Carta: \n");
    //scanf("%[^\n]%*c", codigo2);
    fgets(codigo1, 50, stdin);// texto com espaço
    codigo1[strcspn(codigo1, "\n")]='\0';//tira espaço entre linhas
    printf("Carta 1 - Nome da Cidade: \n");
    //scanf("%[^\n]%*c", cidade1);
    fgets(cidade1, 100, stdin);// texto com espaço
    cidade1[strcspn(cidade1, "\n")]='\0';//tira espaço entre linhas
    printf("Carta 2 - Nome da Cidade: \n");
    //scanf("%[^\n]%*c", cidade2);
    fgets(cidade1, 100, stdin);// texto com espaço
    cidade1[strcspn(cidade1, "\n")]='\0';//tira espaço entre linhas
    printf("Carta 1 - Quantidade da População: \n");
    scanf("%f", &populacao1);
    printf("Carta 2 - Quantidade da População: \n");
    scanf("%f", &populacao2);
    printf("Carta 1 - Área em Km²: \n");
    scanf("%f", &area1);
    printf("Carta 2 - Área em Km²: \n");
    scanf("%f", &area2);   
    printf("Carta 1 - PIB da ciadade em Bilhões de Reais: \n");
    scanf("%f", &pib1);
    printf("Carta 2 - PIB da ciadade em Bilhões de Reais: \n");
    scanf("%f", &pib2);
    printf("Carta 1 - Quantidade de pontos Turisticos: \n");
    scanf("%d", &pontur1);
    printf("Carta 2 - Quantidade de pontos Turisticos: \n");
    scanf("%d", &pontur2);
    
    printf("\n");
    
    
    
    dp1 = populacao1 / area1; //Densidade Populaciona
    calcpibpc1 = pib1 * 1000000000;
    pibpc1 = calcpibpc1 / populacao1; //PIB per Capita
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %.0f \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontur1);
    printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("\n");

    
    dp2 = populacao2 / area2; //Densidade Populaciona
    calcpibpc2 = pib2 * 1000000000;
    pibpc2 = calcpibpc2 / populacao2; //PIB per Capita
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %.0f \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontur2);
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("\n");


    return 0;
    
    

}
