#include <stdio.h>


int main() {

     {
        char pais [7] = "Brasil";
        char codigodaCarta[4] = "a01";
        char estado[3] = "SP";
        char nomedaCidade[20] = "Sao Paulo";
        long populacao = 11900000;
        int pontosTuristicos = 35;
        float area = 1501.2;
        float pib;

        printf("Pais: %s\n", pais );
        printf("Codigo da Carta: %s\n", codigodaCarta);
        printf("Estado: %s\n", estado);
        printf("Nome da Cidade: %s\n", nomedaCidade);
        printf("Populacao: %ld\n", populacao);
        printf("Pontos Turisticos: %d\n", pontosTuristicos);
        printf("Area: %.2f\n", area);
        pib = populacao * 58302.2;
        printf("PIB: %.1f\n", pib);
     }
        
     {
        char pais [7] = "Brasil";
        char codigodaCarta2[4] = "b02";
        char estado2[3] = "RJ";
        char nomedaCidade2[20] = "Rio de Janeiro";
        long populacao2 = 6730000;
        int pontosTuristicos2 = 45;
        float area2 = 1200.0;
        float pib2;

        printf("Pais: %s\n", pais );
        printf("Codigo da Carta: %s\n", codigodaCarta2);
        printf("Estado: %s\n", estado2);
        printf("Nome da Cidade: %s\n", nomedaCidade2);
        printf("Populacao: %ld\n", populacao2);
        printf("Pontos Turisticos: %d\n", pontosTuristicos2);
        printf("Area: %.2f\n", area2);
        pib2 = populacao2 * 73000.0;
        printf("PIB: %.1f\n", pib2);
    }

    return 0;
}
