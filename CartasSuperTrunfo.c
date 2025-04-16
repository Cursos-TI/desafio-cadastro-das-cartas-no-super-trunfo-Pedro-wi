#include <stdio.h>

int main() {

    char estadobahia,estadoceara;
    char codigoBh01[20], codigoCe02[20];
    char cidadesalvador[30], cidadefortaleza[30];
    int populacao15200000, populacao9233656;
    float area567295, area148886;
    float pib402bilhões, pib194milhões;
    int pontos50, pontos40;

    printf("primeira carta\\n");
    
    printf("Digite seu estado: \n");
    scanf(" %c", &estadobahia);
    getchar();

    printf("Seu Codigo: \n");
    scanf("%19s", &codigoBh01);

    printf("Nome da Cidade: \n");
    scanf("%29s", &cidadesalvador);

    printf("Sua populacao: \n");
    scanf("%d", &populacao15200000);

    printf("Sua area: \n");
    scanf("%f", &area567295);

    printf("Seu PIB: \n");
    scanf("%f", &pib402bilhões);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos50);

    printf("Carta 1\n");
    printf("Estado: %c\n", estadobahia);
    printf("Código: %s\n", codigoBh01);
    printf("Nome da Cidade: %s\n", cidadesalvador);
    printf("População: %i\n", populacao15200000);
    printf("Área: %f KM²\n", area567295);
    printf("PIB: %f Bilhões de Reais\n", pib402bilhões);
    printf("Número de Pontos Turísticos: %i\n", pontos50);

    printf("segunda carta\\n");

    printf("Digite seu estado: \n");
    scanf(" %c", &estadoceara);
    getchar();

    printf("Seu Codigo: \n");
    scanf("%19s", &codigoCe02);

    printf("Nome da Cidade: \n");
    scanf("%29s", &cidadefortaleza);

    printf("Sua populacao: \n");
    scanf("%d", &populacao9233656);

    printf("Sua area: \n");
    scanf("%f", &area148886);

    printf("Seu PIB: \n");
    scanf("%f", &pib194milhões);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos40);

    printf("Carta 2\n");
    printf("Estado: %c\n", estadoceara);
    printf("Código: %s\n", codigoCe02);
    printf("Nome da Cidade: %s\n", cidadefortaleza);
    printf("População: %i\n", populacao9233656);
    printf("Área: %f KM²\n", area148886);
    printf("PIB: %f Bilhões de Reais\n", pib194milhões);
    printf("Número de Pontos Turísticos: %i\n", pontos40);

    return 0;
    

}
