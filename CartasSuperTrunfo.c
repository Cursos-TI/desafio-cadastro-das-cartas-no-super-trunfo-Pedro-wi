#include <stdio.h>

int main() {
    printf("Desafio de cartas super trunfo\n");

    char EstadoBahia;
    char codia01[50];
    char salvador[50];
    int pop15200000;
    float Área567295;
    float pib4026bilhoes;
    int pontost50;

    printf("Digite a letra do estado: \n");
    scanf("%c," &EstadoBahia);
    
    printf("Digite o codigo da letra: \n");
    scanf("%s", &codia01);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &salvador);

    printf("Digite a quantidade da população: \n");
    scanf("%d," &pop15200000);

    printf("Digite a area em km²: \n");
    scanf("%f", &Área567295);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib4026bilhoes); // Leitura do PIB

    printf("Digite os pontos dos estados: \n");
    scanf("%d", &pontost50); // Leitura dos pontos 

    // Exibindo os dados
    printf("Informações da cidade: \n");
    printf("Estado: %c\n", EstadoBahia);
    printf("Codigo da carta: %s\n", codia01);
    printf("Nome da cidade: %s\n", salvador);
    printf("população: \n", pop15200000);
    printf("area: %f km²\n", Area567295km²);
    printf("pib: %f\n", pib4026bilhoes);
    printf("Pontos do Estado: %d\n", pontost50);

    return 0; }