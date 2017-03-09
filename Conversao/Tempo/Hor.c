	/* Conversao Tempo */
#include <stdio.h>

void apresenta (int,int,int);

int main (void) {
  int op,po;
  int horas,
      minutos,
      hr1,hr2,
      segundos,
      min1,min2,
      seg1,seg2;
   	printf("MENU...\n");
  	printf("1) Segundos\n");
  	printf("2) Minutos\n");
    printf("3) Horas\n");
  	printf("4) Sair\n");
  	 scanf("%d", &op);
 while (op < 4) {
  if (op == 1) {
   printf("Segundos: ");
    scanf("%d", &segundos);
   minutos = segundos / 60;
   horas = minutos / 60;
  }

  if (op == 2) {
   printf("Minutos: ");
    scanf("%d", &minutos);
   segundos = minutos * 60;
   horas = minutos / 60;
  }

  if (op == 3) {
   printf("Horas: ");
    scanf("%d", &horas);
   segundos = 60 * horas * 60;
   minutos = horas * 60;
  } 
    printf("\n");
    printf("%d Segundos = %d Minutos = %d Horas\n",
                            segundos,minutos,horas);
    printf("\n");
    printf("MENU...\n");
    printf("1) Segundos\n");
    printf("2) Minutos\n");
    printf("3) Horas\n");
    printf("4) Sair\n");
     scanf("%d", &op);
 }  printf("Fim de Execucao\n");
 return 0;
}
