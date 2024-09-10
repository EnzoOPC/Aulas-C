#include <stdio.h>
#include <locale.h>


// Primeira 

//int converte_em_minuto(int a, int b) {
//	return a * 60 + b;
//}
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int h, m;
//	
//	printf("Digite as horas a serem convertidas: ");
//	scanf("%d", & h);
//	scanf("%d", & m);
//	
//	printf("\nHorário convertido = %d minutos.", converte_em_minuto(h, m));
//	
//	printf("Digite as horas a serem convertidas: ");
//	scanf("%d", & h);
//	scanf("%d", & m);
//	
//	printf("\nHorário convertido = %d minutos.", converte_em_minuto(h, m));
//}

//////////////////////////////////////////////

//Segunda

//int abs(int a) {
//	if (a < 0) return a * -1;
//	else return a;
//}
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int a;                                                   // Dúvida: Como eu crio uma função que pode retornar tanto um int quanto um float?
//
//	printf("Digite um número: ");
//	scanf("%d", & a);
//	
//	printf("Valor absoluto do número digitado: %d", abs(a));
//}

//////////////////////////////////////////////


// Terceira

//int pow(int a, int b) {
//	
//	float result = 1.0;
//	
//	if (b < 0) {
//		a = 1 / a;
//		b *= -b;
//	}
//	
//	for (int i = 0; i < b; i++) result *= a;
//	
//	return result;
//	
//}
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int base, pot;
//	
//	printf("Digite a base: ");
//	scanf("%d", & base);
//	
//	printf("Digite a potência: ");
//	scanf("%d", & pot);
//	
//	printf("%d ^ %d = %d", base, pot, pow(base, pot));
//	
//}


//////////////////////////////////////////////

// Quarta

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int lista[3], soma;
	
	printf("Forneça os números a serem armazenados:\n");
	
	for (int j = 0; j < 3; j++) {
		scanf("%d", & lista[j]);
		soma += lista[j];
	}
	
	for (int i = 0; i < 3; i++) printf("\n Elementos da lista: %d", lista[i]);
	
	printf("\n Soma dos elementos da lista: %d", soma);
	
}





















