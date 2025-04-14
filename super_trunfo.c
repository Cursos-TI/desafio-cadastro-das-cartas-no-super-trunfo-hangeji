#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Cadastro Carta 1:
    char Estado; //estado: A
    char CodigoCarta[30]; //codigo carta:A01
    char Cidade[30]; //cidade: Aracaju
    unsigned long int Populacao;//populacao:602.757
    float Areakm2;//area: 182,163
    float PIB;//pib: 16.447 bilhoes
    int PontosTuristicos; //pontos turisticos: 32
    float Densidadepopulacional; // Populacao/Areakm2
    float PIBpercapita; // PIB/Populacao
    float SuperPoder; //soma de todos os atributos numericos (1 / densidade populacional)
    
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
    scanf("%lu", &Populacao);

    //Solicita ao usuario que insira a area do local escolhido em km² da primeira carta
    printf("Area em km²: \n");
    scanf("%f", &Areakm2);

    //Solicita ao usuario que insira o PIB do local escolhido da primeira carta
    printf("PIB: \n");
    scanf("%f", &PIB);

    //Solicita ao usuario que insira o numero de pontos turisticos do local escolhido da primeira carta
    printf("Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    //Operação aritmetica realizada para calcular a densidade populacional da primeira carta
    Densidadepopulacional = Populacao / Areakm2;

    //Operação aritmetica realizada para calcular o PIB per Capita da primeira carta
    PIBpercapita = (PIB * 1000000000) / Populacao;


    //Calculo Super Poder Carta 1

    SuperPoder = (float) Populacao + Areakm2 + PIB + (float) PontosTuristicos + PIBpercapita + (1/Densidadepopulacional);
   

    //Impressão da sinformações colocadas pelo usuario
    printf("*** Cadastro Carta 1 ***\n");
    printf("Estado Carta 1: %c\n", Estado);
    printf("Codigo da Carta 1: %s\n", CodigoCarta);
    printf("Nome da Cidade Carta 1: %s\n", Cidade);
    printf("População Carta 1: %lu\n", Populacao);
    printf("Area em km² Carta 1: %.2f km²\n", Areakm2);
    printf("PIB Carta 1: %.3f bilhões de reais\n", PIB);
    printf("Pontos Turisticos Carta 1: %d\n", PontosTuristicos);
    printf("Densidade Populacional Carta 1: %.2f hab/km²\n", Densidadepopulacional);
    printf("PIB per capita Carta 1: %.2f reais\n", PIBpercapita);
    printf("O valor do Super Poder é: %f\n", SuperPoder);

    //-------------------------------------------------------------

    // Cadastro Carta 2:
    char estado; //estado:B
    char codigoCarta[30]; //codigo carta:B01
    char cidade[30]; // cidade:Recife
    unsigned long int populacao; //população:1.488.920
    float areakm2; //area:218,843
    float pib; // pib:54.970 milhões
    int pontosTuristicos; //pontos turisticos:50
    float densidadepopulacional; // populacao/areakm2
    float pibpercapita; // pib/populacao
    float superpoder; //soma de todos os atributos numericos (1 / densidade populacional)
    
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
    scanf("%lu", &populacao);

    //Solicita ao usuario que insira a area do local escolhido em km² da segunda carta
    printf("Area em km²: \n");
    scanf("%f", &areakm2);

    //Solicita ao usuario que insira o PIB do local escolhido da segunda carta
    printf("PIB: \n");
    scanf("%f", &pib);

    //Solicita ao usuario que insira o numero de pontos turisticos do local escolhido da segunda carta
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos);

     //Operação aritmetica realizada para calcular a densidade populacional da primeira carta
  
     densidadepopulacional = populacao / areakm2;

 
     //Operação aritmetica realizada para calcular o PIB per Capita da primeira carta
    
    pibpercapita = (pib * 1000000) / populacao;

    //Calculo Super Poder Carta 1

    superpoder = (float) populacao + areakm2 + pib +(float) pontosTuristicos + pibpercapita + (1/densidadepopulacional);

    //Solicita que o usuario coloque as informações necessarias da segunda carta
    printf("*** Cadastro Carta 2 ***\n");
    printf("Estado Carta 2: %c\n", estado);
    printf("Codigo da Carta 2: %s\n", codigoCarta);
    printf("Nome da Cidade Carta 2: %s\n", cidade);
    printf("População Carta 2: %lu\n", populacao);
    printf("Area em km² Carta 2: %.2f km²\n", areakm2);
    printf("PIB Carta 2: %.3f milhões de reais\n", pib);
    printf("Pontos Turisticos Carta 2: %d\n", pontosTuristicos);
    printf("Densidade Populacional Carta 2: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB per capita Carta 2: %.2f reais\n", pibpercapita);
    printf("O valor do Super Poder é: %f\n", superpoder);

    //Comparação entre as cartas 1 e 2

    printf("COMPARAÇÃO ENTRE A CARTA 1 E CARTA 2\n");

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTuristicos;
    int resultadoresuDensidadePopulacional;
    int resultadoPIBperCapita;
    int resultadoSuperPoder;

    resultadoPopulacao = Populacao > populacao;
    printf("Comparação População: %d\n", Populacao > populacao);

    resultadoArea = Areakm2 > areakm2;
    printf("Comparação Area em km²: %d\n", Areakm2 > areakm2);

    resultadoPIB = PIB > pib;
    printf("Comparação PIB: %d\n", PIB > pib);

    resultadoPontosTuristicos = PontosTuristicos > pontosTuristicos;
    printf("Comparação Pontos Turisticos: %d\n", PontosTuristicos > pontosTuristicos);

    resultadoresuDensidadePopulacional = Densidadepopulacional < densidadepopulacional;
    printf("Comparação Densidade Populacional: %d\n", Densidadepopulacional < densidadepopulacional);

    resultadoPIBperCapita = PIBpercapita > pibpercapita;
    printf("Comparação PIB per Capiata: %d\n", PIBpercapita > pibpercapita);

    resultadoSuperPoder = SuperPoder > superpoder;
    printf("Comparação Super Poderes: %d\n", SuperPoder > superpoder);

    return 0;
}