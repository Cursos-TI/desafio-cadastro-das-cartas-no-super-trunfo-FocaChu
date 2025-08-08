#include <stdio.h>
 
int main() {
    
    //váriaveis que armazenam as informações das cartas

    //letra que representa o Estado da cidade
    char estadoCarta1;
    char estadoCarta2;

    //o código da carta
    char codigoCarta1[3];
    char codigoCarta2[3];

    //o nome da cidade
    char nomeCidadeCarta1[20];
    char nomeCidadeCarta2[20];

    //a população da cidade
    int populacaoCarta1;
    int populacaoCarta2;

    //a área da cidade em km²
    float areaKmqCarta1;
    float areaKmqCarta2;

    //o PIB da cidade
    float pibCarta1;
    float pibCarta2;

    //a quantidade de pontos turísticos da cidade
    int qtdPontosTuristicosCarta1;
    int qtdPontosTuristicosCarta2;

    //Entrada dos dados da carta 1
    printf("\nDigite a letra que representa o Estado da carta 1: \n");
    scanf(" %c", &estadoCarta1);
    
    printf("Digite o código da carta 1 (somente 3 digitos): \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", nomeCidadeCarta1);

    printf("Digite a população da cidade da carta 1: \n");
    scanf("%d", &populacaoCarta1);

    printf("Digite a área da cidade da carta 1 (em km²): \n");
    scanf("%f", &areaKmqCarta1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pibCarta1);

    printf("Digite a quantidade de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &qtdPontosTuristicosCarta1);

    //Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaKmqCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta1);

    //Entrada dos dados da carta 2
    printf("\nDigite a letra que representa o Estado da carta 2: \n");
    scanf(" %c", &estadoCarta2);

    printf("Digite o código da carta 2 (somente 3 digitos): \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", nomeCidadeCarta2);

    printf("Digite a população da cidade da carta 2: \n");
    scanf("%d", &populacaoCarta2);

    printf("Digite a área da cidade da carta 2 (em km²): \n");
    scanf("%f", &areaKmqCarta2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pibCarta2);

    printf("Digite a quantidade de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &qtdPontosTuristicosCarta2);

    //Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaKmqCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta2);

    return 0;
}