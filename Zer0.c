/* Zero */

// Biblioteca
    #include <stdio.h>

// Funcao Principal
    int main () {

// Variveis
    int     a,b,c,r,x;
    int     fa,fb,fc,fx;
    int     primeiraOp,
            intervalo;
    double  epsilon;
    int     n,i,k;

// Laco
    scanf ("%d", &n);
    for (k = 0; k < n; k++) {

// Leitura
    scanf ("%lf", &epsilon);
    scanf ("%d", &a);
    scanf ("%d", &b);

// Determinacao dos Pontos na Funcao
    fa = a*sin(a)-cos(a);
    fb = b*sin(b)-cos(b);
    fx = x*sin(x)-cos(x);

// Algoritmo
    intervalo = a - b;
    r = intervalo / 2;


// Apresentacao
    printf ("%d", r);

    }

    return 0;

    }
