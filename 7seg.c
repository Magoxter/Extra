    /* Freq - 7seg */
#include <stdio.h>
#define MAX 1000

typedef struct limite {
    int total;
};

typedef struct numero {
    limite lim[MAX];
};

int main (void) {
  int l,i,n,c,k,
      valor,cont,
      seg[MAX][MAX];
  struct numero num;
    printf("Qtd de Num a serem Representados: ");
     scanf("%d", &n);
    printf("*Caso maior que 10 sera Representado por Letras\n");
    for (i = 0; i < n; i++) {
     printf("\tValor: ");
      scanf("%d", &valor);
     printf("Displays em %d: ", valor);
       if (valor == 1)
         num.lim[valor].total = 2;
       else if (valor == 7)
         num.lim[valor].total = 3;
       else if (valor == 4   ||
                valor == 12  ||
                valor == 15)
         num.lim[valor].total = 4;
       else if (valor == 2   ||
                valor == 3   ||
                valor == 5   ||
                valor == 11  ||
                valor == 13  ||
                valor == 14)
         num.lim[valor].total = 5;
       else if (valor == 0   ||
                valor == 6   ||
                valor == 9   ||
                valor == 10)
         num.lim[valor].total = 6;
       else if (valor == 8)
         num.lim[valor].total = 7;
    for (l = 0; l < n; l++)
      for (i = 0; i < n; i++)
     for (c = 0; c < num.lim[valor].total; c++)
       scanf("%d", &seg[l][c]);
  } printf("Frequencia... \n");
 for (k = 1; k <= n; k++) {
   for (l = 0; l < n; l++) {
    for (c = 0; c < num.lim[l].total; c++) {
        if (seg[l][c] == k)
          cont++;
    }
   } printf("%d - %d/%d\n", k, cont, n);
 }
 return 0;
}
