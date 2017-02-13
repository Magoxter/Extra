#include <stdio.h>

void imprime(int,int[]);

int main(void) {

    int x = 10,
        vetor[3] = {10};

    imprime(x,vetor);

    printf("Vr na FP = %d\n", x);
    printf("Vt na Fp = %d\n\n", vetor[1]);

    return 0;
}

void imprime(int x, int vetor[]) {

    x += 10;
    vetor[3] = 20;

    printf("Vr na FP = %d\n", x);
    printf("Vt na Fp = %d\n\n", vetor[3]);

    return;
}
