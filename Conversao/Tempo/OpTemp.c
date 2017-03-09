	/* Operacao com Tempo */
#include <stdio.h>

int main (void) {
  int horas,op,
      minutos,
      hr1,hr2,
      segundos,
      min1,min2,
      seg1,seg2;

  	printf("\n");
    printf("MENU...\n");
    printf("1) Soma\n");
    printf("2) Subtracao\n");
    printf("3) Sair\n");
    printf("Resp.:\n");
     scanf("%d", &op);
 while (op < 3) {
    printf("Horario1: ");
     scanf("%d %d %d", &hr1,&min1,&seg1);
    printf("Horario2: ");
     scanf("%d %d %d", &hr2,&min2,&seg2);

   if (op == 1) {
    segundos = (seg1 + seg2) % 60;
    minutos = min1 + min2;
    minutos = minutos + ((seg1 + seg2) / 60);
    horas = hr1 + hr2;
    horas = horas + ((min1 + min2) / 60);  
   if (minutos == 60) {
    horas++; minutos = 0;  }
   if (segundos == 60) {
    minutos++; segundos = 0;  }
  }

  else if (op == 2){
   if (seg1 < seg2) {
    min1--; seg1 += 60;   }
     segundos = seg1 - seg2;
   if (min1 < min2) {
    hr1--; min1 += 60;   }
     minutos = min1 - min2;
     horas = hr1 - hr2; 
   } 
  printf("\n%d:%d:%d\n",horas,minutos,segundos);

  	printf("\n");
    printf("MENU...\n");
    printf("1) Soma\n");
    printf("2) Subtracao\n");
    printf("3) Sair\n");
    printf("Resp.:\n");
     scanf("%d", &op);
 }
 return 0;
} 
