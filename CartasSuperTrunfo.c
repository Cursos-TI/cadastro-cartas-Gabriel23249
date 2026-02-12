#include <stdio.h>

int main(){
    //váriaveis de atributos de carta1 e carta2
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int PT1;

    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int PT2;
    //cadastro da primeira carta
    printf("Priemira carta:\n");
    printf("Uma letra para representar o estado(de A a H)\n");
    scanf("%c", &estado1);

    printf("Código da carta(usando a letra do estado mais um numero de 01 a 04)\n");
    scanf(" %s", codigo1);

    printf("Nome da cidade(use _ para espaçamento):\n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf(" %f", &area1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &PT1);

    //cadastro da segunda carta
 printf("segunda carta:\n");
    printf("Uma letra para representar o estado(de A a H)\n");
    scanf(" %c", &estado2);

    printf("Código da carta(usando a letra do estado mais um numero de 01 a 04)\n");
    scanf(" %s", codigo2);

    printf("Nome da cidade(use _ para espaçamento):\n");
    scanf(" %s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &PT2);

    //apresentando dados das cartas

    printf("Carta1\n");
    printf("Estado: %c.\n", estado1);
    printf("Código da carta: %s.\n", codigo1);
    printf("Cidade: %s.\n", cidade1);
    printf("População: %d.\n",populacao1);
    printf("Área: %.1f\n", area1);
    printf("PIB: %.1f\n",PIB1);
    printf("Número de pontos turisticos: %d\n", PT1);

    printf("\n");//quebra de linha para separar informções das cartas

    printf("Carta2\n");
    printf("Estado: %c.\n", estado2);
    printf("Código da carta: %s.\n", codigo2);
    printf("Cidade: %s.\n", cidade2);
    printf("População: %d.\n",populacao2);
    printf("Área: %.1f\n", area2);
    printf("PIB: %.1f\n",PIB2);
    printf("Número de pontos turísticos: %d\n", PT2);
    return 0;
}