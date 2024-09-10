#include <stdio.h>
#include <locale.h>

//int soma (int a, int b) {
//	return a + b;
//}
//
//int soma3 (int a, int b, int c) {
//	return a + b + c;
//}
//
//int main() {
//	int num1, num2, sum, num3;
//	
//	printf("Digite o valor 1: ");
//	scanf("%d", & num1);
//	
//	printf("Digite o valor 2: ");
//	scanf("%d", & num2);
//	
//	sum = soma(num1, num2);
//	printf("\nSoma = %d\n", sum);
//	
//	printf("\nDigite o valor 1: ");
//	scanf("%d", & num1);
//	
//	printf("Digite o valor 2: ");
//	scanf("%d", & num2);
//	
//	sum = soma(num1, num2);
//	printf("\nSoma = %d\n", sum);
//	
//	printf("Digite o valor 1: ");
//	scanf("%d", & num1);
//	
//	printf("Digite o valor 2: ");
//	scanf("%d", & num2);
//	
//	printf("Digite o valor 3: ");
//	scanf("%d", & num3);
//	
//	sum = soma3(num1, num2, num3);
//	printf("\nSoma = %d", sum);
//	
//}


//int soma (int a, int b) {
//	return a + b;
//}
//
//int sub (int a, int b) {
//	return a - b;
//}
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int num1, num2, result, opt;
//	
//	printf("Digite o valor 1: ");
//	scanf("%d", & num1);
//	
//	printf("Digite o valor 2: ");
//	scanf("%d", & num2);
//	
//	printf("Somar (1) ou Subtrair (2) ? ");
//	scanf("%d", & opt);
//	
//	if (opt == 1) {
//		result = soma(num1, num2);
//		printf("\nSoma = %d", result);
//	}
//	else {
//		result = sub(num1, num2);
//		printf("\nSobtração = %d", result);
//	}
//}

//int max (int a, int b) {
//	if (a > b) return a;
//	else return b;
//}
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int a, b;
//	
//	printf("Digite o primeiro número: ");
//	scanf("%d", & a);
//	
//	printf("Digite o segundo número: ");
//	scanf("%d", & b);
//	
//	printf("\nMaior número: %d", max(a, b));
//}

//int conv(int a, int b) {
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
//	printf("\nHorário convertido para minutos = %d minutos", conv(h, m));
//	
//}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota[3], media, soma = 0;
	
	for (int i = 0; i < 3; i++) {
		printf("Digite a nota do aluno. ");
		scanf("%f", &nota[i]);
		soma += nota[i];
	}
	media = soma/3;
	
	printf("A média da turma é: %.2f \n", media);
	
	printf("Notas: \n");
	for (int j = 0; j < 3; j++) printf("%.2f\n", nota[j]);
	
}































































