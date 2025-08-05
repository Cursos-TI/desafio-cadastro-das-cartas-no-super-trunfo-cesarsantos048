#include <stdio.h>

float Calcular(float dividendo, float divisor);
int main() {
    // Carta 1
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeCidadeCarta1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosturisticosCarta1;
    float densidadePopulacionalCarta1;

    // Carta 2
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeCidadeCarta2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosturisticosCarta2;
    float densidadePopulacionalCarta2;

    //Inicio de cadastro da carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estadoCarta1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidadeCarta1);

    printf("Informe a População: ");
    scanf("%d", &populacaoCarta1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &areaCarta1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pibCarta1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticosCarta1);

    //Inicio de cadastro da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estadoCarta2);

    printf("Informe o Código da Carta (ex: B03): ");
    scanf("%s", codigoCarta2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidadeCarta2);

    printf("Informe a População: ");
    scanf("%d", &populacaoCarta2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &areaCarta2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pibCarta2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticosCarta2);

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticosCarta1);
    printf("Densidade Populacional cidade 1: %.2f\n", Calcular(populacaoCarta1, areaCarta1));
    printf("PIB per Capita cidade 1: %.2f\n", Calcular(pibCarta1, populacaoCarta1));

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticosCarta2);
    printf("Densidade Populacional ciade 2: %.2f\n", Calcular(populacaoCarta2, areaCarta2));
    printf("PIB per Capita cidade 2: %.2f\n", Calcular(pibCarta2, populacaoCarta2));
    return 0;
}

float Calcular(float dividendo, float divisor){
    return dividendo / divisor;
}