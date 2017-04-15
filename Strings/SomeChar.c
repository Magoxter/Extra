    /* Some Char */
// Este Programa le dado Caractere
// e, de um Texto dado, retira todo
// aonde o Caractere estiver

#include <stdio.h>
#include <string.h>
#define MX 1000

void some (int,char[],int);

int main (void) {
  char c,txt[MX];
  int  n,i,k;
 while (scanf(" %[^\n]%*c", txt) != EOF) {
   scanf("%c", &c);
    n = strlen(txt);
    k = 0;
  for (i = 0; i < n; i++) {
    if (txt[i] == c) {
      some(i,txt,n);
     k++;
    }
  } printf("%s\n", txt);
    printf("%d letras %c\n\n",k,c);
 }
 return 0;
}

void some (int x,char t[MX],int n) {
  int i;
 for (i = x; i < n; i++)
   t[i] = t[i+1];
 return;
}
