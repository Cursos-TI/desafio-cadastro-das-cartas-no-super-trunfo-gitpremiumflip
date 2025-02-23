#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char inicialestado1, inicialestado2;
    char idcard01[4], idcard02[4];
    char idcidade01[50], idcidade02[50];
    int popestado01, popestado02;
    float areakm01, areakm02;
    float pibest01, pibest02;
    int pontur01, pontur02;
     
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
// Entrada da primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &inicialestado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", idcard01);

    getchar();  // Limpa o buffer do '\n'
    printf("Nome da Cidade: ");
    fgets(idcidade01, sizeof(idcidade01), stdin);

    printf("Populacao: ");
    scanf(" %d", &popestado01);
    printf("Area (em km^2): ");
    scanf(" %f", &areakm01);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pibest01);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontur01);

// Entrada da segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &inicialestado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf(" %3s", idcard02);

    getchar();  // Limpa o buffer do '\n'
    printf("Nome da Cidade: ");
    fgets(idcidade02, sizeof(idcidade02), stdin);

    printf("Populacao: ");
    scanf(" %d", &popestado02);
    printf("Area (em km^2): ");
    scanf(" %f", &areakm02);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pibest02);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontur02);

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", inicialestado1);
    printf("Codigo: %s\n", idcard01);
    printf("Nome da Cidade: %s", idcidade01);
    printf("Populacao: %d\n", popestado01);
    printf("Area: %.2f km^2\n", areakm01);
    printf("PIB: %.2f bilhoes de reais\n", pibest01);
    printf("Numero de Pontos Turisticos: %d\n", pontur01);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", inicialestado2);
    printf("Codigo: %s\n", idcard02);
    printf("Nome da Cidade: %s", idcidade02);
    printf("Populacao: %d\n", popestado02);
    printf("Area: %.2f km^2\n", areakm02);
    printf("PIB: %.2f bilhoes de reais\n", pibest02);
    printf("Numero de Pontos Turisticos: %d\n", pontur02);
 
    return 0;
}
