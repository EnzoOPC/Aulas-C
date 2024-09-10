#include <stdio.h>
#include <locale.h>

//#define n 3
//
//float mediaVetor(float vetor[]) {
//	float soma = 0;
//	for (int j = 0; j < n; j++) soma += vetor[j];
//	
//	return soma / n;
//}
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	float nota, vetor[n];
//	
//	printf("Digite as notas dos alunos:\n");
//	for (int i = 0; i < n; i++) {
//		printf("Nota do aluno %2d: ", i+1);
//		scanf("%f", &vetor[i]);
//		
//	}
//	printf("Média dos alunos: %.2f", mediaVetor(vetor));
//}



//int main () {
//	setlocale(LC_ALL,"Portuguese");
//	
//	int num;
//	
//	printf("Quantos números serão fornecidos? ");
//	scanf("%d", &num);
//	
//	#define n num
//	
//	int vetor[n], sumEven = 0, sumOdd = 0;
//
//	for (int i = 0; i < n; i++) {
//		
//		printf("\nDigite o %dº número: ", i+1);
//		scanf("%d", & vetor[i]);
//		if (i % 2 == 0) sumEven += vetor[i];
//		else {
//		sumOdd += vetor[i]; 
//		}
//	}
//	printf("\nNúmeros digitados: ");
//	for (int j = 0; j < n; j++) printf("- %d - ", vetor[j]);
//	printf("\n\nSoma dos índices pares: %3d", sumEven);
//	printf("\n\nSoma dos índices ímpares: %3d", sumOdd);
//}


#define n 5
int sumEven(int vetor[]) {
	int soma = 0;
	
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) soma += vetor[i];
	}
	return soma;
}

int sumOdd(int vetor[]) {
	int soma = 0;
	
	for (int i = 0; i < n; i+2) soma += vetor[i];
	
	return soma;
}



int main () {
	setlocale(LC_ALL,"Portuguese");


	int vetor[n];

	for (int i = 0; i < n; i++) {
		
		printf("\nDigite o %dº número: ", i+1);
		scanf("%d", & vetor[i]);
	}
	printf("\nNúmeros digitados: ");
	for (int j = 0; j < n; j++) printf("- %d - ", vetor[j]);
	printf("\n\nSoma dos índices pares: %3d", sumEven(vetor));
	printf("\n\nSoma dos índices ímpares: %3d", sumOdd(vetor));
}




































































