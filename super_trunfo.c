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
    
    //Solicita ao usuario que insira o nome do Estado
    printf("Estado: \n");
    scanf(" %c", &Estado);

    //Solicita ao usuario que insira o codigo da carta
    printf("Codigo da Carta: \n");
    scanf("%s", CodigoCarta);

    //Solicita ao usuario que insira o nome da cidade do estado escolhido
    printf("Nome da Cidade: \n");
    scanf("%s", Cidade);

    //Solicita ao usuario que insira a quantidade da população do local escolhido
    printf("População: \n");
    scanf("%d", &Populacao);

    //Solicita ao usuario que insira a area do local escolhido em km²
    printf("Area em km²: \n");
    scanf("%f", &Areakm2);

    //Solicita ao usuario que insira o PIB do local escolhido
    printf("PIB: \n");
    scanf("%f", &PIB);

    //Solicita ao usuario que insira o numero de pontos turisticos do local escolhido
    printf("Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    //Solicita que o usuario coloque as informações necessarias
    printf("Carta 1: \n");
    printf("Estado: %c\n", Estado);
    printf("Codigo da Carta: %s\n", CodigoCarta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Area em km²: %f\n", Areakm2);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);



    return 0;
}