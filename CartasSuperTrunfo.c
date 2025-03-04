#include <stdio.h>
#include <string.h> // Biblioteca necessária para manipulação de strings, como strlen, strcpy e fgets

int main(){
    // Declaração das variáveis
    char c_estado_1 = 'a', c_estado_2 = 'a'; // Código dos estados
    char c_cidade_1[3] = "aa", c_cidade_2[3] = "aa"; // Código das cidades
    char c_carta_1[4] = "aaa", c_carta_2[4] = "aaa"; // Código das cartas
    char n_cidade_1[20] = "Rio de Janeiro"; // Nome da primeira cidade
    char n_cidade_2[20] = "Sao Paulo"; // Nome da segunda cidade
    int populacao_1 = 0, populacao_2 = 0; // População das cidades
    float area_1 = 0.0, area_2 = 0.0; // Área das cidades
    float PIB_1 = 0.0, PIB_2 = 0.0; // PIB das cidades
    int n_turismo_1 = 0, n_turismo_2 = 0; // Número de pontos turísticos

    // Entrada de dados da primeira carta
    puts("Dados da Primeira Carta\n");
    puts("Insira o código do estado: ");
    scanf(" %c", &c_estado_1);
    printf("Insira o código da cidade: ");
    scanf(" %s", c_cidade_1);
    snprintf(c_carta_1, 4, "%c%s", c_estado_1, c_cidade_1);
    printf("Insira o nome da cidade: ");
    while (getchar() != '\n'); // Limpa o buffer de entrada
    fgets(n_cidade_1, 20, stdin);
    n_cidade_1[strcspn(n_cidade_1, "\n")] = 0; // Remove quebra de linha
    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao_1);
    printf("Insira a área da cidade: ");
    scanf(" %f", &area_1);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB_1);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d", &n_turismo_1);

    // Entrada de dados da segunda carta
    puts("\nDados da Segunda Carta");
    printf("Insira o código do estado: ");
    scanf(" %c", &c_estado_2);
    printf("Insira o código da cidade: ");
    scanf(" %s", c_cidade_2);
    snprintf(c_carta_2, 4, "%c%s", c_estado_2, c_cidade_2);
    printf("Insira o nome da cidade: ");
    while (getchar() != '\n'); // Limpa o buffer de entrada
    fgets(n_cidade_2, 20, stdin);
    n_cidade_2[strcspn(n_cidade_2, "\n")] = 0; // Remove quebra de linha
    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao_2);
    printf("Insira a área da cidade: ");
    scanf(" %f", &area_2);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB_2);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d", &n_turismo_2);

    // Saída de dados da primeira carta
    puts("\nPrimeira Carta");
    printf("\nEstado: %c", c_estado_1);
    printf("\nCódigo da carta: %s", c_carta_1);
    printf("\nNome da Cidade: %s", n_cidade_1);
    printf("\nPopulação: %d", populacao_1);
    printf("\nÁrea: %.2f km²", area_1);
    printf("\nPIB: %.2f bilhões de reais", PIB_1);
    printf("\nNúmero de pontos turísticos: %d", n_turismo_1);

    // Saída de dados da segunda carta
    puts("\nSegunda Carta");
    printf("\nEstado: %c", c_estado_2);
    printf("\nCódigo da carta: %s", c_carta_2);
    printf("\nNome da Cidade: %s", n_cidade_2);
    printf("\nPopulação: %d", populacao_2);
    printf("\nÁrea: %.2f km²", area_2);
    printf("\nPIB: %.2f bilhões de reais", PIB_2);
    printf("\nNúmero de pontos turísticos: %d", n_turismo_2);

    return 0;
}
