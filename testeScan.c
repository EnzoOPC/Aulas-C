#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");

	int numero;
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	if (numero>0) printf("\nN�mero positivo");
	
	else if (numero<0) printf("\nN�mero negativo");
	
	else printf("\nNulo.");

	return 0; 
}