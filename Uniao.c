// Bibliotecas
    #include<stdio.h>
    #include<stdlib.h>
    #include<stdbool.h>

// Constantes
    #define TAM_MAX 25

// Funcao Principal
    int main(void) {

// Variaveis
    int discA[500],
        discB[500],
        discC[500],
        discAB[500];
    int alunosA,
        alunosB,
        alunosAB;
    int RGA;
    int n,i,k;
    int a,b,ab;
    int tamC;

// Laco
    scanf ("%d", &n);
    for (k = 0; k < n; k++) {

// Leitura

/* Disciplina A */
    scanf ("%d", &alunosA);
    for (a = 0; a < alunosA; a++) {
         scanf ("%d", &RGA);
    }

/* Disciplina B */
    scanf ("%d", &alunosB);
    for (b = 0; b < alunosB; b++) {
         scanf ("%d", &RGA);
    }

// Algoritmo
    alunosAB = 0;
    for(ab = 0; ab < alunosA; ab++) {
       int j = 0;
      discC[ab] = discA[ab];
      alunosAB++;

// Apresentacao
      for (i = 0; i < tamC; i++)
         printf("%d ", discC[i]);
      printf("\n");

   }

   else
      printf("vazia\n");

    }

   return 0;

// pós:  Vetor C = A interseção B && tamC = |A interseção B| (número de
//       elementos da interseção)
} // fim da função main
