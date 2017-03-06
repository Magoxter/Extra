	/* Cubo Magico */
#include <stdio.h>
#define MAX 1000

int main (void) {
  int quad[MAX][MAX],
  	  n,i,c,l,meio,
  	  linhas,colunas;
   printf("Tamanho Quadrado: ");
    scanf("%d", &n);
  for (l = 0; l < n; l++)
  	for (c = 0; c < n; c++)
  	   quad[l][c] = 0;
  linhas = colunas = n;
  meio = n / 2;
  c = meio; l = 0; i = 1;
  quad[l][c] = i;  i++;
 while (i <= n*n) {
  	l--;
  if (l < 0)
  	l = n-1;
  	c = (c+1)%n;
  if (quad[l][c] != 0)
  	l = (l+1)%n;
  quad[l][c] = i;
  i++;
 }
   for (l = 0; l < linhas; l++) {
   	for (c = 0; c < colunas; c++)
   	   printf("%d ", quad[l][c]);
   	   printf("\n");
   }
 return 0;
}
