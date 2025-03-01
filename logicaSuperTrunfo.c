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
    scanf("%3s", &Estado);

    printf("Digite a cidade:\n");
    scanf("%s", &Cidade);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &CodigoDaCarta);
    
    printf("Digite a populacao da cidade:\n");
    scanf("%lu",  &Populacao);

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

    printf("Digite a letra inicial do estado:\n");
    scanf("%s", &Estado2);

    printf("Digite a cidade:\n");
    scanf("%s", &Cidade2);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &CodigoDaCarta2);

    printf("Digite a populacao da cidade:\n");
    scanf("%lu",  &Populacao2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &PontosTuristicos2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Digite a area (em km²):\n");
    scanf("%f", &Area2);

    // Cálculo de densidade populacional e PIB per capita da carta 2

    float DensidadePopulacional2 = (float) Populacao2 / Area2;
    float PIBPerCapita2 = PIB2 / (float) Populacao2;

    // Comparação do atributo pontos turísticos para definir carta vencedora

    printf("/n");
    printf("Comparação de cartas: Atributo(Pontos turísticos).\n");
    printf("/n");
    printf("Carta 1 - %s: %d /n",Cidade, PontosTuristicos);
    printf("Carta 2 - %s: %d /n",Cidade2, PontosTuristicos2);

    if (PontosTuristicos > PontosTuristicos2)
    { 
        printf("Resultado: A carta 1 (%s) venceu! \n", Cidade);
    } else {
       printf("Resultado: A carta 2 (%s) venceu! \n", Cidade2);
    } 
    

    


}