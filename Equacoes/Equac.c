    /* Equacoes */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void PrimeiroGrau (void);
void SegundoGrau (void);

int main (void) {

    int comando;

    printf("Equacao...\n");
    printf("Primeiro (1) ou Segundo (2) Grau: ");
    scanf ("%d", &comando);

    if (comando == 1)
        PrimeiroGrau();

    if (comando == 2)
        SegundoGrau();

    else
        printf("\nERR0R\n");

    return 0;
}

void PrimeiroGrau(void) {

// Variaveis
    int numerosA,
        numerosD;
    int membroA[10],
        membroD[10];

// Leitura
    printf("Qtd Numeros antes Igualdade: ");
    scanf ("%d", &numerosA);

    printf("Equacao... ");

    for (k = 0; k < numerosA; k++)
         scanf ("%d ", membroA[i]);

    printf("Qtd Numeros depois Igualdade: ");
    scanf ("%d", &numerosD);

    printf("Equacao... ");

    for (k = 0; k < numerosD; k++)
         scanf ("%d ", membroD[i]);

// Equacao
    resultado =

    return;
}

void SegundoGrau(void) {

// Variaveis
    int     a,b,c,
    float   delta,
            X1,X2;
    bool    equacao;

// Leitura
    printf("Ax\1362 + Bx + C = 0\n");
    printf("A = ");
    scanf ("%d", &a);
    printf("B = ");
    scanf ("%d", &b);
    printf("C = ");
    scanf ("%d", &c);

// Delta
    delta = pow(b,2) - 4 * a * c;
    equacao = true;

    if (delta < 0)
        equacao = false;

    if (delta >= 0) {

// Bhaskara
        X1 = (-b + sqrt(delta)) / 2 * a;
        X2 = (-b - sqrt(delta)) / 2 * a;
    }

// Apresentacao
    printf("\n");

    if (!equacao)
        printf("\nDelta Negativo...\nEsta Equacao nao Possui Resolucao\n");
    else {
        printf("X1 = %d\n", X1);
        printf("X2 = %d\n", X2);
    }


    return;
}
