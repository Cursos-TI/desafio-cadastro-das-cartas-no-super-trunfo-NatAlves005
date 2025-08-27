#include <stdio.h>

int main(){

    char Estado;
    char Codigo[50];
    char Cidade[50];
    int Populacao;
    float Areakm21;
    float PIB;
    int PontosTuristicos;

    printf("Carta 1:\nInforme o estado:\n(A)RJ\n(B)SP\n(C)MG\n(D)MT\n(E)SC\n(F)PE\n(G)RS\n(H)BA\n");
    scanf(" %c",&Estado);

    printf("Informe seu código de carta (um numero de 01 a 04):\n");
    scanf("%s",&Codigo);

    printf("Informe o nome da cidade:\n");
    scanf("%s",&Cidade);

    printf("Informe o número de habitantes da sua cidade:\n");
    scanf("%d",&Populacao);

    printf("Informe a área da sua cidade em km² (ex:000.00):\n ");
    scanf("%f",&Areakm21);

    printf("Informe o PIB da sua cidade (ex:000.00):\n");
    scanf("%f",&PIB);

    printf("Informe a quantidade de pontos turísticos da sua cidade:\n");
    scanf("%d",&PontosTuristicos);


    char Estado2;
    char Codigo2[50];
    char Cidade2[50];
    int Populacao2;
    float Areakm22;
    float PIB2;
    int PontosTuristicos2;

    printf("Carta 2:\nInforme o estado:\n(A)RJ\n(B)SP\n(C)MG\n(D)MT\n(E)SC\n(F)PE\n(G)RS\n(H)BA\n");
    scanf(" %c",&Estado2);

    printf("Informe seu código de carta (um numero de 01 a 04):\n");
    scanf("%s",&Codigo2);

    printf("Informe o nome da cidade:\n");
    scanf("%s",&Cidade2);

    printf("Informe o número de habitantes da sua cidade:\n");
    scanf("%d",&Populacao2);

    printf("Informe a área da sua cidade em km² (ex:000.00):\n ");
    scanf("%f",&Areakm22);

    printf("Informe o PIB da sua cidade (ex:000.00):\n");
    scanf("%f",&PIB2);

    printf("Informe a quantidade de pontos turísticos da sua cidade:\n");
    scanf("%d",&PontosTuristicos2);

    printf("Carta 1:\n");
    printf("Estado: %c\n",Estado);
    printf("Código: %c%s\n", Estado,Codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Areakm21);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n\n", PontosTuristicos);


    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %c%s\n", Estado2,Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Areakm22);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}
