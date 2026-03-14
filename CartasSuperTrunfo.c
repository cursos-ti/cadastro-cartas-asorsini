#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
  char estado1[1], estado2[1];
  char codcarta1[3], codcarta2[3];
  char cidade1[10], cidade2[10];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosturisticos1, pontosturisticos2;

  // Área para entrada de dados

    printf("Digite o código do estado da carta1: ");
      scanf("%char", estado1);
    printf("Digite o código da carta: ");
      scanf("%char", codcarta1);
    printf("Digite a cidade: ");
      scanf("%char", cidade1);
    printf("Digite a população: ");
      scanf("%d", populacao1);
    printf("Digite a áres em KM² :");
      scanf("%.2f", area1);
    printf("Digite o PIB da cidade: ");
      scanf("%.2f, pib1");
    printf("Digite o número de pontos turísticos: ");
      scanf("%d, pontosturisticos1");
      

  // Área para exibição dos dados da cidade

return 0;
} 
