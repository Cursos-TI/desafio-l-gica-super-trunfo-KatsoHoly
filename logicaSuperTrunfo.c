#include <stdio.h>

int main() {
    int carta1 = 1;
    int carta2 = 2;
    int opcao;
    int resultado1, resultado2;

    // Dados da cidade (carta 1)
    char estado1 = 'B';
    char codigoCarta1[20] = "B13";
    char nomeCidade1[20] = "SALVADOR";
    int populacao1 = 508826;
    float area1 = 55.4;
    float pib1 = 25000.0;
    int turismo1 = 25;

    // Dados da cidade (carta 2)
    char estado2 = 'M';
    char codigoCarta2[20] = "M154";
    char nomeCidade2[20] = "MANAUS";
    int populacao2 = 515744741;
    float area2 = 2.9;
    float pib2 = 25000.0;
    int turismo2 = 18;

    // Densidade recebe a populacao divida pela area
    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;

    // Início do jogo
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo para comparar\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Densidade Populacional (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Selecione qual atributo deseja comparar
    if (carta1 == carta2) {
        printf("Você escolheu o mesmo atributo para as duas cartas!\n");
    } else {
        switch (opcao) {
            case 1:
                printf("Você escolheu: População\n");
                resultado1 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu: PIB\n");
                resultado1 = pib1 > pib2 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu: Densidade Populacional\n");
                resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida!\n");
            
        }

        printf("\n--- Escolha o segundo atributo para comparar ---\n");
        printf("1. População\n");
        printf("2. PIB\n");
        printf("3. Densidade Populacional (menor vence)\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (carta2 == carta1) {
        printf("Você escolheu o mesmo atributo para as duas cartas!\n");
    } else {
        switch (opcao) {
            case 1:
                printf("Você escolheu: População\n");
                resultado2 = populacao2 > populacao1 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu: PIB\n");
                resultado2 = pib2 > pib1 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu: Densidade Populacional");
                resultado2 = densidadePopulacional2 < densidadePopulacional1 ? 1 : 0;
                break;
                }
        }

       // Resultado da compraçao
        if (resultado1 && resultado2) {
            printf("Parabéns, você venceu!\n");
        } else if (resultado1 != resultado2) {
            printf("Empatou!\n");
        } else {
            printf("Infelizmente, você perdeu!\n");
        }
    }

    return 0;
}
