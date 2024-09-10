#include <stdio.h>
#include <locale.h>

/*int main () {
	setlocale(LC_ALL, "Portuguese");
	float x,y;
	int z;
	z = 0;
	while (x != -1){
		printf("Digite um número. (-1 para sair) ");
		scanf("%f", & x);
		if (x != -1) {
			z ++;
			y += x;
		}
	}
	
	printf("\nQuantidade de números: %d", z);
	printf("\nSoma dos números digitados: %.2f", y);
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
	 printf("Média aritimética da turma: %.2f", media/z);
	 printf("\nNúmero de alunos aprovados: %d", aprovados);
 }
