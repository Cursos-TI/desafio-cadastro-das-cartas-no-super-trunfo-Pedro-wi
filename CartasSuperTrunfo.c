#include <stdio.h>

int main() {

    char letrabahia[30], letraceara[30];
    char codigoA01[4], codigoB02[4];
    char cidadesalvador[20], cidadefortaleza[20];
    int populacao15200000, populacao9233656;
    float area567295, area148886;
    float PIB402bilhões, PIB194milhões;
    int pontos50, pontos40;

        
    printf("Digite seu estado: \n");
    scanf("%c", &letrabahia);

    printf("Seu Codigo: \n");
    scanf("%s", &codigoA01);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidadesalvador);

    printf("Sua populacao: \n");
    scanf("%i", &populacao15200000);

    printf("Sua area: \n");
    scanf("%f", &area567295);

    printf("Seu PIB: \n");
    scanf("%f", &PIB402bilhões);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos50);

    printf("Carta 1\n");
    printf("Estado: %c\n", letrabahia);
    printf("Código: %s\n", codigoA01);
    printf("Nome da Cidade: %s\n", cidadesalvador);
    printf("População: %i\n", populacao15200000);
    printf("Área: %f KM²\n", area567295);
    printf("PIB: %f Bilhões de Reais\n", PIB402bilhões);
    printf("Número de Pontos Turísticos: %i\n", pontos50);

    printf("Digite seu estado: \n");
    scanf("%c", &letraceara);

    printf("Seu Codigo: \n");
    scanf("%s", &codigoB02);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidadefortaleza);

    printf("Sua populacao: \n");
    scanf("%i", &populacao9233656);

    printf("Sua area: \n");
    scanf("%f", &area148886);

    printf("Seu PIB: \n");
    scanf("%f", &PIB194milhões);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos40);

    printf("Carta 2\n");
    printf("Estado: %c\n", letraceara);
    printf("Código: %s\n", codigoB02);
    printf("Nome da Cidade: %s\n", cidadefortaleza);
    printf("População: %i\n", populacao9233656);
    printf("Área: %f KM²\n", area148886);
    printf("PIB: %f Bilhões de Reais\n", PIB194milhões);
    printf("Número de Pontos Turísticos: %i\n", pontos40);

    return 0;
    

}
