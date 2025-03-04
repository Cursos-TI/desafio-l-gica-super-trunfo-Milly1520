#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    // Jogo Super Trunfo com criação de 2 cartas 

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
 
 // Cálculo de densidade populacional e PIB per capita da carta 1

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

    // Cálculo de densidade populacional e PIB per capita da carta 2

    float DensidadePopulacional2 =  Populacao2 / Area2;
    float PIBPerCapita2 = PIB2 / Populacao2;


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


switch (atributoescolhido) 
{
case 1:
   if (Populacao > Populacao2) {
     printf("Resultado: ");
   } else if (Populacao < Populacao2)  {
     printf("Resultado: ");
   } else {
      printf("Resultado: Empate! ");
   }
break;

case 2:
if (PontosTuristicos > PontosTuristicos2) {
   printf("Resultado: ");
 } else if (PontosTuristicos < PontosTuristicos2)  {
   printf("Resultado: ");
 } else {
    printf("Resultado: Empate! ");
 }

break;
case 3:
if (Area > Area2) {
   printf("Resultado: ");
 } else if (Area < Area2)  {
   printf("Resultado: ");
 } else {
    printf("Resultado: Empate!");
 }

break;
case 4:
if (PIB > PIB2) {
   printf("Resultado: ");
 } else if (PIB < PIB2)  {
   printf("Resultado: ");
 } else {
    printf("Resultado: Empate! ");
 }

break;
case 5:
if (DensidadePopulacional > DensidadePopulacional2) {
   printf("Resultado: ");
 } else if (DensidadePopulacional < DensidadePopulacional2)  {
   printf("Resultado: ");
 } else {
    printf("Resultado: Empate! ");
 }

break;
 default: 
   printf("Opção inválida, escolha um número de 1 a 5. \n");

 }







 return 0;

}