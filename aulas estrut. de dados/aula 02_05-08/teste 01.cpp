#include <stdio.h>
#include <locale.h>

/*int main () {
	setlocale(LC_ALL, "Portuguese");
	float x,y;
	int z;
	z = 0;
	while (x != -1){
		printf("Digite um n�mero. (-1 para sair) ");
		scanf("%f", & x);
		if (x != -1) {
			z ++;
			y += x;
		}
	}
	
	printf("\nQuantidade de n�meros: %d", z);
	printf("\nSoma dos n�meros digitados: %.2f", y);
 }
 */
 
 int main() {
 	setlocale(LC_ALL, "Portuguese");
 	float nota, media;
 	int z, aprovados;
 	z = 0;
 	while(nota != -1) {
 		printf("Nota da prova (-1 para sair): ");
 		scanf("%f", & nota);
 		if (nota != -1) {
			z ++;
 			media += nota;
 		}
 		if (nota >= 5) aprovados ++;
	 }
	 printf("M�dia aritim�tica da turma: %.2f", media/z);
	 printf("\nN�mero de alunos aprovados: %d", aprovados);
 }
