    /* Stop */
// Este Programa Simula um Jogo de Stop

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[10];

int main (void) {

// Variaveis
    int soma[25],
        stop[25][25],i,
        rodadas,jogadores,
        colunas,c,linhas,l;

// Leitura
    printf("Numero de Jogadores: ");
    scanf ("%d", &jogadores);
    printf("Numero de Rodadas: ");
    scanf ("%d", &rodadas);
    printf("\n");

    colunas = jogadores;
    linhas = rodadas;
    flag = 1;

        for (l = 0; l < rodadas; l++) {
             printf("Rodada %d...\n\n", l+1);
            for (c = 0; c < jogadores; c++) {
                 printf("Jogador %d: ", c+1);
                 scanf ("%d", &stop[l][c]);
            }
          printf("\n");
        }

    for (i = 0; i < colunas; i++)
         soma[i] = 0;

// Apresentacao
    for (l = 0; l < linhas; l++) {
         printf("%d ", l+1);
        for (c = 0; c < colunas; c++) {
             printf("%4d", stop[l][c]);
             soma[c] += stop[l][c];
        }
        printf("\n");
    }
    printf("\nT:");

    for (i = 0; i < jogadores; i++)
         printf("%4d", soma[i]);

    return 0;
}
