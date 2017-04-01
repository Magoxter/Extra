    /* Jogo da Velha */
#include <stdio.h>

void jogo (char[][5]);
void regras (void);
void jogar (void);
int vitoria (char[][5]);
int lin (char[][5]);
int col (char[][5]);
int dgn (char[][5]);
int sec (char[][5]);

int main (void) {
  int op;
    printf("JOGO DA VELHA: \n");
    printf("1- Regras\n");
    printf("2- Jogar\n");
    printf("3- Sair\n");
    printf("\n");
     scanf("%d", &op);
 while (op < 3) {
  switch (op) {
    case 1:
      regras();
     break;
    case 2:
      jogar();
     break;
    default:
     break;
  } printf("\n");
    printf("JOGO DA VELHA: \n");
    printf("1- Regras\n");
    printf("2- Jogar\n");
    printf("3- Sair\n");
    printf("\n");
     scanf("%d", &op);
 } printf("Fim Operacao\n");
 return 0;
}

void regras (void) {
  printf("REGRAS...\n");
  printf("Voce conhece as regras, bitch!!\n");
 return;
}

void jogar (void) {
  int  n,i,c,l,e,
       k,y,g,z,m;
  char x,v[5][5];
     n = 3;
    for (i = 0; i < n; i++)
     for (k = 0; k < n; k++)
        v[i][k] = ' ';
    e = n*n;
    y = 0;
 while (e) {
    e--;
  if (e %2 == 0)
     x = 'X';
  else
     x = 'O';
    printf("Jogador %c\n", x);
    printf("Linha: ");
     scanf("%d", &l);
    printf("Coluna: ");
     scanf("%d", &c);
  if ((l < 4 && c < 4) && (l > 0 && c > 0)) {
    if (v[l-1][c-1] == ' ') {
      v[l-1][c-1] = x;
      jogo(v);
    } else {
         printf("\nOcupado\n");
        e++;  }
  } else {
      printf("\nInexistente\n");
      printf("Deseja algo?\n");
      printf("1- Voltar ao Menu\n");
      printf("2- Finalizar Jogo\n");
      printf("3- Nada, vc apertou errado d otario msm.?!\n");
       scanf("%d", &m);
      printf("\n");
    if (m == 1)
      return;
    else if (m == 2)
       e = 0;
    else
      e++;
    } n = vitoria(v);
  if (n) {
   if (n == 1)
     printf("\nGanhador X\n");
   if (n == 2)
     printf("\nGanhador O\n");
    e = 0;
  } else if (!n && !e)
   printf("Deu Velha!!\n");
 }
 return;
}

int vitoria (char v[][5]) {
  int  f1,f2,f3,f4;
  char x,y;
    f1 = lin(v);
  if (f1)
    return f1;
  else {
     f2 = col(v);
    if (f2)
      return f2;
    else {
       f3 = dgn(v);
      if (f3)
        return f3;
      else {
         f4 = sec(v);
        if (f4)
          return f4;
        else
          return 0;
      }
    }
  }
}

int lin (char v[][5]) {
  int  n,i,k,
       g1,g2,
       key;
  char x,y;
    n = k = 3;
    key = 0;
    x = 'X';
    y = 'O';
 while (k--) {
    g1 = g2 = 0;
  for (i = 0; i < n; i++) {
   if (v[k][i] == x)
     g1++;
   if (v[k][i] == y)
     g2++;
 } if (g1 == 3)
     key = 1;
   if (g2 == 3)
     key = 2;
   if (key)
    k = 0;
 }
 return key;
}

int col (char v[][5]) {
  int  n,i,k,
       g1,g2,
       key;
  char x,y;
    n = k = 3;
    x = 'X';
    y = 'O';
 while (k--) {
    g1 = g2 = 0;
  for (i = 0; i < n; i++) {
   if (v[i][k] == x)
     g1++;
   if (v[i][k] == y)
     g2++;
 } if (g1 == n)
     key = 1;
   if (g2 == n)
     key = 2;
   if (key)
     k = 0;
 }
 return key;
}

int dgn (char v[][5]) {
  int  n,i,k,
       g1,g2,
       key;
  char x,y;
    key = k = 0;
    g1 = g2 = 0;
    n = 3;
    x = 'X';
    y = 'O';
 for (i = 0; i < n; i++) {
   if (v[i][k] == x)
     g1++;
   if (v[i][k] == y)
     g2++;
  k++;
 } if (g1 == n)
     key = 1;
   if (g2 == n)
     key = 2;
 return key;
}

int sec (char v[][5]) {
  int  n,i,k,
       g1,g2,
       key;
  char x,y;
    x = 'X';
    y = 'O';
    n = 3;
    k = n-1;
    key = 0;
    g1 = g2 = 0;
 for (i = 0; i < n; i++) {
   if (v[i][k] == x)
     g1++;
   if (v[i][k] == y)
     g2++;
  k--;
 } if (g1 == n)
     key = 1;
   if (g2 == n)
     key = 2;
 return key;
}

void jogo (char m[][5]) {
  printf("\n");
  printf("%c | ", m[0][0]);
  printf("%c | ", m[0][1]);
  printf("%c\n" , m[0][2]);
  printf("---------\n");
  printf("%c | ", m[1][0]);
  printf("%c | ", m[1][1]);
  printf("%c\n" , m[1][2]);
  printf("---------\n");
  printf("%c | ", m[2][0]);
  printf("%c | ", m[2][1]);
  printf("%c\n" , m[2][2]);
  printf("\n");
 return;
}
