#include <stdio.h>
#include <locale.h>

//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int num;
//	char tipo;
//	printf("Digite um número inteiro: ");
//	scanf("%d", & num);
//	printf("Soma (+) ou multiplicação (x) ? ");
//	fflush(stdin);
//	scanf("%c", & tipo);
//	
//	if (tipo == 'x') {
//	for(int i = 0; i <= 10; i ++) {
//		printf("\n%2d x %2d = %4d", num, i, (num * i));
//	}
//	}
//	else {
//	for(int i = 0; i <= 10; i ++) {
//		printf("\n%2d + %2d = %4d", num, i, (num + i));
//	}
//}
//}

//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int qtd, count;
//	int index = 0;
//	
//	printf("Quantos números serão fornecidos? ");
//	scanf("%d", & qtd);
//	
//	int num[qtd];
//	
//	printf("\nDigite os números: ");
//	for (int i = 0; i < qtd; i++) scanf("%d", &num[i]);
//	
//	while (count < qtd) {
//	
//		for (int j = 0; j < 11; j ++) printf("\n%3d x %3d = %3d", num[index], j, (num[index] * j));
//		
//		printf("\n-----------------");
//		index ++;
//		count ++;
//	}
//	
//}

//int main() {
//	for (int i = 1; i < 7; i ++) printf("%d\n", i);
//}

//int main() {
//	for (int i = 1; i < 7; i ++) {
//		for (int j = 1; j < 7; j ++) printf("%d - %d\n", i, j);
//	printf("-----\n");
//	}
//}

int main() {
	for (int i = 0; i < 2; i ++) {
		for (int j = 0; j < 2; j ++) {
			for (int z = 0; z < 2; z ++) printf("%d%d%d\n", i, j, z);
		}
	}
}



































