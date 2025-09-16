#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    // Declaração das variáveis da Carta 1
    char Estado;                // Letra representando o estado
    char Codigo[50];           // Código da carta (string)
    char Cidade[50];           // Nome da cidade
    int Populacao;             // Número de habitantes da cidade
    float Areakm21;            // Área da cidade em km²
    float PIB;                 // Produto Interno Bruto da cidade
    int PontosTuristicos;      // Número de pontos turísticos

    // Entrada de dados da Carta 1
    printf("Carta 1:\nInforme o estado:\n(A)RJ\n(B)SP\n(C)MG\n(D)MT\n(E)SC\n(F)PE\n(G)RS\n(H)BA\n");
    scanf(" %c", &Estado); // Lê o caractere do estado (espaço antes de %c para ignorar newline anterior)

    printf("Informe seu código de carta (um numero de 01 a 04):\n");
    scanf("%s", Codigo); // Lê o código da carta

    printf("Informe o nome da cidade:\n");
    scanf("%s", Cidade); // Lê o nome da cidade (OBS: nomes com espaço serão cortados)

    printf("Informe o número de habitantes da sua cidade:\n");
    scanf("%d", &Populacao); // Lê o número de habitantes

    printf("Informe a área da sua cidade em km² (ex:000.00):\n ");
    scanf("%f", &Areakm21); // Lê a área da cidade

    printf("Informe o PIB da sua cidade (ex:000.00):\n");
    scanf("%f", &PIB); // Lê o PIB da cidade

    printf("Informe a quantidade de pontos turísticos da sua cidade:\n");
    scanf("%d", &PontosTuristicos); // Lê o número de pontos turísticos

    // Declaração das variáveis da Carta 2 (mesma estrutura da carta 1)
    char Estado2;
    char Codigo2[50];
    char Cidade2[50];
    int Populacao2;
    float Areakm22;
    float PIB2;
    int PontosTuristicos2;

    // Entrada de dados da Carta 2
    printf("Carta 2:\nInforme o estado:\n(A)RJ\n(B)SP\n(C)MG\n(D)MT\n(E)SC\n(F)PE\n(G)RS\n(H)BA\n");
    scanf(" %c", &Estado2); // Lê o caractere do estado

    printf("Informe seu código de carta (um numero de 01 a 04):\n");
    scanf("%s", Codigo2); // Lê o código da carta

    printf("Informe o nome da cidade:\n");
    scanf("%s", Cidade2); // Lê o nome da cidade

    printf("Informe o número de habitantes da sua cidade:\n");
    scanf("%d", &Populacao2); // Lê a população

    printf("Informe a área da sua cidade em km² (ex:000.00):\n ");
    scanf("%f", &Areakm22); // Lê a área da cidade

    printf("Informe o PIB da sua cidade (ex:000.00):\n");
    scanf("%f", &PIB2); // Lê o PIB da cidade

    printf("Informe a quantidade de pontos turísticos da sua cidade:\n");
    scanf("%d", &PontosTuristicos2); // Lê os pontos turísticos

    // Impressão dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);                          // Imprime o estado
    printf("Código: %c%s\n", Estado, Codigo);               // Código formado pela letra do estado + código da carta
    printf("Nome da cidade: %s\n", Cidade);                 // Nome da cidade
    printf("População: %d\n", Populacao);                   // População
    printf("Área: %.2f km²\n", Areakm21);                   // Área da cidade com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", PIB);            // PIB da cidade
    printf("Número de Pontos Turísticos: %d\n\n", PontosTuristicos); // Pontos turísticos

    // Impressão dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);                         // Estado da carta 2
    printf("Código: %c%s\n", Estado2, Codigo2);             // Código da carta 2
    printf("Nome da cidade: %s\n", Cidade2);                // Nome da cidade
    printf("População: %d\n", Populacao2);                  // População
    printf("Área: %.2f km²\n", Areakm22);                   // Área da cidade
    printf("PIB: %.2f bilhões de reais\n", PIB2);           // PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2); // Pontos turísticos

    return 0; // Fim do programa
}
