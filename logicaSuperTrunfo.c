#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_pop1, pib_pc1;
    
    // Variáveis da Carta 2
    char estado2, codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_pop2, pib_pc2;
    int opcao

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    getchar();
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); //ler uma string com espaços, até encontrar uma quebra de linha (\n)
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade_pop1 = (float) populacao1 / area1;
    pib_pc1 = (float) pib1 / populacao1;
    
    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    getchar();
    
    printf("Código da Carta (ex: B03): ");
    scanf(" %s", codigo2);
    getchar();
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos da Carta 2
    densidade_pop2 = (float) populacao2 / area2;
    pib_pc2 = (float) pib2 / populacao2;
    
    // Exibição da Carta 1
    printf("\n--- Cartas Cadastradas ---\n\n");
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per capita: %.2f\n", pib_pc1);
    
    // Exibição da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per capita: %.2f\n", pib_pc2);
    
    //Exibição de Resultados
    printf("\n----------------------------------------------\n");
    printf("COMPARAÇÃO DAS CARTAS\n");
    printf("----------------------------------------------\n");

    // Menu de comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n----------------------------------------------\n");
    printf("RESULTADO DA COMPARAÇÃO\n");
    printf("----------------------------------------------\n");

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("População: Carta %s - %s venceu!\n", codigo1, nome1);
            } else {
                printf("População: Carta %s - %s venceu!\n", codigo2, nome2);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("Área: Carta %s - %s venceu!\n", codigo1, nome1);
            } else {
                printf("Área: Carta %s - %s venceu!\n", codigo2, nome2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("PIB: Carta %s - %s venceu!\n", codigo1, nome1);
            } else {
                printf("PIB: Carta %s - %s venceu!\n", codigo2, nome2);
            }
            break;
        case 4:
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Pontos turísticos: Carta %s - %s venceu!\n", codigo1, nome1);
            } else {
                printf("Pontos turísticos: Carta %s - %s venceu!\n", codigo2, nome2);
            }
            break;
        case 5:
            if (densidade_pop1 < densidade_pop2) {
                printf("Densidade populacional: Carta %s - %s venceu!\n", codigo1, nome1);
            } else {
                printf("Densidade populacional: Carta %s - %s venceu!\n", codigo2, nome2);
            }
            break;
        default:
            printf("Opção inválida! Escolha um número entre 1 e 5.\n");
    }

    return 0;
}