/*               Coment�rios de v�rias linhas.

  CEUB  -  FATECS  -  BCC  -  ADS  -  Programa��o  -  Prof. Barbosa

- Elabore o programa que leia um n�mero qualquer e verifique se ele 
� positivo, nulo ou negativo.

Teste 1: numero = 4             Sa�da: N�mero Positivo
Teste 2: numero = 0             Sa�da: N�mero Nulo
Teste 3: numero = -4            Sa�da: N�mero Negativo

- Passos para a implementa�ao do programa:
Entrada de dados (leia)
Testes (se ...)
Sa�da de dados (escreva)							----- */

#include <stdio.h>		            	// printf, scanf (Bibliotecas)
#include <locale.h>
int main ( ) {     
  setlocale(LC_ALL, "Portuguese");                  
  float numero;                   	// Declara��o de vari�vel real.
  printf ("Digite o n�mero: ");
  scanf ("%f", &numero);           	// leia (numero);
  if (numero > 0)                 	// se (numero > 0) ent�o
    printf ("\nN�mero positivo.");  //    escreva (" � ");
  else if (numero < 0)            	// sen�o se (numero < 0) ent�o
    printf ("\nN�mero negativo.");	//    escreva (" � ");
  else                            	// sen�o
    printf ("\nN�mero nulo.");    	//    escreva (" � ");
}                                   // Fim da fun��o main.
/*          Altera��es:
a. Al�m da mensagem, mostre tamb�m o n�mero digitado pelo usu�rio.
b. Se o n�mero for positivo, mostre a mensagem, o valor da vari�vel 
   numero e o dobro;
   Se negativo, mostre a mensagem, o valor da vari�vel numero e o triplo;
   Se nulo, mostre a mensagem, o valor da vari�vel numero.
*/

