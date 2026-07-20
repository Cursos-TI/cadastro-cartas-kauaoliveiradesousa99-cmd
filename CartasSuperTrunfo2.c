#include <stdio.h>
#include <string.h>
//Resolvi adicionar logo essa biblioteca para 

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    // Usei 'char' simples para o Estado e Arrays de 'char' para strings maiores.
    // Usei 'int' para números inteiros (População) e 'float' para números com decimais.
    // Nada muito diferente do tema 1. A não ser o fator que agora as variaveis tem valores fixos que antes eram usados os Scanf


  char Estado1 = 'C', Estado2 = 'A';  
  char Cod_Cidade1[50] = "C01", Cod_Cidade2[50] = "A01"; 
  char Nome_cidade1[50] = "Fortaleza", Nome_cidade2[50] = "Maceió";
  int Populacao1 = 2578483, Populacao2 = 957916;
  // Um nova variavel colocada no nivel aventureiro para o Switch funcionar direito
  int Opçao;
  float Area1 = 312.353 , Area2 = 509.295;
  float PIB1 = 86930000000 , PIB2 = 33750000000;
  int Pontos_Turisticos1 = 10, Pontos_Turisticos2 = 8;
  float densidade1, densidade2;
  float PIBpC1, PIBpC2;
  float Super_Poder1, Super_Poder2;
    

    // Área da Carta 1
    //É aqui que mais achei estranho, já que não precisei de printfs e scanfs juntos
printf("========================================= \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("==               CARTA 1               == \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("========================================= \n\n");


densidade1 = (float)  Populacao1/ Area1;
PIBpC1 = (float) PIB1 / Populacao1;
Super_Poder1 = (float) Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + PIBpC1 + (1.0f  / densidade1);


    printf ("O Estado é: %c  \n", Estado1);

    printf ("O Código da Cidade é: %s  \n", Cod_Cidade1);
    
    printf("O Nome da Cidade é: %s  \n", Nome_cidade1);

    printf("A população é: %d de pessoas \n", Populacao1);
// Nas informações da Área e do PIB eu coloquei indicadores após os "%"
    printf("A Área da Cidade é: %f Km²  \n", Area1);

    printf("O PIB da Cidade é: %f Reais  \n", PIB1);

    printf("Os Pontos Tristicos são: %d  \n", Pontos_Turisticos1);

    printf("Densiddade populacional: %.1f hab/km ²\n", densidade1);

     printf("O PIB per Capita: %.1f reais\n", PIBpC1);

     printf("O Super Poder da cidade é: %.2f\n", Super_Poder1);


densidade1 = (float)  Populacao1/ Area1;
PIBpC1 = (float) PIB1 / Populacao1;
Super_Poder1 = (float) Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + PIBpC1 + (1.0f  / densidade1);



// Área da Carta 2

printf("========================================= \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("==               CARTA 2               == \n");
printf("==                                     == \n");
printf("==                                     == \n");
printf("========================================= \n\n");

densidade2 = (float) Populacao2/ Area2;
PIBpC2 = (float) PIB2 / Populacao2;
Super_Poder2 = (float) Populacao2 + Area2 + PIB2 + Pontos_Turisticos2+ PIBpC2+ (1.0f  / densidade2);


    printf ("O Estado é: %c  \n", Estado2);

    printf ("O Código da Cidade é: %s  \n", Cod_Cidade2);
    
    printf("O Nome da Cidade é: %s  \n", Nome_cidade2);

    printf("A população é: %d de pessoas \n", Populacao2);

    printf("A Área da Cidade é: %f Km² \n", Area2);

    printf("O PIB da Cidade é: %f Reais \n", PIB2);

    printf("Os Pontos Tristicos são: %d  \n", Pontos_Turisticos2);

    printf("Densiddade populacional: %.1f hab/km² \n", densidade2);

    printf("O PIB per Capita: %.1f reais \n", PIBpC2);

    printf("O Super Poder da cidade é: %.2f\n", Super_Poder2);

    //Menu de opções colocado

        printf("========================================= \n");
        printf("==                                     == \n");
        printf("==                                     == \n");
        printf("==          ESCOLHA UMA OPCÃO:         == \n");
        printf("==                                     == \n");
        printf("==                                     == \n");
        printf("========================================= \n\n");


printf("============================== \n");
printf("==       1:População        == \n");
printf("============================== \n\n");

printf("============================== \n");
printf("==          2:Area          == \n");
printf("============================== \n\n");

printf("============================== \n");
printf("=           3:PIB           == \n");
printf("=============================== \n\n");

printf("============================== \n");
printf("=    4:Pontos Turisticos    == \n");
printf("============================== \n\n");

printf("============================== \n");
printf("=        5:Densidade        == \n");
printf("============================== \n\n");
  
printf("============================== \n");
printf("=     6:PIB Per Capita      == \n");
printf("============================== \n\n");
  
printf("============================== \n");
printf("=       7:Super Poder       == \n");
printf("============================== \n\n");

printf("Escolha: \n");
scanf("%d", &Opçao);

  
switch (Opçao)
{
case 1:
    printf("Atributo escolhido: População \n");
    printf("%s:, %d habitantes \n\n", Nome_cidade1, Populacao1);
    printf("%s:, %d habitantes \n\n", Nome_cidade2, Populacao2);

if (Populacao1 > Populacao2) {
printf("============================== \n");
printf("=    A CARTA 1 VENCE!!!     == \n");
printf("============================== \n\n");
} else if (Populacao2 > Populacao1)  {
printf("============================== \n");
printf("=    A CARTA 2 VENCE!!!     == \n");
printf("============================== \n\n");
}else {
printf("============================== \n");
printf("=           EMPATE          == \n");
printf("============================== \n\n");
}
    break;
case 2:
    printf("Atributo escolhido: Area \n");
    printf("%s:, %2.f km² \n", Nome_cidade1, Area1);
    printf("%s:, %2.f km² \n", Nome_cidade1, Area2);

     if (Area1 > Area2) {
printf("============================== \n");
printf("=    A CARTA 1 VENCE!!!     == \n");
printf("============================== \n\n");
} else if (Area2 > Area1)  {
printf("============================== \n");
printf("=    A CARTA 2 VENCE!!!     == \n");
printf("============================== \n\n");
}else {
printf("============================== \n");
printf("=           EMPATE          == \n");
printf("============================== \n\n");
}
    break;
case 3:
    printf("Atributo escolhido: PIB \n");
    printf("%s:, R$ %1.f reais \n\n", Nome_cidade1, PIB1);
    printf("%s:, R$ %1.f reais \n\n", Nome_cidade2, PIB2);

if (PIB1 > PIB2) {
printf("============================== \n");
printf("=    A CARTA 1 VENCE!!!     == \n");
printf("============================== \n\n");
} else if (PIB2 > PIB1)  {
printf("============================== \n");
printf("=    A CARTA 2 VENCE!!!     == \n");
printf("============================== \n\n");
}else {
printf("============================== \n");
printf("=           EMPATE          == \n");
printf("============================== \n\n");
}
    break;
case 4:
    printf("Atributo escolhido: Pontos Turisticos \n");
    printf("%s:, %d \n\n", Nome_cidade1, Pontos_Turisticos1);
    printf("%s:, %d \n\n", Nome_cidade2, Pontos_Turisticos2);

if (Pontos_Turisticos1 > Pontos_Turisticos2) {
printf("============================== \n");
printf("=    A CARTA 1 VENCE!!!     == \n");
printf("============================== \n\n");
} else if (Pontos_Turisticos2 > Pontos_Turisticos1)  {
printf("============================== \n");
printf("=    A CARTA 2 VENCE!!!     == \n");
printf("============================== \n\n");
}else {
printf("============================== \n");
printf("=           EMPATE          == \n");
printf("============================== \n\n");
}
    break;
case 5:
    printf("Atributo escolhido: Densidade \n");
    printf("%s:, %1.f hab/km²  \n\n", Nome_cidade1, densidade1);
    printf("%s:, %1.f hab/km²  \n\n", Nome_cidade2, densidade2);

if (densidade1 < densidade2) {
printf("============================== \n");
printf("=    A CARTA 1 VENCE!!!     == \n");
printf("============================== \n\n");
} else if (densidade2 < densidade1)  {
printf("============================== \n");
printf("=    A CARTA 2 VENCE!!!     == \n");
printf("============================== \n\n");
}else {
printf("============================== \n");
printf("=           EMPATE          == \n");
printf("============================== \n\n");
}
    break;
case 6:
    printf("Atributo escolhido: PIB Per Capita \n");
    printf("%s:, R$ %.1f Reais\n\n", Nome_cidade1, PIBpC1);
    printf("%s:, R$ %.1f Reais \n\n", Nome_cidade2, PIBpC2);

if (PIBpC1 > PIBpC2) {
printf("============================== \n");
printf("=    A CARTA 1 VENCE!!!     == \n");
printf("============================== \n\n");
} else if (PIBpC2 > PIBpC1)  {
printf("============================== \n");
printf("=    A CARTA 2 VENCE!!!     == \n");
printf("============================== \n\n");
}else {
printf("============================== \n");
printf("=           EMPATE          == \n");
printf("============================== \n\n");
}
    break;
case 7:
   printf("Atributo escolhido: Super Poder \n");
    printf("%s:, %.2f \n\n", Nome_cidade1, Super_Poder1);
    printf("%s:, %.2f \n\n", Nome_cidade2, Super_Poder2);

if (Super_Poder1 > Super_Poder2) {
printf("============================== \n");
printf("=    A CARTA 1 VENCE!!!     == \n");
printf("============================== \n\n");
} else if (Super_Poder2 > Super_Poder1)  {
printf("============================== \n");
printf("=    A CARTA 2 VENCE!!!     == \n");
printf("============================== \n\n");
}else {
printf("============================== \n");
printf("=           EMPATE          == \n");
printf("============================== \n\n");
}
    break;
default:printf("OPÇÃO INVALIDA!! \n");
    break;
}
  


    


return 0;
}
