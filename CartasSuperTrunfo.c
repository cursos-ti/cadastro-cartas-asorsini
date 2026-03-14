#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
  char estado1, estado2;
  char codcarta1[4], codcarta2[4];
  char cidade1[10], cidade2[10];
  float populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosturisticos1, pontosturisticos2;

  // Área para entrada de dados

  // Carta 1
  printf("Digite os dados da primeira carta:\n");
    printf("Digite o código do estado da carta 1: ");
      scanf("%s", estado1);    
    printf("Digite o código da carta: ");
      scanf("%s", codcarta1);
    printf("Digite a cidade: ");
      scanf("%s", cidade1);
    printf("Digite a população: ");
      scanf("%f", &populacao1);
    printf("Digite a áres em KM² :");
      scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
      scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosturisticos1);

  // Carta 2
    printf("Digite os dados da segunda carta:\n");
    printf("Digite o código do estado da carta: ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
      scanf("%s", codcarta2);
    printf("Digite a cidade: ");
      scanf("%s", cidade2);
    printf("Digite a população: ");
      scanf("%f", &populacao2);
    printf("Digite a áres em KM² :");
      scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
      scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosturisticos2);
      
  // Área para exibição dos dados da cidade

    printf("O Código do estado 1 é: %d\n"), estado1; 
return 0;
} 


