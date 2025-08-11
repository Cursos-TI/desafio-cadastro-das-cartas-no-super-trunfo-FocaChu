#include <stdio.h>
 
int main() {
    
    //váriaveis que armazenam as informações das cartas

    //letra que representa o Estado da cidade
    char estadoCarta1;
    char estadoCarta2;

    //o código da carta
    char codigoCarta1[4];
    char codigoCarta2[4];

    //o nome da cidade
    char nomeCidadeCarta1[30];
    char nomeCidadeCarta2[30];

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

    //densidade populacional(população dividida pela área)
    float densidadePopulacionalCarta1;
    float densidadePopulacionalCarta2;

    //PIB per capita (PIB dividido pela população)
    float pibPerCapitaCarta1;
    float pibPerCapitaCarta2;

    //Limpar o buffer inicial
    int c;

    //Entrada dos dados da carta 1
    printf("\nDigite a letra que representa o Estado da carta 1: \n");
    scanf(" %c", &estadoCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer
    
    printf("Digite o código da carta 1 (somente 3 digitos): \n");
    scanf("%3s", codigoCarta1); 
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %29[^\n]", nomeCidadeCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a população da cidade da carta 1: \n");
    scanf("%d", &populacaoCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a área da cidade da carta 1 (em km²): \n");
    scanf("%f", &areaKmqCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pibCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a quantidade de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &qtdPontosTuristicosCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    //calcula o restante das informações
    densidadePopulacionalCarta1 = (float) populacaoCarta1 / areaKmqCarta1;
    pibPerCapitaCarta1 = (float) (pibCarta1 * 1000000000.0f) / populacaoCarta1;


    //Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaKmqCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacionalCarta1);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta1);

    //Entrada dos dados da carta 2
    printf("\nDigite a letra que representa o Estado da carta 2: \n");
    scanf(" %c", &estadoCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o código da carta 2 (somente 3 digitos): \n");
    scanf("%3s", codigoCarta2); 
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %29[^\n]", nomeCidadeCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a população da cidade da carta 2: \n");
    scanf("%d", &populacaoCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a área da cidade da carta 2 (em km²): \n");
    scanf("%f", &areaKmqCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pibCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a quantidade de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &qtdPontosTuristicosCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    //calcula o restante das informações
    densidadePopulacionalCarta2 = (float) populacaoCarta2 / areaKmqCarta2;
    pibPerCapitaCarta2 = (float) (pibCarta2 * 1000000000.0f) / populacaoCarta2;

    //Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaKmqCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacionalCarta2);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta2);

    return 0;
}