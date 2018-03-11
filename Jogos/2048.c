	/* 2048 */
#include <stdio.h>
#define MX 10

void print (int,int[MX][MX]);
void right (int,int[MX][MX]);
void down	 (int,int[MX][MX]);
void left	 (int,int[MX][MX]);
void up		 (int,int[MX][MX]);

int  verif (int,int[MX][MX]);

int main (void) {
  int mat[MX][MX];
  int n,l,c;
  int lin,col,ctrl;
 char cmd;
   ctrl = 1; n = 4;
 	 lin = col = n;
 for (l = 0; l < lin; l++)
 for (c = 0; c < col; c++)
  	mat[l][c] = 1;
  	 l = 2; c = 1;
  	mat[l][c] = 2;
  	 l = 1; c = 2;
  	mat[l][c] = 2;
  printf("2048\n");
  print (n,mat);
  printf("use w,a,s,d or q to quit\n\n");
 while (ctrl) {
	 scanf("%c", &cmd);
		printf("\n");
	if (!(cmd-115))
		down(n,mat);
	if (!(cmd-119))
		up	(n,mat);
	if (!(cmd-97))
		left(n,mat);
	if (!(cmd-100))
		right(n,mat);
  printf("2048\n");
  print(n,mat);
  printf("use w,a,s,d or q to quit\n\n"); /*
   ver = verif(n,mat);
  if (ver)
  	ctrl = 1; */
  ctrl = 0;
 }
 return 0;
}

void print (int n, int mat[MX][MX]) {
  int l,c,x,
  		lin,col;
   lin = col = n;
 for (l = 0; l < lin; l++) {
  for (c = 0; c < col; c++) {
  	x = mat[l][c];
 	 if (x != 1)
 	 	 printf(" %d  ", x);
 	 else
 	 	 printf(" -  ");
 	} printf("\n");
 } printf("\n");
 return;
}

void right (int n,int mat[MX][MX]) {
	int l,c;
 for (l = 0; l < lin; l++) {
 	for (c = 0; c < col; c++) {
 		 prox = mat[l][c+1];
 		if (prox != 1)
 	}
 }
 return;
}

void down (int n,int mat[MX][MX]) {
	mat[n][n] = mat[0][0];
 return;
}

void left (int n,int mat[MX][MX]) {
	mat[n][n] = mat[0][0];
 return;
}

void up (int n,int mat[MX][MX]) {
	mat[n][n] = mat[0][0];
 return;
}
