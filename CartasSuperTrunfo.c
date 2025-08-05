#include <stdio.h>

float Calcular(float dividendo, float divisor);
float DefinirSuperPoder(
    float populacao, 
    float area, 
    float pib, 
    float pontosTuristicos,
    float pibPerCapita,
    float densidadePopulacional);

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

    float pibPerCapitaCidade1 = Calcular(populacaoCarta1, (float)populacaoCarta1);
    float densidadePopulacionalCidade1 = Calcular(pibCarta1, populacaoCarta1);
    float superPoderCidade1 = DefinirSuperPoder(
        (float)populacaoCarta1,
        areaCarta1, 
        pibCarta1,
        (float)pontosturisticosCarta1,
        pibPerCapitaCidade1,
        densidadePopulacionalCidade1);


    float pibPerCapitaCidade2 = Calcular(populacaoCarta2, (float)populacaoCarta2);
    float densidadePopulacionalCidade2 = Calcular(pibCarta2, populacaoCarta2);
    float superPoderCidade2 = DefinirSuperPoder(
        (float)populacaoCarta2,
        areaCarta2, 
        pibCarta2,
        (float)pontosturisticosCarta2,
        pibPerCapitaCidade2,
        densidadePopulacionalCidade2);

int venceuPopulacao = populacaoCarta1 > populacaoCarta2;
int venceuArea = areaCarta1 > areaCarta2;
int venceuPib = pibCarta1 > pibCarta2;
int venceuPontosTuristicos = pontosturisticosCarta1 > pontosturisticosCarta2;
int venceuPibPerCapita = pibPerCapitaCidade1 > pibPerCapitaCidade2;
int venceuDensidade = densidadePopulacionalCidade1 < densidadePopulacionalCidade2; // menor vence
int venceuSuperPoder = superPoderCidade1 > superPoderCidade2;

printf("Comparação de Cartas:\n");
printf("População: Carta 1 venceu? %d\n", venceuPopulacao);
printf("Área: Carta 1 venceu? %d\n", venceuArea);
printf("PIB: Carta 1 venceu? %d\n", venceuPib);
printf("Pontos Turísticos: Carta 1 venceu? %d\n", venceuPontosTuristicos);
printf("PIB per capita: Carta 1 venceu? %d\n", venceuPibPerCapita);
printf("Densidade Populacional (menor vence): Carta 1 venceu? %d\n", venceuDensidade);
printf("Super Poder: Carta 1 venceu? %d\n", venceuSuperPoder);



    return 0;
}

float Calcular(float dividendo, float divisor){
    return dividendo / divisor;
}

float DefinirSuperPoder(
    float populacao, 
    float area, 
    float pib, 
    float pontosTuristicos,
    float pibPerCapita,
    float densidadePopulacional){
        float resultado = populacao 
        + area 
        + pib 
        + pontosTuristicos 
        + pibPerCapita 
        + (1 / densidadePopulacional);

    return resultado;
    }