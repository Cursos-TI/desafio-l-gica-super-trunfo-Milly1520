#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    // Jogo Super Trunfo com criação e comparação de duas cartas.

    char Estado[3];
    char CodigoDaCarta[4];
    char Cidade[40];
    int PontosTuristicos;
    int Populacao;
    float Area, PIB;

    // Solicitação das informações da carta 1 ao usuário

    printf ("*Criando as Cartas do Super Trunfo*\n");
    printf("\n");
    printf("Carta 1\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado);

    printf("Digite a cidade:\n");
    scanf(" %[^\n]s", Cidade);

    printf("Digite o codigo da carta:\n");
    scanf("%s", CodigoDaCarta);
    
    printf("Digite a populacao da cidade:\n");
    scanf("%d",  &Populacao);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &PontosTuristicos);
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a area (em km²):\n");
    scanf("%f", &Area);
 
    // Cálculo de densidade populacional e PIB per capita com base nas informações da carta 1

    float DensidadePopulacional = Populacao / Area;
    float PIBPerCapita = PIB / Populacao;
    
    // Declaração de variáveis carta 2

    char Estado2[3];
    char CodigoDaCarta2[4];
    char Cidade2[40];
    int PontosTuristicos2;
    int Populacao2;
    float Area2, PIB2;

    // Solicitação das informações da carta 2 ao usuário

    printf("\n");  
    printf("Carta 2\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado2);

    printf("Digite a cidade:\n");
    scanf(" %[^\n]s", Cidade2);

    printf("Digite o codigo da carta:\n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d",  &Populacao2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &PontosTuristicos2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Digite a area (em km²):\n");
    scanf("%f", &Area2);

    // Cálculo de densidade populacional e PIB per capita com base nas informações da carta 2

    float DensidadePopulacional2 =  Populacao2 / Area2;
    float PIBPerCapita2 = PIB2 / Populacao2;

    // Impressão das informações preenchidas pelo usuário referente a carta 1

    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("População: %d\n", Populacao);
    printf("Pontos turísticos: %d\n", PontosTuristicos);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Área: %.2f km²\n", Area);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita);


   // Impressão das informações preenchidas pelo usuário referente a carta 2

    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código da carta: %s\n", CodigoDaCarta2);
    printf("População: %d\n", Populacao2);
    printf("Pontos turísticos: %d\n", PontosTuristicos2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Área: %.2f km²\n", Area2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita2);
  

    // Escolha do atributo de comparação das cartas pelo usuário

    int atributoescolhido;

    printf("\n");
    printf("Escolha um atributo para comparação das cartas:\n");
    printf("\n");
    printf("1. População \n");
    printf("2. Pontos turísticos \n");
    printf("3. Área \n");
    printf("4. PIB \n");
    printf("5. Densidade demográfica \n");
    printf("5. Digite a opção: ");
    scanf("%d", &atributoescolhido);


/* Comparação das cartas com base no atributo escolhido pelo usuário.
   Exibição do resultado da comparação, podendo vencer a carta 1, 2 ou empatar.
   Caso não seja escolhida uma das 5 opções, será inválido.
*/
switch (atributoescolhido) 
{
case 1:
   if (Populacao > Populacao2) {
    printf("Comparação de cartas (Atributo: População): \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %d \n", Cidade, Estado, Populacao);
    printf("Carta 2 - %s (%s): %d \n", Cidade2, Estado2, Populacao2);
    printf("Resultado: Carta 1 (%s) venceu! \n", Cidade);
   } else if (Populacao < Populacao2)  {
    printf("Comparação de cartas (Atributo: População): \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %d \n", Cidade, Estado, Populacao);
    printf("Carta 2 - %s (%s): %d \n", Cidade2, Estado2, Populacao2);
    printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
   } else {
      printf("Resultado: Empate! ");
   }
break;

case 2:
  if (PontosTuristicos > PontosTuristicos2) {
    printf("Comparação de cartas (Atributo: Pontos Turísticos): \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %d \n", Cidade, Estado, PontosTuristicos);
    printf("Carta 2 - %s (%s): %d \n", Cidade2, Estado2, PontosTuristicos2);
    printf("Resultado: Carta 1 (%s) venceu! \n", Cidade);
 } else if (PontosTuristicos < PontosTuristicos2)  {
    printf("Comparação de cartas (Atributo: Pontos Turísticos): \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %d \n", Cidade, Estado, PontosTuristicos);
    printf("Carta 2 - %s (%s): %d \n", Cidade2, Estado2, PontosTuristicos2);
    printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
 } else {
    printf("Resultado: Empate! ");
 }
break;

case 3:
  if (Area > Area2) {
    printf("Comparação de cartas (Atributo: Área) \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %.2f \n", Cidade, Estado, Area);
    printf("Carta 2 - %s (%s): %.2f \n", Cidade2, Estado2,  Area2);
    printf("Resultado: Carta 1 (%s) venceu! \n", Cidade);
 } else if (Area < Area2)  {
    printf("Comparação de cartas (Atributo: Área): \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %.2f \n", Cidade, Estado, Area);
    printf("Carta 2 - %s (%s): %.2f \n", Cidade2, Estado2, Area);
    printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
 } else {
    printf("Resultado: Empate!");
 }
break;

case 4:
  if (PIB > PIB2) {
    printf("Comparação de cartas (Atributo: PIB) \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %.2f \n", Cidade, Estado, PIB);
    printf("Carta 2 - %s (%s): %.2f \n", Cidade2, Estado2,  PIB2);
    printf("Resultado: Carta 1 (%s) venceu! \n", Cidade);
 } else if (PIB < PIB2)  {
    printf("Comparação de cartas (Atributo: PIB): \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %.2f \n", Cidade, Estado, PIB);
    printf("Carta 2 - %s (%s): %.2f \n", Cidade2, Estado2, PIB2);
    printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
 } else {
    printf("Resultado: Empate! ");
 }
break;

case 5:
  if (DensidadePopulacional > DensidadePopulacional2) {
    printf("Comparação de cartas (Atributo: Densidade Populacional): \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %.2f \n", Cidade, Estado, DensidadePopulacional);
    printf("Carta 2 - %s (%s): %.2f \n", Cidade2, Estado2, DensidadePopulacional2);
    printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
 } else if (DensidadePopulacional < DensidadePopulacional2)  {
    printf("Comparação de cartas (Atributo: Densidade populacional) \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %.2f \n", Cidade, Estado, DensidadePopulacional);
    printf("Carta 2 - %s (%s): %.2f \n", Cidade2, Estado2,  DensidadePopulacional2);
    printf("Resultado: Carta 1 (%s) venceu! \n", Cidade);
 } else {
    printf("Resultado: Empate! ");
 }
break;

default: 
   printf("Opção inválida, escolha um número de 1 a 5. \n");

 }


 return 0;

}