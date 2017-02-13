#include <stdio.h>
#include <math.h>

unsigned int fatoracao (int);
void somaFat(void);

int main (void) {

    int     n,i,k;
    char    comando;

    printf("Repetir (S) ou (N): ");
    scanf ("%c", &comando);

    if (comando == 'S') {
        scanf("%d", &n);
        for (k = 0; k < n; k++) {
            somaFat();
        }
    }

    else
        somaFat();

    return 0;
}

void somaFat(void) {

    int          k,n,m;
    unsigned int fatM,
                 fatN,
                 somaFat;

    printf("\n");
    printf("Primeiro Numero: ");
    scanf ("%d", &m);
    printf("Segundo Numero: ");
    scanf ("%d", &n);

    fatM = fatoracao(m);
    fatN = fatoracao(n);

    somaFat = fatM + fatN;

    printf ("%u\n", somaFat);

    return;
}

unsigned int fatoracao (int num) {

    unsigned int fatorial = 1;

    for (num = num; num > 0; num--) {
        fatorial = fatorial * num;
    }

    return fatorial;
}
