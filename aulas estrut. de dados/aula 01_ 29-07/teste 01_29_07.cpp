#include <stdio.h>
#include <locale.h>

/*int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float prova1, prova2, media;
	
	printf("\nDigite a primeira nota: ");
	scanf ("%f", & prova1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", & prova2);
	
	media = ((prova1 + prova2)/2);
	printf("\nM�dia aritm�tica: %.2f", media);
	printf("\nNota 1: %.2f Nota 2: %.2f", prova1, prova2);
	
	if (media >= 5) printf("\nAprovado!");
	
	else printf("\nReprovado.");
}
*/

/*int main() {
	setlocale(LC_ALL, "Portuguese");
	float altura, peso;
	int genero;
	
	printf("Voc� � homem ou mulher (1/2)? ");
	scanf("%d", & genero);
	
	printf("\nDigite sua altura em metros: ");
	scanf("%f", & altura);
	
	if (genero = 1) {
	
		peso = ((72.8 * altura) - 58);
	
		printf("\nPeso ideal: %.2f", peso);
}
	else {
		peso = ((62.1 * altura) - 44.7);
		printf("\nPeso ideal: %.2f", peso);
		
	}
	
}
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	if (numero>0) printf("\nN�mero positivo");
	
	else if (numero<0) printf("\nN�mero negativo");
	
	else printf("\nNulo.");
		 
}

































































