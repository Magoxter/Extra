/* Jogo dos Tontinhos */

// Este Jogo Algoritmico consiste na Probabilidade
// de Erros e Acertos para encontrar a Frase

// Bibliotecas
    #include <stdio.h>
    #include <string.h>

// Tipo String
    typedef char string[10];

// Funcao Principal
    int main (void) {

// variaveis
    char  alternativa;

// Que Comece o Jogo
  /* Regras */
    printf ("____________JOGO DOS TONTINHOS_____________\n");
    printf ("Este Jogo Consiste em Perguntas e Respostas\n");
    printf ("Responda Usando apenas Letras Maiusculas\n");
    printf ("Que os Jogos Comecem...\n");

  /* Escolha uma Alternativa */
    printf ("\nEscolha uma Alternativa...");
    printf ("1 - T\n");
    printf ("2 - C\n");
    printf ("3 - X\n");
    printf ("4 - P\n");

  /* Leitura da Alternativa */
    printf("Resposta: ");
    scanf ("%c", alternativa[0]);

// Confirmar a Resposta Correta
    if (alternativa[0] != 'C') {

  /* Escolha uma Alternativa */
    printf ("\nEscolha uma Alternativa...");
    printf ("1 - I\n");
    printf ("1 - O\n");
    printf ("1 - A\n");
    printf ("1 - U\n");

  /* Leitura da Alternativa */
    printf("Resposta: ");
    scanf ("%c", alternativa[1]);

// Confirmar a Resposta Correta
    if (alternativa[1] != 'U') {
        printf ("\nCongratulations Bitch. You Win!");
        printf ("\nAgora Junte Todas as Letras e Forme a Palavra!");
    }

    }

    else {
        printf ("EROOU - Tente Novamente, mais tarde...");
    }

        return 0;
    }
