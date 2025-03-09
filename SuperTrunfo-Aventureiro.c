#include <stdio.h>
#include <string.h> //Necessário para manipulação de strings, como a remoção do '\n' com strcspn()

int main(){
    //Exibe as regras do jogo
    puts("*Jogo de Cartas Super Trunfo*\n"
        "\nRegras: O jogo consiste em comparar as cartas de dois jogadores, onde cada carta possui nome do pais, população, área, PIB, densidade populacional, e número de pontos turísticos.\n"
        "O jogador cuja carta tiver o maior valor do atributo escolhido para comparacao vence.\n"
        "O jogo termina quando todas as cartas forem jogadas.\n"
        "\nInsira os dados de duas cartas para iniciar o jogo.\n");

    //Declaração de variáveis
    char n_pais_1[20] = "Brasil"; //Salva o nome do primeiro país
    char n_pais_2[20] = "Japao"; //Salva o nome do segundo país
    int populacao_1 = 0, populacao_2 = 0; //Salva a população das cidades
    float area_1 = 0.0, area_2 = 0.0; //Salva a área das cidades
    float PIB_1 = 0.0, PIB_2 = 0.0; //Salva o PIB das cidades
    int n_turismo_1 = 0, n_turismo_2 = 0; //Salva o número de pontos turísticos

    //Entrada de dados da primeira carta
    puts("Dados da Primeira Carta\n");
    printf("Insira o nome do pais: ");
    fgets(n_pais_1, 20, stdin);
    n_pais_1[strcspn(n_pais_1, "\n")] = 0;
    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao_1);
    printf("Insira a área da cidade: ");
    scanf(" %f", &area_1);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB_1);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d", &n_turismo_1);

    //Entrada de dados da segunda carta
    puts("Dados da Segunda Carta\n");
    printf("Insira o nome do pais: ");
    while(getchar() != '\n'); //Limpeza de buffer antes da entrada do nome do pais
    fgets(n_pais_2, 20, stdin);
    n_pais_2[strcspn(n_pais_2, "\n")] = 0;
    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao_2);
    printf("Insira a área da cidade: ");
    scanf(" %f", &area_2);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB_2);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d", &n_turismo_2);

    //Calcula Densidade Populacional
    float densidade_1 = populacao_1/area_1;
    float densidade_2 = populacao_2/area_2;

    //Saída de dados da carta
    puts("\nPrimeira Carta");
    printf("\nNome do pais: %s",n_pais_1);
    printf("\nPopulacao: %d",populacao_1);
    printf("\nArea: %.2f km²",area_1);
    printf("\nPIB: %.2f bilhoes de reais",PIB_1);
    printf("\nNumero de pontos turisticos: %d",n_turismo_1);
    printf("\nDensidade Populacional: %.2f hab/km²",densidade_1);

    //Saída de dados da carta
    puts("\nSegunda Carta");
    printf("\nNome do pais: %s",n_pais_2);
    printf("\nPopulacao: %d",populacao_2);
    printf("\nArea: %.2f km²",area_2);
    printf("\nPIB: %.2f bilhoes de reais",PIB_2);
    printf("\nNumero de pontos turisticos: %d",n_turismo_2);
    printf("\nDensidade Populacional: %.2f hab/km²",densidade_2);

    //Comparação de dados
    puts("\nEscolha uma das opcoes abaixo para realizar a comparacao:\n"
        "1 - Populacao\n"
        "2 - Area\n"
        "3 - PIB\n"
        "4 - Numero de pontos turisticos\n"
        "5 - Densidade populacional\n"
        "6 - Sair\n");

    while(getchar() != '\n'); //Limpeza de buffer antes da escolha das opções
    switch (getchar()){
        case '1':
        puts("\nComparacao de Populacao");
        if (populacao_1 > populacao_2){
            printf("\nCarta 1 - %s: %d",n_pais_1,populacao_1);
            printf("\nCarta 2 - %s: %d",n_pais_2,populacao_2);
            puts("\nA primeira carta venceu!");
        } else if (populacao_1 < populacao_2){
            printf("\nCarta 1 - %s: %d",n_pais_1,populacao_1);
            printf("\nCarta 2 - %s: %d",n_pais_2,populacao_2);
            puts("\nA segunda carta venceu!");
        } else {
            printf("\nCarta 1 - %s: %d",n_pais_1,populacao_1);
            printf("\nCarta 2 - %s: %d",n_pais_2,populacao_2);
            puts("\nAs cartas empataram!");
        }
            break;

        case '2':
        puts("\nComparacao de Area");
        if (area_1 > area_2){
            printf("\nCarta 1 - %s: %.2f km²",n_pais_1,area_1);
            printf("\nCarta 2 - %s: %.2f km²",n_pais_2,area_2);
            puts("\nA primeira carta venceu!");
        } else if (area_1 < area_2){
            printf("\nCarta 1 - %s: %.2f km²",n_pais_1,area_1);
            printf("\nCarta 2 - %s: %.2f km²",n_pais_2,area_2);
            puts("\nA segunda carta venceu!");
        } else {
            printf("\nCarta 1 - %s: %.2f km²",n_pais_1,area_1);
            printf("\nCarta 2 - %s: %.2f km²",n_pais_2,area_2);
            puts("\nAs cartas empataram!");
        }
            break;

        case '3':
        puts("\nComparacao de PIB");
        if (PIB_1 > PIB_2){
            printf("\nCarta 1 - %s: %.2f bilhoes de reais",n_pais_1,PIB_1);
            printf("\nCarta 2 - %s: %.2f bilhoes de reais",n_pais_2,PIB_2);
            puts("\nA primeira carta venceu!");
        } else if (PIB_1 < PIB_2){
            printf("\nCarta 1 - %s: %.2f bilhoes de reais",n_pais_1,PIB_1);
            printf("\nCarta 2 - %s: %.2f bilhoes de reais",n_pais_2,PIB_2);
            puts("\nA segunda carta venceu!");
        } else {
            printf("\nCarta 1 - %s: %.2f bilhoes de reais",n_pais_1,PIB_1);
            printf("\nCarta 2 - %s: %.2f bilhoes de reais",n_pais_2,PIB_2);
            puts("\nAs cartas empataram!");
        }
            break;

        case '4':
        puts("\nComparacao de Numero de Pontos Turisticos");
        if (n_turismo_1 > n_turismo_2){
            printf("\nCarta 1 - %s: %d",n_pais_1,n_turismo_1);
            printf("\nCarta 2 - %s: %d",n_pais_2,n_turismo_2);
            puts("\nA primeira carta venceu!");
        } else if (n_turismo_1 < n_turismo_2){
            printf("\nCarta 1 - %s: %d",n_pais_1,n_turismo_1);
            printf("\nCarta 2 - %s: %d",n_pais_2,n_turismo_2);
            puts("\nA segunda carta venceu!");
        } else {
            printf("\nCarta 1 - %s: %d",n_pais_1,n_turismo_1);
            printf("\nCarta 2 - %s: %d",n_pais_2,n_turismo_2);
            puts("\nAs cartas empataram!");
        }
            break;

        case '5':
        puts("\nComparacao de Densidade Populacional");
        if (densidade_1 < densidade_2){
            printf("\nCarta 1 - %s: %.2f hab/km²",n_pais_1,densidade_1);
            printf("\nCarta 2 - %s: %.2f hab/km²",n_pais_2,densidade_2);
            puts("\nA primeira carta venceu!");
        } else if (densidade_1 > densidade_2){
            printf("\nCarta 1 - %s: %.2f hab/km²",n_pais_1,densidade_1);
            printf("\nCarta 2 - %s: %2.f hab/km²",n_pais_2,densidade_2);
            puts("\nA segunda carta venceu!");
        } else {
            printf("\nCarta 1 - %s: %.2f hab/km²",n_pais_1,densidade_1);
            printf("\nCarta 2 - %s: %.2f hab/km²",n_pais_2,densidade_2);
            puts("\nAs cartas empataram!");
        }
            break;

        case '6':
            return 0; //sai do programa

        default:
            puts("Opcao invalida!");
            break;
    }
    return 0;
}
