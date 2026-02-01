#include <stdio.h>


int main() {

        char codigodaCarta[4] = "a01";
        char estado[3] = "SP";
        char nomedaCidade[20] = "Sao Paulo";
        long populacao = 11900000;
        int pontosTuristicos = 35;
        float area = 1501.2;
        
        char codigodaCarta2[4] = "b02";
        char estado2[3] = "RJ";
        char nomedaCidade2[20] = "Rio de Janeiro";
        long populacao2 = 6730000;
        int pontosTuristicos2 = 45;
        float area2 = 1200.0;

        if (populacao > populacao2){
         printf ("Carta 1 venceu!");
        }
        else {
         printf ("Carta 2 venceu!");
        }

    return 0;
}
