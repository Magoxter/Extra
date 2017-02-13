/*Este código é um código simples, acho que é innútil tentar patentear uma porta,
 assim como é inútil tentar patentear a fórmula de resolução da equação do segundo
 grau, então não tente patentear ou vender este código ou uma versão compilada do
 mesmo. Versão do código: 1.0
 Para compilar, use o comando:
 gcc -o equacoes.bin -lm equacoes.c
 Foi meu primeiro grande projeto escrito em c, pois ainda estou aprendendo, mas
 acho que ficou muito bom.
*/
#include <stdio.h>
#include <math.h>
int main(void) //a principal função(?), o void é necessário(?)
{
 char usch; //inclui a variável que permitirá ao usuário escolher entre notação científica ou não para o resultado
 int a , b , c;
 float x1 , x2 , delta;
 printf("ax\1362 + bx + x = 0\n"); //imprime: ax^2 + bx + c = 0
 printf("Digite o valor de a\n");  //pede ao usuário para digitar o valor de "a"
 scanf("%d" , &a);                 //armazena o valor de a, após o usuário digitar o valor e teclar <enter>
 printf("Digite o valor de b\n");
 scanf("%d" , &b);
 printf("Digite o valor de c\n");
 scanf("%d" , &c);
 delta = b * b -4 * a * c;         //calcula delta
 if(a == 0)                        //verifica se a é igual a 0, caso seja, então pode ser uma equação de 1º grau (b != 0) ou não é uma equação (b = 0)
 {
  if(b == 0) //verifica se b é igual a 0, lembre-se que este comando só será executado se "a" for igual a 0
  {
   printf("Isso não é uma equação de primeiro ou segundo grau\n"); //informa que é uma equação de 0º grau =)
  }
  else //caso "b" seja diferente de 0
  {    //começo do algoritmo para resolver equações de 1º grau
   x1 = (-c)/b; //fórmula para resolução
   printf("Resultado em notação científica\077 \050s\057n\051\n"); //imprimi uma pergunta ao usuário
   scanf("%s" , &usch);                                            //armazena a reposta
   if(usch == 's')                                                 //verifica se a resposta foi s(im)
   {
    printf("A raiz desta equação de primeiro grau é %e\n" , x1);   //mostra a solução em notação científica
   }
   else
   {
    printf("A raiz desta equação de primeiro grau é %f\n" , x1);   //mostra a solução
   }
  }    //final do algoritmo para resolver equações de 1º grau
 }
 else //caso "a" seja diferente de 0
 {
  if(b == 0) //caso "b" seja igual a 0, então terá de ser usada outra fórmula para resolver as equações
  {
   if(a > 0) //começo da validação dos valores da equação
   {
    if(c < 0)//final da validação dos valores da equação
    {
     x1 = -c / a;  //resolução da equação caso "c" seja menor que 0
     x1 = sqrt(x1);//resultado de x1
     x2 = -1 * x1; //resultado de x2
     printf("Resultado em notação científica\077 \050s\057n\051\n");
     scanf("%s" , &usch);
     if(usch == 's')
     {
      printf("As raízes da função são %e e %e\n" , x1 , x2);
     }
     else
     {
      printf("As raízes da função são %f e %f\n" , x1 , x2);
     }
    }
    else                                        //a equação não é válida
    {
     printf("A função não tem raízes reais\n"); //e esta informação é vista pelo usuário
    }
   }
   else
   {
    if(c > 0) //resolução da equação caso "c" seja maior que 0
    {
     x1 = c / -a;
     x1 = sqrt(x1);
     x2 = -1 * x1;
     printf("Resultado em notação científica\077 \050s\057n\051\n");
     scanf("%s" , &usch);
     if(usch == 's')
     {
      printf("As raízes da função são %e e %e\n" , x1 , x2);
     }
     else
     {
      printf("As raízes da função são %f e %f\n" , x1 , x2);
     }
    }
    else
    {
     printf("A função não tem raízes reais\n");
    }
   }
  }
  else //"b" é diferente de 0 e é usado um algoritmo comum para a resolução da equação
  {
   if(delta > 0) //se "delta" é maior que 0, então há duas raízes reais
   {
    printf("Resultado em notação científica\077 \050s\057n\051\n");
    scanf("%s" , &usch);
    delta = sqrt(delta);
    x1 = (-b + delta)/(2*a);
    x2 = (-b - delta)/(2*a);
    if (usch == 's')
    {
     printf("As raízes da função são %e e %e\n" , x1 , x2);
    }
    else
    {
     printf("As raízes da função são %f e %f\n" , x1 , x2);
    }
   }
   else //se "delta" é menor ou igual a 0 ...
   {
    if(delta == 0) //se for igual, há uma raiz real
    {
     x1 = (-b)/(2*a); //cálculo, não precisa do valor de "delta", pois este comando só será executado se "delta" for igual a 0
     printf("Resultado em notação científica\077 \050s\057n\051\n");
     scanf("%s" , &usch);
     if(usch == 's')
     {
      printf("A raiz da função é %e\n" , x1);
     }
     else
     {
      printf("A raiz da função é %f\n" , x1);
     }
    }
    else //se "delta" é menor que 0
    {    //então não há raízes reais
     printf("A função não tem raízes reais\n");
    }
   }
  }
 }
 return 0; //não sei o que esse comando faz, se souber, por favor me informe
}
