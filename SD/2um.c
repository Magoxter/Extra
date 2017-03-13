#include <stdio.h>

int main (void) {
  int ant,
  	  att,
  	  num;
  	ant = 0;
  	att = 0;
 while (scanf("%d", &num) != EOF) {
   if (ant && att)
   	 printf("1 ");
   else
   	 printf("0 ");
   ant = att;
   att = num;
 } printf("\n");
 return 0;
}
