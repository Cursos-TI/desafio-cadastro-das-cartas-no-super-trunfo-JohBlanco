#include <stdio.h>
#include <string.h>

int main(){

    char c_estado_1 = 'a', c_estado_2 = 'a'; //Salva o código dos estados
    char c_cidade_1[3] = "aa", c_cidade_2[3] = "aa"; //Salva o código das cidades
    char c_carta_1[4] = "aaa", c_carta_2[4] = "aaa"; //Salva o código das cartas
    char n_cidade_1[20] = "Rio de janeiro"; //Salva o nome da primeira cidade
    char n_cidade_2[20] = "Sao Paulo"; //Salva o nome da segunda cidade
    int populacao_1 = 0, populacao_2 = 0; //Salva a população das cidades
    float area_1 = 0.0, area_2 = 0.0; //Salva a área das cidades
    float PIB_1 = 0.0, PIB_2 = 0.0; //Salva o PIB das cidades
    int n_turismo_1 = 0, n_turismo_2 = 0; //Salva o número de pontos turísticos

    //Entrada de dados da primeira carta
    puts("Dados da Primeira Carta\n");
    puts("Insira o código do estado: ");
    scanf(" %c",&c_estado_1);
    printf("Insira o código da cidade: ");
    scanf(" %s", c_cidade_1);
    snprintf(c_carta_1, 4, "%c%s", c_estado_1, c_cidade_1);
    printf("Insira o nome da cidade: ");
    while (getchar() != '\n');
    fgets(n_cidade_1, 20, stdin);
    n_cidade_1[strcspn(n_cidade_1, "\n")] = 0;
    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao_1);
    printf("Insira a área da cidade: ");
    scanf(" %f", &area_1);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB_1);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d", &n_turismo_1);

    //Entrada de dados da segunda carta
    puts("Dados da Segunda Carta");
    printf("Insira o código do estado: ");
    scanf(" %c",&c_estado_2);
    printf("Insira o código da cidade: ");
    scanf(" %s", c_cidade_2);
    snprintf(c_carta_2, 4, "%c%s", c_estado_2, c_cidade_2);
    printf("Insira o nome da cidade: ");
    while (getchar() != '\n');
    fgets(n_cidade_2, 20, stdin);
    n_cidade_2[strcspn(n_cidade_2, "\n")] = 0;
    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao_2);
    printf("Insira a área da cidade: ");
    scanf(" %f", &area_2);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB_2);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d", &n_turismo_2);

    //Calcula Densidade Populacional e PIB per capita
    float densidade_1 = populacao_1/area_1;
    float densidade_2 = populacao_2/area_2;
    float PIB_per_capita_1 = PIB_1/populacao_1;
    float PIB_per_capita_2 = PIB_2/populacao_2;

    //Saída de dados da carta
    puts("\nPrimeira Carta");
    printf("\nEstado: %c",c_estado_1);
    printf("\nCodigo da carta: %s",c_carta_1);
    printf("\nNome da Cidade: %s",n_cidade_1);
    printf("\nPopulacao: %d",populacao_1);
    printf("\nArea: %.2f km²",area_1);
    printf("\nPIB: %.2f bilhoes de reais",PIB_1);
    printf("\nNumero de pontos turisticos: %d",n_turismo_1);
    printf("\nDensidade Populacional: %.2f hab/km²",densidade_1);
    printf("\nPIB per capita: %.2f reais/hab",PIB_per_capita_1);

    //Saída de dados da carta
    puts("\nSegunda Carta");
    printf("\nEstado: %c",c_estado_2);
    printf("\nCodigo da carta: %s",c_carta_2);
    printf("\nNome da Cidade: %s",n_cidade_2);
    printf("\nPopulacao: %d",populacao_2);
    printf("\nArea: %.2f km²",area_2);
    printf("\nPIB: %.2f bilhoes de reais",PIB_2);
    printf("\nNumero de pontos turisticos: %d",n_turismo_2);
    printf("\nDensidade Populacional: %.2f hab/km²",densidade_2);
    printf("\nPIB per capita: %.2f reais/hab",PIB_per_capita_2);

    //Comparação de dados
    if (populacao_1 > populacao_2){
        printf("\nCarta 1 - %s: %d",n_cidade_1,populacao_1);
        printf("\nCarta 2 - %s: %d",n_cidade_2,populacao_2);
        puts("\nA primeira carta venceu!");
    } else if (populacao_1 < populacao_2){
        printf("\nCarta 1 - %s: %d",n_cidade_1,populacao_1);
        printf("\nCarta 2 - %s: %d",n_cidade_2,populacao_2);
        puts("\nA segunda carta venceu!");
    } else {
        printf("\nCarta 1 - %s: %d",n_cidade_1,populacao_1);
        printf("\nCarta 2 - %s: %d",n_cidade_2,populacao_2);
        puts("\nAs cartas empataram!");
    }

    return 0;
}
