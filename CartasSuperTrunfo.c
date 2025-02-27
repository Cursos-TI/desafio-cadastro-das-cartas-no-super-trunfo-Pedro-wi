#include <stdio.h>

int main() {

    char letra1[30], letra2[30];
    char codigoA01[4], codigoB02[4];
    char cidadesalvador[20], cidadefortaleza[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos50, pontos40;

        
    printf("Digite seu estado: \n");
    scanf("%c", &letra1);

    printf("Seu Codigo: \n");
    scanf("%s", &codigoA01);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidadesalvador);

    printf("Sua populacao: \n");
    scanf("%i", &populacao1);

    printf("Sua area: \n");
    scanf("%f", &area1);

    printf("Seu PIB: \n");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos50);

    printf("Carta 1\n");
    printf("Estado: %c\n", letra1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %f KM²\n", area1);
    printf("PIB: %f Bilhões de Reais\n", PIB1);
    printf("Número de Pontos Turísticos: %i\n", pontos1);

    printf("Digite seu estado: \n");
    scanf("%c", &letra2);

    printf("Seu Codigo: \n");
    scanf("%s", &codigoB02);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidadefortaleza);

    printf("Sua populacao: \n");
    scanf("%i", &populacao2);

    printf("Sua area: \n");
    scanf("%f", &area2);

    printf("Seu PIB: \n");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos40);

    printf("Carta 2\n");
    printf("Estado: %c\n", letra2);
    printf("Código: %s\n", codigoB02);
    printf("Nome da Cidade: %s\n", cidadefortaleza);
    printf("População: %i\n", populacao2);
    printf("Área: %f KM²\n", area2);
    printf("PIB: %f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos Turísticos: %i\n", pontos40);

    return 0;
    

}
