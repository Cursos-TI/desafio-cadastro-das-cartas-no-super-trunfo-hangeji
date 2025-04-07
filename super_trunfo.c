#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Cadastro Carta 1:
    char Estado;
    char CodigoCarta[30];
    char Cidade[30];
    int Populacao;
    float Areakm2;
    float PIB;
    int PontosTuristicos;
    
    //Solicita ao usuario que insira o nome do Estado da primeira carta
    printf("Estado: \n");
    scanf(" %c", &Estado);

    //Solicita ao usuario que insira o codigo da primeira carta
    printf("Codigo da Carta: \n");
    scanf("%s", CodigoCarta);

    //Solicita ao usuario que insira o nome da cidade do estado escolhido da primeira carta
    printf("Nome da Cidade: \n");
    scanf("%s", Cidade);

    //Solicita ao usuario que insira a quantidade da população do local escolhido da primeira carta
    printf("População: \n");
    scanf("%d", &Populacao);

    //Solicita ao usuario que insira a area do local escolhido em km² da primeira carta
    printf("Area em km²: \n");
    scanf("%f", &Areakm2);

    //Solicita ao usuario que insira o PIB do local escolhido da primeira carta
    printf("PIB: \n");
    scanf("%f", &PIB);

    //Solicita ao usuario que insira o numero de pontos turisticos do local escolhido da primeira carta
    printf("Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    //Solicita que o usuario coloque as informações necessarias da primeira carta
    printf("Carta 1: \n");
    printf("Estado Carta 1: %c\n", Estado);
    printf("Codigo da Carta 1: %s\n", CodigoCarta);
    printf("Nome da Cidade Carta 1: %s\n", Cidade);
    printf("População Carta 1: %d\n", Populacao);
    printf("Area em km² Carta 1: %f\n", Areakm2);
    printf("PIB Carta 1: %f\n", PIB);
    printf("Pontos Turisticos Carta 1: %d\n", PontosTuristicos);


    // Cadastro Carta 2:
    char estado;
    char codigoCarta[30];
    char cidade[30];
    int populacao;
    float areakm2;
    float pib;
    int pontosTuristicos;
    
    //Solicita ao usuario que insira o nome do Estado da segunda carta
    printf("Estado: \n");
    scanf(" %c", &estado);

    //Solicita ao usuario que insira o codigo da segunda carta
    printf("Codigo da Carta: \n");
    scanf("%s", codigoCarta);

    //Solicita ao usuario que insira o nome da cidade do estado escolhido da segunda carta
    printf("Nome da Cidade: \n");
    scanf("%s", cidade);

    //Solicita ao usuario que insira a quantidade da população do local escolhido da segunda carta
    printf("População: \n");
    scanf("%d", &populacao);

    //Solicita ao usuario que insira a area do local escolhido em km² da segunda carta
    printf("Area em km²: \n");
    scanf("%f", &areakm2);

    //Solicita ao usuario que insira o PIB do local escolhido da segunda carta
    printf("PIB: \n");
    scanf("%f", &pib);

    //Solicita ao usuario que insira o numero de pontos turisticos do local escolhido da segunda carta
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos);

    //Solicita que o usuario coloque as informações necessarias da segunda carta
    printf("Carta 2: \n");
    printf("Estado Carta 2: %c\n", estado);
    printf("Codigo da Carta 2: %s\n", codigoCarta);
    printf("Nome da Cidade Carta 2: %s\n", cidade);
    printf("População Carta 2: %d\n", populacao);
    printf("Area em km² Carta 2: %f\n", areakm2);
    printf("PIB Carta 2: %f\n", pib);
    printf("Pontos Turisticos Carta 2: %d\n", pontosTuristicos);

    return 0;
}