/*               Comentários de várias linhas.

  CEUB  -  FATECS  -  BCC  -  ADS  -  Programação  -  Prof. Barbosa

- Elabore o programa que leia um número qualquer e verifique se ele 
é positivo, nulo ou negativo.

Teste 1: numero = 4             Saída: Número Positivo
Teste 2: numero = 0             Saída: Número Nulo
Teste 3: numero = -4            Saída: Número Negativo

- Passos para a implementaçao do programa:
Entrada de dados (leia)
Testes (se ...)
Saída de dados (escreva)							----- */

#include <stdio.h>		            	// printf, scanf (Bibliotecas)
#include <locale.h>
int main ( ) {     
  setlocale(LC_ALL, "Portuguese");                  
  float numero;                   	// Declaração de variável real.
  printf ("Digite o número: ");
  scanf ("%f", &numero);           	// leia (numero);
  if (numero > 0)                 	// se (numero > 0) então
    printf ("\nNúmero positivo.");  //    escreva (" … ");
  else if (numero < 0)            	// senão se (numero < 0) então
    printf ("\nNúmero negativo.");	//    escreva (" … ");
  else                            	// senão
    printf ("\nNúmero nulo.");    	//    escreva (" … ");
}                                   // Fim da função main.
/*          Alterações:
a. Além da mensagem, mostre também o número digitado pelo usuário.
b. Se o número for positivo, mostre a mensagem, o valor da variável 
   numero e o dobro;
   Se negativo, mostre a mensagem, o valor da variável numero e o triplo;
   Se nulo, mostre a mensagem, o valor da variável numero.
*/

