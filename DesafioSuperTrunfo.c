#include <stdio.h>


int main() {
    
        char estado1[4], estado2[4];
        char codigo[4], codigo2[4];
        char nome1[50], nome2[50];
        int populacao1, populacao2, turistico1, turistico2;
        float area1, area2, pib1, pib2;
        //Variáveis das cartas
    
            printf("Insira o estado da sua primeira carta: ");
            scanf("%s", estado1);

            printf("Insira o código da carta: ");
            scanf("%s", codigo);

            printf("Insira o nome da cidade: ");
            scanf("%s", nome1);

            printf("Insira a população da cidade: ");
            scanf("%d", &populacao1);

            printf("Insira a área (em Km²) da cidade: ");
            scanf("%f", &area1);

            printf("Insira o PIB da cidade: ");
            scanf("%f", &pib1);

            printf("Insira quantos pontos turísticos existem na cidade: ");
            scanf("%d", &turistico1);
            //Informações da primeira carta

            printf("Insira o estado da sua segunda carta: ");
            scanf("%s", estado2);

            printf("Insira o código da carta: ");
            scanf("%s", codigo2);

            printf("Insira o nome da cidade: ");
            scanf("%s", nome2);

            printf("Insira a população da cidade: ");
            scanf("%d", &populacao2);

            printf("Insira a área (em Km²) da cidade: ");
            scanf("%f", &area2);

            printf("Insira o PIB da cidade: ");
            scanf("%f", &pib2);

            printf("Insira quantos pontos turísticos existem na cidade: ");
            scanf("%d", &turistico2);
            //Informações da segunda carta
    
                    printf("Carta 1:\n");
                    printf("Estado: %s\n", estado1);
                    printf("Código: %s\n", codigo);
                    printf("Nome da Cidade: %s\n", nome1);
                    printf("População: %d\n", populacao1);
                    printf("Área: %.2f Km²\n", area1);
                    printf("PIB: %.2f bilhões de reais\n", pib1);
                    printf("Número de Pontos Turísticos: %d\n", turistico1);
                    //Terminal da primeira carta

                    printf("\n");
                
                    printf("Carta 2:\n");
                    printf("Estado: %s\n", estado2);
                    printf("Código: %s\n", codigo2);
                    printf("Nome da Cidade: %s\n", nome2);
                    printf("População: %d\n", populacao2);
                    printf("Área: %.2f Km²\n", area2);
                    printf("PIB: %.2f bilhões de reais\n", pib2);
                    printf("Número de Pontos Turísticos: %d\n", turistico2);
                    //Terminal da segunda carta
    return 0;
}
