/*
fileName: super_trunfo.c
Autho: Denis Monteiro

Versão 1 - Objetivo: Criar um programa para ler os dados de 2 cartas para o jogo super Trunfo
Serão dados referentes a cidades e estados, sendo:
- Estado
- Código da carta
- Nome da cidade
- População
- Área (mk2)
- PIB
- Número de pontos turísticos

*/

#include <stdio.h>


int main () {

    // Variaveis para a cidade 1
    char estado1[2] = "Y", codigoCarta1[3] = "01", nomeCidade1[50] = "Nome da cidade 1";
    int populacao1 = 0, pontosTuristicos1 = 0;
    float area1 = 0.0, pib1 = 0.0;

    // Variaveis para a cidade 2
    char estado2[2] = "Z", codigoCarta2[3] = "01", nomeCidade2[50] = "Nome da cidade 2";
    int populacao2 = 1, pontosTuristicos2 = 1;
    float area2 = 1.0, pib2 = 1.0;

    printf ("---------------- JOGO SUPER TRUNFO (Nivel basico) ----------------\n\n");
    printf ("Entre com os dados para 2 cartas\n");

    // Capturando dados da carta 1
    printf ("Carta 1\n");

    // Estado
    printf ("Digite o estado:\n");
    scanf ("%s", estado1);
    printf ("\n");

    // Codigo da carta
    printf ("Digite o codigo da carta:\n");
    scanf ("%s", codigoCarta1);
    printf ("\n");

    // Cidade
    printf ("Digite o nome da cidade:\n");
    scanf ("%s", nomeCidade1);
    printf ("\n");

    // Populacao
    printf ("Digite a populacao da cidade:\n");
    scanf ("%d", &populacao1);
    printf ("\n");

    // Area
    printf ("Digite a area da cidade:\n");
    scanf ("%f", &area1);
    printf ("\n");

    // PIB
    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib1);
    printf ("\n");

    // Pontos turisticos
    printf ("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf ("%d", &pontosTuristicos1);
    printf ("\n");


    // Capturando dados da carta 2
    printf ("Carta 2\n");

    // Estado
    printf ("Digite o estado:\n");
    scanf ("%s", estado2);
    printf ("\n");

    // Codigo da carta
    printf ("Digite o codigo da carta:\n");
    scanf ("%s", codigoCarta2);
    printf ("\n");

    // Cidade
    printf ("Digite o nome da cidade:\n");
    scanf ("%s", nomeCidade2);
    printf ("\n");

    // Populacao
    printf ("Digite a populacao da cidade:\n");
    scanf ("%d", &populacao2);
    printf ("\n");

    // Area
    printf ("Digite a area da cidade:\n");
    scanf ("%f", &area2);
    printf ("\n");

    // PIB
    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib2);
    printf ("\n");

    // Pontos turisticos
    printf ("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf ("%d", &pontosTuristicos2);
    printf ("\n");


    // Impressão dos dados da carta 1
    printf ("=============Dados da carta 1 ================\n");
    printf ("Estado: %s\n", estado1);
    printf ("Codigo da carta: %s%s\n", estado1, codigoCarta1);
    printf ("Nome da cidade: %s\n", nomeCidade1);
    printf ("Populacao: %d\n", populacao1);
    printf ("Area (km2): %.2f\n", area1);
    printf ("PIB:  R$ %.2f bilhoes\n", pib1);
    printf ("Pontos turisticos: %d\n", pontosTuristicos1);

    // Impressão dos dados da carta 2
    printf ("\n=============Dados da carta 2 ================\n");
    printf ("Estado: %s\n", estado2);
    printf ("Codigo da carta: %s%s\n", estado2, codigoCarta2);
    printf ("Nome da cidade: %s\n", nomeCidade2);
    printf ("Populacao: %d\n", populacao2);
    printf ("Area (km2): %.2f\n", area2);
    printf ("PIB:  R$ %.2f bilhoes\n", pib2);
    printf ("Pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}