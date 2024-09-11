#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");

	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	if (numero>0) printf("\nNúmero positivo");
	
	else if (numero<0) printf("\nNúmero negativo");
	
	else printf("\nNulo.");

	return 0; 
}