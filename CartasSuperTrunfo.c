#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variaveis que estarão em todas as cartas.
  // Coloquei as variaveis das duas cartas juntas para melhor entendimento

  char Estado1,  Estado2;
  char Cod_Cidade1 [50], Cod_Cidade2 [50]; 
  char Nome_cidade1 [50], Nome_cidade2[50];
  int Populacao1, Populacao2;
  float Area1, Area2;
  float PIB1, PIB2;
  int Pontos_Turisticos1, Pontos_Turisticos2;
  float densidade1, densidade2;
  float PIBpC1, PIBpC2;

  // Área para entrada de dados
  // Área da Carta 1
  printf("\n=============================================\n");
  printf("               Informações da Carta 1\n");
  printf("\n============================================\n");

printf ("Digite o Estado:  \n");
scanf (" %c", &Estado1);

printf ("Digite o Código da Cidade:  \n");
scanf (" %s", Cod_Cidade1);

printf ("Digite o Nome da Cidade:  \n");
scanf ("%s", Nome_cidade1);

printf ("Digite a População:  \n");
scanf ("%d", &Populacao1);

printf ("Digite a Área da Cidade:  \n");
scanf ("%f", &Area1);

printf ("Digite o PIB da cidade:  \n");
scanf ("%f", &PIB1);

printf ("Digite os Pontos Turisticos:  \n");
scanf ("%d", &Pontos_Turisticos1);

densidade1 = (float) PIB1 / Area1;
PIBpC1 = (float) PIB1 / Populacao1;

//  Área da Carta 2

  printf("\n=============================================\n");
  printf("               Informações da Carta 2\n");
  printf("\n============================================\n");

printf ("Digite o Estado:  \n");
scanf (" %c", &Estado2);

printf ("Digite o Código da Cidade  \n");
scanf ("%s", Cod_Cidade2);

printf ("Digite o Nome da Cidade:  \n");
scanf ("%s", Nome_cidade2);

printf ("Digite a População:  \n");
scanf ("%d", &Populacao2);

printf ("Digite a Área da Cidade:  \n");
scanf ("%f", &Area2);

printf ("Digite o PIB da cidade:  \n");
scanf ("%f", &PIB2);

printf ("Digite os Pontos Turisticos:  \n");
scanf ("%d", &Pontos_Turisticos2);

densidade2 = (float) PIB2 / Area2;
PIBpC2 = (float) PIB2 / Populacao2;

// Área para exibição dos dados da cidade
// Exibição dos dados da cidade 1
  printf("\n===============================\n");
  printf("               Carta 1\n");
  printf("\n===============================\n");
// Acrecentei essa parte para separar as informações das duas cartas.

    printf ("O Estado é: %c  \n", Estado1);

    printf ("O Código da Cidade é: %s  \n", Cod_Cidade1);
    
    printf("O Nome da Cidade é: %s  \n", Nome_cidade1);

    printf("A população é: %d  \n", Populacao1);
// Nas informações da Área e do PIB eu coloquei indicadores após os "%"
    printf("A Área da Cidade é: %f Km²  \n", Area1);

    printf("O PIB da Cidade é: %f Reais  \n", PIB1);

    printf("Os Pontos Tristicos são: %d  \n", Pontos_Turisticos1);

    printf("Densiddade populacional: %.1f\n hab/km²", densidade1);

     printf("O PIB per Capita: %.1f\n reais", PIBpC1);

    // Exibição dos dados da Cidade 2
  printf("\n===============================\n");
  printf("               Carta 2\n");
  printf("\n===============================\n");

  
    printf ("O Estado é: %c  \n", Estado2);

    printf ("O Código da Cidade é: %s  \n", Cod_Cidade2);
    
    printf("O Nome da Cidade é: %s  \n", Nome_cidade2);

    printf("A população é: %d  \n", Populacao2);

    printf("A Área da Cidade é: %f Km² \n", Area2);

    printf("O PIB da Cidade é: %f Reais \n", PIB2);

    printf("Os Pontos Tristicos são: %d  \n", Pontos_Turisticos2);

    printf("O PIB per Capita: %.1f\n reais", PIBpC2);

return 0;
} 
